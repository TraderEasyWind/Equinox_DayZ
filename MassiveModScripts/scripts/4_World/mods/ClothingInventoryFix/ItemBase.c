modded class ItemBase extends InventoryItem
{
    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		// original code
		// what it does is checking if the attachment has cargo and if it's not inside player, deny the attachment
		// GameInventory attachmentInv = attachment.GetInventory();
		// if (attachmentInv && attachmentInv.GetCargo() && attachmentInv.GetCargo().GetItemCount() > 0)
		// {
		// 	if (GetHierarchyParent() && !GetHierarchyParent().IsInherited(PlayerBase))
		// 		return false;
		// }
		
		// InventoryLocation loc = new InventoryLocation();
		// attachment.GetInventory().GetCurrentInventoryLocation(loc);
		// if (loc && loc.IsValid() && !GetInventory().AreChildrenAccessible())
		// 	return false;
		
		// return super.CanReceiveAttachment(attachment, slotId);
		return true;
	}
	
	override bool CanLoadAttachment( EntityAI attachment )
	{				
		return true;
	}
};