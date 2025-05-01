class DLS_KeyCard_InfiniteUse: Inventory_Base {
	override void SetActions() {
		super.SetActions();
		AddAction(ActionUnlockDLSDoor);
	}
}

class DLS_KeyCard_Labs_Black : DLS_KeyCard_InfiniteUse {}
class DLS_KeyCard_Labs_Blue : DLS_KeyCard_InfiniteUse {}
class DLS_KeyCard_Labs_Green : DLS_KeyCard_InfiniteUse {}
class DLS_KeyCard_Labs_Red : DLS_KeyCard_InfiniteUse {}
class DLS_KeyCard_Labs_Violet : DLS_KeyCard_InfiniteUse {}
class DLS_KeyCard_Labs_Yellow : DLS_KeyCard_InfiniteUse {}