modded class Clothing {
	override bool CanPutInCargoClothingConditions(EntityAI parent) {
		bool is_hidden_stash_exception = parent.IsInherited(UndergroundStash);
		if (GetNumberOfItems() == 0 || is_hidden_stash_exception) {
			if (parent.GetHierarchyParent() && !IsKindOfPouch(parent)) {
				return !(parent.IsClothing() && parent.GetHierarchyParent().IsClothing());
			}
			return true;
		}
		return false;
	}
	bool IsKindOfPouch(EntityAI parent) {
		return parent.IsKindOf("SmershBag");
	}
	override bool CanReceiveItemIntoCargoClothingConditions(EntityAI item) {
		return !GetInventory().IsInCargo();
	}
	override bool CanLoadItemIntoCargoClothingConditions(EntityAI item) {		
		return !GetInventory().IsInCargo();
	}
}	