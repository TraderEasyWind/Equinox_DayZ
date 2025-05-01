class A6_SureFire_M951V_Light extends A6_Switchable_Base {
    SureFireM951VLight 	m_Light;
	static int			GLASS_ID = 2;
	static int			REFLECTOR_ID = 3;
	static string 		LIGHT_OFF_GLASS 	= "dz\\gear\\tools\\data\\flashlight_glass.rvmat";
	static string 		LIGHT_OFF_REFLECTOR = "dz\\weapons\\attachments\\data\\m4_flashlight.rvmat";
	static string 		LIGHT_ON_GLASS 		= "dz\\gear\\tools\\data\\flashlight_glass_on.rvmat";
	static string 		LIGHT_ON_REFLECTOR 	= "dz\\weapons\\attachments\\data\\m4_flashlight_on.rvmat";
	override ScriptedLightBase GetLight() {
		return m_Light;
	}
	override void OnWorkStart() {
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) {
			m_Light = SureFireM951VLight.Cast(  ScriptedLightBase.CreateLight(SureFireM951VLight, "0 0 0", 0.08)  ); // Position is zero because light is attached on parent immediately.
			m_Light.AttachOnMemoryPoint(this, "beamStart", "beamEnd");
			SetObjectMaterial(GLASS_ID, LIGHT_ON_GLASS);
			SetObjectMaterial(REFLECTOR_ID, LIGHT_ON_REFLECTOR);
		}
	}
	override void OnWork( float consumed_energy ) {
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) {
			Battery9V battery = Battery9V.Cast( GetCompEM().GetEnergySource() );
			if (battery  &&  m_Light) {
				float efficiency = battery.GetEfficiency0To1();
				if ( efficiency < 1 ) {
					m_Light.SetIntensity( efficiency, GetCompEM().GetUpdateInterval() );
				} else {
					m_Light.SetIntensity( 1, 0 );
				}
			}
		}
	}
	override void OnWorkStop() {
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) {
			if (m_Light)
				m_Light.FadeOut();
			m_Light = NULL;
			SetObjectMaterial(GLASS_ID, LIGHT_OFF_GLASS);
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