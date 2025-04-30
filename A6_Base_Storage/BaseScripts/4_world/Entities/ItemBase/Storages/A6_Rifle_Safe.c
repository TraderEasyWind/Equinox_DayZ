class A6_Rifle_Safe : A6_Openable_Base {
    void A6_Rifle_Safe () {
        #ifdef RA_BaseBuilding_Scripts
            HideStaticCodelock();
        #endif
    }
    void HideStaticCodelock() {
        SetObjectTexture(1, "");
        SetObjectMaterial(1, "");
    }
	override void SetActions() {
		super.SetActions();
        #ifdef CodeLock
            AddAction(ActionInteractLockOnA6);
            AddAction(ActionManageLockOnA6);
            AddAction(ActionLockAdminOnA6);
        #endif
	}
    override bool CanBeDismantled() {
		return true;
	}
}
class A6_Rifle_Safe_Green extends A6_Rifle_Safe {}
class A6_Rifle_Safe_Black extends A6_Rifle_Safe {}