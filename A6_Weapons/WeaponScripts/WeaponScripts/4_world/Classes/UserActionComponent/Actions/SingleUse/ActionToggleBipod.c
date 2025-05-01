class ActionToggleBipod : ActionSingleUseBase {
	A6_Bipod_Base m_Bipod;
	void ActionToggleBipod() {
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHBARREL;
	}	
	override void CreateConditionComponents () {
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	override typename GetInputType() return A6BipodActionInput;
	override string GetText() {
		return "Toggle Bipod";
	}
	override bool HasTarget() {
		return false;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {
		if ( item.IsInherited(Weapon_Base) ) {
			m_Bipod = A6_Bipod_Base.Cast(item.FindAttachmentBySlotName("weaponBipod"));
		} else {
			return false;
		}	
		if ( m_Bipod ) {
			return true;
		}
		return false;
	}
	override void OnExecute( ActionData action_data ) {
    	if ( m_Bipod ) {	
        	if ( !m_Bipod.IsOpen() ) {	
        	    m_Bipod.Open();
        	} else {
        		m_Bipod.Close();
        	}
        };	    
    }
}
class A6BipodActionInput : DefaultActionInput {
	void A6BipodActionInput(PlayerBase player) {
		SetInput("UAA6ToggleBipod");
		m_InputType = ActionInputType.AIT_SINGLE;	
	}
	override void OnActionStart() {
		super.OnActionStart();
		m_Active = false;
	}
	override bool WasEnded() {
		return false;
	}	
}