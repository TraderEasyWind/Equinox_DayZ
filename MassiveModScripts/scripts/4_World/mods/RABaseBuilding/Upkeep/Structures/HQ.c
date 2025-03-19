#ifdef RA_BaseBuilding_Scripts
modded class TerritoryHQ : ItemBase
{
    override float GetCostToUpkeep()
    {
        return 1.4;
    }

	//override bool CanReleaseAttachment(EntityAI attachment)
	//{
	//	if (attachment && attachment.GetInventory() && GetInventory())
	//	{
	//		InventoryLocation il = new InventoryLocation();
	//		attachment.GetInventory().GetCurrentInventoryLocation(il);
	//		if (il.IsValid())
	//		{
	//			int slot = il.GetSlot();
	//
	//			// Check if the slot is HQ_Nails
	//			if (slot == InventorySlots.GetSlotIdFromString("HQ_Nails"))
	//			{
	//				return false; // Prevent releasing attachment from HQ_Nails
	//			}
	//
	//			return !GetInventory().GetSlotLock(slot);
	//		}
	//	}
	//	return true;
	//}
}
#endif