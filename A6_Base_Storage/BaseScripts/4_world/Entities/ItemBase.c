modded class ItemBase extends InventoryItem {
	vector Get_ItemPlacingPos() {	
		return "0 0 0";
	}
	vector Get_ItemPlacingOrientation() {	
		return "0 0 0";
	}
	string Get_ItemName() {
		return GetType().Substring(0,GetType().Length() - 4);
	}
	string Get_KitName() {
		return GetType() + "_Kit";
	}
    override void SetActions() {
        super.SetActions();
        AddAction(ActionA6GreenHouseDismantle);
    }
}