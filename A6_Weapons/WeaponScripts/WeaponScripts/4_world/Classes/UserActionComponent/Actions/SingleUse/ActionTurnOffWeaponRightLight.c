class ActionTurnOffWeaponRightLight: ActionSingleUseBase {
	ItemBase m_Laser;
	void ActionTurnOffWeaponRightLight() {
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_OFF;
		m_Text = "#switch_off";
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
		if ( m_Laser && m_Laser.HasEnergyManager() && m_Laser.GetCompEM().CanSwitchOff() ) {
			return true;
		}
		return false;
	}
	override void OnExecuteServer( ActionData action_data ) {		
		if ( m_Laser.HasEnergyManager() ) {
			if ( m_Laser.GetCompEM().IsSwitchedOn() ) {
				m_Laser.GetCompEM().SwitchOff();
			}
			Weapon_Base.Cast(action_data.m_MainItem).FlashlightOff();
		}
	}
};	