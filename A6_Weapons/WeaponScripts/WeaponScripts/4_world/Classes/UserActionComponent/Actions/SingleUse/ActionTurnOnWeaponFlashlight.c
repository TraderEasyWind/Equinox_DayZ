modded class ActionTurnOnWeaponFlashlight: ActionSingleUseBase {
	override typename GetInputType() return A6ToggleLightPistol;
}
class A6ToggleLightPistol : DefaultActionInput {
	void A6ToggleLightPistol(PlayerBase player) {
		SetInput("UAA6ToggleLightPistol");
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