modded class ActionDismantleBaseCB: ActionContinuousBaseCB
{	
	override void CreateActionComponent()
	{
#ifdef DIAG_DEVELOPER
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
#else
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.BASEBUILDING_REPAIR_SLOW);
#endif
	}
}
modded class ActionDismantleBase: ActionContinuousBase
{	
	override void OnFinishProgressServer(ActionData action_data)
	{
		super.OnFinishProgressServer(action_data);
		if (action_data.m_MainItem) 
		{
			action_data.m_MainItem.DecreaseHealth(UADamageApplied.DISMANTLE, false);
		}
	}	
};