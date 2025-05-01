class SureFireM951VLight extends SpotLightBase {
	private static float m_DefaultBrightness = 8.05;
	private static float m_DefaultRadius = 70;
	private static float m_DefaultAngle = 120;
	void SureFireM951VLight() {
		SetVisibleDuringDaylight( true );
		SetRadiusTo( m_DefaultRadius );
		SetSpotLightAngle( m_DefaultAngle );
		SetCastShadow( true );
		SetBrightnessTo( m_DefaultBrightness );
		SetFadeOutTime( 0.15 );
		SetAmbientColor( 0.7, 0.8, 1.00 );
		SetDiffuseColor( 0.7, 0.8, 1.00 );
		SetDisableShadowsWithinRadius( 1.2 );
	}
	void SetIntensity( float coef, float time ) {
		FadeBrightnessTo( m_DefaultBrightness * coef, time );
		FadeRadiusTo( m_DefaultRadius * coef, time );
	}
	override void UpdateLightMode( string slotName ) {
		switch ( slotName ) {
			case "weaponLightLeft":
				SetSpotLightAngle( m_DefaultAngle/2 );
				SetRadiusTo( m_DefaultRadius * 1.8 );
			break;
			case "weaponLightRight":
				SetSpotLightAngle( m_DefaultAngle/2 );
				SetRadiusTo( m_DefaultRadius * 1.8 );
			break;
			case "weaponLightTop":
				SetSpotLightAngle( m_DefaultAngle/2 );
				SetRadiusTo( m_DefaultRadius * 1.8 );
			break;
			
			default:
				SetSpotLightAngle( m_DefaultAngle );
				SetRadiusTo( m_DefaultRadius );
			break;
		}
	}
}