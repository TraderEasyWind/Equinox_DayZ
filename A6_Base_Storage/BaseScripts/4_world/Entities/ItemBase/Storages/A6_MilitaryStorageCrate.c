class A6_MilitaryStorageCrate : A6_Openable_Placeable_Base {
    override void SetActions() {
        super.SetActions();
        #ifdef CodeLock
            AddAction(ActionInteractLockOnA6);
            AddAction(ActionManageLockOnA6);
            AddAction(ActionLockAdminOnA6);
        #endif
    }
    override bool CanBeDismantled() {
		return false;
	}
}