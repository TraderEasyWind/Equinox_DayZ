class A6_Vault : A6_Openable_Base {
    void A6_Vault () {
        #ifdef RA_BaseBuilding_Scripts
            HideStaticCodelock();
        #endif
    }
    void HideStaticCodelock() {
        SetObjectTexture(6, "");
        SetObjectMaterial(6, "");
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