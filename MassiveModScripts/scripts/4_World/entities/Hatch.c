class MassiveModHatch : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModExitHatch : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatch2 : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatch3 : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatch4 : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatchUp : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatchUp2 : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatchUp3 : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
class MassiveModHatchUp4 : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
}
modded class PlayerBase
{
    override void SetActions(out TInputActionMap InputActionMap)
    {
        super.SetActions(InputActionMap);
        AddAction(ActionEnterHatch, InputActionMap);
    }
}
class ActionEnterHatchCB : ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUse;
	}
	
	override void InitActionComponent()
	{
		m_Interrupted = false;
		m_Canceled = false;

		CreateActionComponent();
		if ( m_ActionData.m_ActionComponent )
		{ 
			m_ActionData.m_ActionComponent.Init(m_ActionData);
		}
		
		Object targetObject = m_ActionData.m_Target.GetObject();
		MassiveModHatch hatch = MassiveModHatch.Cast( targetObject );
		MassiveModHatch2 hatch2 = MassiveModHatch2.Cast( targetObject );
		MassiveModHatch3 hatch3 = MassiveModHatch3.Cast( targetObject );
		MassiveModHatch4 hatch4 = MassiveModHatch4.Cast( targetObject );
		
		
		
		MassiveModExitHatch Exit = MassiveModExitHatch.Cast( targetObject );
		MassiveModHatchUp Exit1 = MassiveModHatchUp.Cast( targetObject );
		MassiveModHatchUp2 Exit2 = MassiveModHatchUp2.Cast( targetObject );
		MassiveModHatchUp3 Exit3 = MassiveModHatchUp3.Cast( targetObject );
		MassiveModHatchUp4 Exit4 = MassiveModHatchUp4.Cast( targetObject );
		
		
		PlayerBase player = PlayerBase.Cast(m_ActionData.m_Player);
		
		if ( hatch )
		{
			vector TeleportLocation = "2944.53 2209.54 2676.83";
		   	vector PlayerDirection = hatch.GetDirection();
		   	DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation );
		   	DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection );
		}
		
		if ( Exit )
		{
			vector TeleportLocation2 = "5845.73828125 51.47824478149414 8624.33203125";
			vector PlayerDirection2 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation2 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection2 );
		}

		if ( hatch3 )
		{
			vector TeleportLocation3 = "3054.15 2225.75 2758.33";
			vector PlayerDirection3 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation3 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection3 );
		}
		
		if ( Exit3 )
		{
			vector TeleportLocation4 = "5602.47 120.387 8158.68";
			vector PlayerDirection4 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation4 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection4 );
		}

		if ( hatch4 )
		{
			vector TeleportLocation5 = "3070.03 2215.76 2588.99";
			vector PlayerDirection5 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation5 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection5 );
		}

		if ( Exit2 )
		{
			vector TeleportLocation6 = "5312.87 35.6904 8728.3";
			vector PlayerDirection6 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation6 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection6 );
		}

		if ( hatch2 )
		{
			vector TeleportLocation8 = "2885.66 2225.84 2611.21";
			vector PlayerDirection8 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation8 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection8 );
		}


		if ( Exit1 )
		{
			vector TeleportLocation7 = "6027.73 22.3185 8327.58";
			vector PlayerDirection7 = Exit.GetDirection();
			DeveloperTeleport.SetPlayerPosition( m_ActionData.m_Player, TeleportLocation7 );
			DeveloperTeleport.SetPlayerDirection( m_ActionData.m_Player, PlayerDirection7 );
		}
		
		
		
		m_ActionData.m_State = UA_PROCESSING;
		RegisterAnimationEvent("ActionExec", UA_ANIM_EVENT);
		m_SoundObject = m_ActionData.m_Action.PlayActionSound(m_ActionData.m_Player);
	}
}

class ActionEnterHatch: ActionSingleUseBase
{
	void ActionEnterHatch()
	{
		m_CallbackClass = ActionEnterHatchCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_POKE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_FullBody = true;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
	}
	
	override string GetText()
    {
        PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
        if ( player )
        {
            ActionManagerBase actmgr = player.GetActionManager();
            Object targetObject = actmgr.FindActionTarget().GetObject();

            MassiveModHatch hatch = MassiveModHatch.Cast( targetObject );
			MassiveModHatch2 hatch2 = MassiveModHatch2.Cast( targetObject );
			MassiveModHatch3 hatch3 = MassiveModHatch3.Cast( targetObject );
			MassiveModHatch4 hatch4 = MassiveModHatch4.Cast( targetObject );
			
			
			
            MassiveModExitHatch Exit = MassiveModExitHatch.Cast( targetObject );
			MassiveModHatchUp Exit1 = MassiveModHatchUp.Cast( targetObject );
			MassiveModHatchUp2 Exit2 = MassiveModHatchUp2.Cast( targetObject );
			MassiveModHatchUp3 Exit3 = MassiveModHatchUp3.Cast( targetObject );
			MassiveModHatchUp4 Exit4 = MassiveModHatchUp4.Cast( targetObject );
			
            
            if ( hatch )
            {
                return "Enter Bunker";
            }
			if ( Exit )
            {
                return "Exit Bunker";
            }

        }
        
        return "Enter Bunker";
    }
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		
		
		MassiveModHatch hatch = MassiveModHatch.Cast( targetObject );
		MassiveModHatch2 hatch2 = MassiveModHatch2.Cast( targetObject );
		MassiveModHatch3 hatch3 = MassiveModHatch3.Cast( targetObject );
		MassiveModHatch4 hatch4 = MassiveModHatch4.Cast( targetObject );
		
		
		
		MassiveModExitHatch Exit = MassiveModExitHatch.Cast( targetObject );
		MassiveModHatchUp Exit1 = MassiveModHatchUp.Cast( targetObject );
		MassiveModHatchUp2 Exit2 = MassiveModHatchUp2.Cast( targetObject );
		MassiveModHatchUp3 Exit3 = MassiveModHatchUp3.Cast( targetObject );
		MassiveModHatchUp4 Exit4 = MassiveModHatchUp4.Cast( targetObject );
		
		
		if ( targetObject )
		{
			if ( hatch )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( hatch2 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( hatch3 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( hatch4 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			
			
			
			
			if ( Exit )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( Exit1 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( Exit2 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( Exit3 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
			if ( Exit4 )
			{
				//if ( hatch.HasProperDistance( "center", player ) )
				//{
					return true;
				//}
			}
		}
		return false;
	}
	
	/*override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if( super.SetupAction( player, target, item, action_data, extra_data ) )
		{
			SetAnimation( target );
			return true;
		}
		return false;
	}
	
	protected void SetAnimation( ActionTarget target )
	{
		m_CommandUID = DayZPlayerConstants.CMD_GESTUREFB_SHRUG;
	}*/
}