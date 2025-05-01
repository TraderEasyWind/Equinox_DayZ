class ActionToggleLightRightIR : ActionSingleUseBase {
	A6_Laser_Base m_Laser;
	void ActionToggleLightRightIR() {
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHBARREL;
	}	
	override void CreateConditionComponents () {
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	override typename GetInputType() return LightRightIRActionInput;
	override string GetText() {
		return "Switch Laser to IR";
	}
	override bool HasTarget() {
		return false;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {
		if ( item.IsInherited(Rifle_Base) || item.IsInherited(BoltActionRifle_Base)) {
			m_Laser = A6_Laser_Base.Cast(item.FindAttachmentBySlotName("weaponLightRight"));
		} else {
			return false;
		}
		if ( m_Laser && m_Laser.isIRCompatibleLaser() ) {
			return true;
		}
		return false;
	}
	override void OnExecute( ActionData action_data ) {
        if ( m_Laser && m_Laser.isIRCompatibleLaser() ) {	
        	m_Laser.ToggleIRActionScript();
        }		
    }
}
class LightRightIRActionInput : DefaultActionInput {
	void LightRightIRActionInput(PlayerBase player) {
		SetInput("UAA6ToggleLightRightIR");
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