modded class ActionMMGCloseAndOpen
{
    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINone;
        m_ConditionTarget = new CCTNone;
    }
    
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        if( !target ) return false;
        
        if(!IsInReach(player, target, 1.5)) 
        {
            return false;
        }
        
        mmg_storage_openable_base crate = mmg_storage_openable_base.Cast(target.GetObject());
        DeployableContainer_Base deployableContainer = DeployableContainer_Base.Cast(target.GetObject());

        if(crate) 
        {
            #ifdef CodeLock
            if ( (crate.IsCodeLocked()) && (!crate.IsOpen()) )
                return false;
            #endif

            #ifdef EXPANSIONMODBASEBUILDING
            if (crate.IsExpansionCodelocked())
                return false;
            #endif

            if (crate.IsOpen()) {
                m_Text = "#close";
            } else {
                m_Text = "#open";
            }
            
            return true;
        }

        if(deployableContainer)
        {
            if (deployableContainer.IsOpen()) {
                m_Text = "#close";
            } else {
                m_Text = "#open";
            }
            return true;
        }
        
        mmg_greenhouse_base mmggh = mmg_greenhouse_base.Cast(target.GetObject());
        
        if ( mmggh )  {

            if (target.GetObject().GetActionComponentName(target.GetComponentIndex()) != "doors_1") {
                return false;
            }


            if (mmggh.IsOpen()) {
                m_Text = "#close";
            } else {
                m_Text = "#open";
            }
            
            return true;
        }
            
        return false;
    }

    override void OnStartServer( ActionData action_data )
    {
        ItemBase crate = ItemBase.Cast(action_data.m_Target.GetObject());
        DeployableContainer_Base deployableContainer = DeployableContainer_Base.Cast(action_data.m_Target.GetObject());

        if(crate)
        {
            if (crate.IsOpen())
            {
                crate.Close();
            } else 
            {
                crate.Open();
            }

            return;
        }

        if(deployableContainer)
        {
            if (deployableContainer.IsOpen())
            {
                deployableContainer.Close();
            }
            else
            {
                deployableContainer.Open();
            }
            return;
        }
    }
};