class A6_ArmorRack : A6_Storage_Base {
	override bool CanBeDismantled() {
		return true;
	}
    override bool AcceptsCodeLocks() {
        return false;
    }
}