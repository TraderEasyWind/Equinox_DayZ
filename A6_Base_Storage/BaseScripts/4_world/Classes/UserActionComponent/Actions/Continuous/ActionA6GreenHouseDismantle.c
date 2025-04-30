class ActionA6GreenHouseDismantleCB : ActionContinuousBaseCB {
	override void CreateActionComponent() {
		m_ActionData.m_ActionComponent = new CAContinuousTime( GetA6BaseStorageConfig().DismantleToolTime );
	}
}
class ActionA6GreenHouseDismantle: ActionContinuousBase {
	void ActionA6GreenHouseDismantle() {
		m_CallbackClass = ActionA6GreenHouseDismantleCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	override void CreateConditionComponents() {
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
	}
	override string GetText() {
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player ) {
			return "Dismantle";
		}
		return "";
	}
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
        string tool = GetA6BaseStorageConfig().DismantleTool;
        HumanInventory inv = player.GetHumanInventory();
		EntityAI hand = inv.GetEntityInHands();
    	Object targetObject = target.GetObject();
    	if (targetObject) {
    	    A6_GreenHouse_Base greenhouse = A6_GreenHouse_Base.Cast(targetObject);
    	    if (hand && hand.GetType() == tool && greenhouse && greenhouse.CanBeDismantled() && greenhouse.IsEmpty()) {
    	        return true;
    	    }
    	}
    	return false;
	}
	override void OnFinishProgressServer( ActionData action_data ) {
		PlayerBase player = PlayerBase.Cast(action_data.m_Player);
		ItemBase item = ItemBase.Cast( action_data.m_Target.GetObject() );
		vector pos = action_data.m_Player.GetPosition();
		string name = "";
		if(item) {
			name = item.Get_KitName();
			item.Delete();
		}
		action_data.m_MainItem.DecreaseHealth( GetA6BaseStorageConfig().DismantleToolDamage, false );	
		ItemBase.Cast( GetGame().CreateObject(name, pos) );
		if ( GetA6BaseStorageConfig().EnableDismantleLogging ) {
			LogDismantleAction(player,item);
		}	
		return;	
	}
	void LogDismantleAction(PlayerBase player, ItemBase item) {
	    GetGame().AdminLog("[A6_Base_Storage][Dismantle]: " + player.GetIdentity().GetName() + " (" + player.GetIdentity().GetPlainId() + ") Dismantled " + item.GetType() + " at " + item.GetPosition());
	}
}