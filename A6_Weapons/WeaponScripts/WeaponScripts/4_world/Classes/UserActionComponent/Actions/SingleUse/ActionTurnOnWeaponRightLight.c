class ActionTurnOnWeaponRightLight: ActionSingleUseBase {
	ItemBase m_Laser;
	void ActionTurnOnWeaponRightLight() {
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		m_Text = "#switch_on";
	}
	override void CreateConditionComponents() {	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	override typename GetInputType() return A6LightRightActionInput;
	override bool HasTarget() {
		return false;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {
		if ( item.IsInherited(Weapon_Base) ) {
			m_Laser = ItemBase.Cast(item.FindAttachmentBySlotName("weaponLightRight"));
		} else { 
			return false;
		}
		if ( m_Laser && m_Laser.HasEnergyManager() && m_Laser.GetCompEM().CanSwitchOn() && m_Laser.GetCompEM().CanWork() ) {
			return true;
		}
		return false;
	}
	override void OnExecuteServer( ActionData action_data ) {
		if ( m_Laser.HasEnergyManager() ) {
			if ( m_Laser.GetCompEM().CanWork() ) {
				m_Laser.GetCompEM().SwitchOn();
			}
			Weapon_Base.Cast(action_data.m_MainItem).FlashlightOn();
		}
	}
};	
class A6LightRightActionInput : DefaultActionInput {
	void A6LightRightActionInput(PlayerBase player) {
		SetInput("UAA6ToggleLightRight");
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