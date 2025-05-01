class A6_Foxtrot_PistolLight : Switchable_Base{
	FoxtrotlightLight 	m_FoxLight;
	static int			REFLECTOR_ID = 1;
	static string 		LIGHT_OFF_REFLECTOR = "A6_Weapons\\Attachments\\Flashlights\\Foxtrot\\data\\camo_foxtrot_reflect.rvmat";
	static string 		LIGHT_ON_REFLECTOR = "A6_Weapons\\Attachments\\Flashlights\\Foxtrot\\data\\camo_foxtrot_reflect_on.rvmat";
	override ScriptedLightBase GetLight() {
		return m_FoxLight;
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( !parent.IsKindOf("PlateCarrierHolster") && !parent.IsKindOf("PlateCarrierComplete") && !parent.IsKindOf("CarrierHolsterSolo") && !parent.IsKindOf("ChestHolster") ) {
			return true;
		}
		return false;
	}
	override void OnWorkStart() {
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) {
			m_FoxLight = FoxtrotlightLight.Cast(  ScriptedLightBase.CreateLight(FoxtrotlightLight, "0 0 0", 0.08)  );
			m_FoxLight.AttachOnMemoryPoint(this, "beamStart", "beamEnd");
			SetObjectMaterial(REFLECTOR_ID, LIGHT_ON_REFLECTOR);
		}
	}
	override void OnWork( float consumed_energy ) {
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) {
			Battery9V battery = Battery9V.Cast( GetCompEM().GetEnergySource() );
			if (battery  &&  m_FoxLight) {
				float efficiency = battery.GetEfficiency0To1();
				if ( efficiency < 1 ) {
					m_FoxLight.SetIntensity( efficiency, GetCompEM().GetUpdateInterval() );
				} else {
					m_FoxLight.SetIntensity( 1, 0 );
				}
			}
		}
	}
	override void OnWorkStop() {
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) {
			if (m_FoxLight)
				m_FoxLight.FadeOut();
			m_FoxLight = NULL;
			SetObjectMaterial(REFLECTOR_ID, LIGHT_OFF_REFLECTOR);
		}	
	}
	override void OnInventoryExit(Man player) {
		super.OnInventoryExit(player);
		if ( GetCompEM().IsWorking() ) {
			if (player) {
				vector ori_rotate = player.GetOrientation();
				ori_rotate = ori_rotate + Vector(270,0,0);
				SetOrientation(ori_rotate);
			}
		}
	}
	override void SetActions() {
		super.SetActions();
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
	}
	override bool IsLightSource() {
		return true;
	}
}
class A6_Foxtrot_Tan_PistolLight : A6_Foxtrot_PistolLight{}