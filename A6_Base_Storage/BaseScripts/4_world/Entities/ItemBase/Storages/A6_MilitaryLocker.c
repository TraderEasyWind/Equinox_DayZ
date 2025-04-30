class A6_MilitaryLocker_Base : A6_Openable_Base {
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
class A6_MilitaryLocker_Green extends A6_MilitaryLocker_Base {}
class A6_MilitaryLocker_Tan extends A6_MilitaryLocker_Base {}
class A6_MilitaryLocker_Black extends A6_MilitaryLocker_Base {}