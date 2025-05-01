class DLS_KeyCard_Base: Inventory_Base {
	override void SetActions() {
		super.SetActions();
		AddAction(ActionUnlockDLSDoor);
	}
}
class DLS_KeyCard_Labs_Access : DLS_KeyCard_Base {}