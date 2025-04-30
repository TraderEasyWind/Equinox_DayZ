class BaseLight extends PointLightBase {
	void BaseLight() {
		SetVisibleDuringDaylight(false);
		SetRadiusTo(5);
		SetBrightnessTo(5);
		SetCastShadow(true);
		SetFadeOutTime(0.3);
		FadeIn(0.2);
		SetAmbientColor(1.0, 0.88, 0.65);
		SetDiffuseColor(1.0, 0.88, 0.65);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.0001);
		SetDancingShadowsMovementSpeed(0.00001);
		SetDancingShadowsAmplitude(0.00001);
	}
}