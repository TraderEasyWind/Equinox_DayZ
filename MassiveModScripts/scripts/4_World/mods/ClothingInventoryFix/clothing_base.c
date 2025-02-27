modded class Clothing extends Clothing_Base
{
	override bool CanPutInCargoClothingConditions(EntityAI parent)
	{
		bool is_hidden_stash_exception = false;
		
		if ( parent.IsInherited( UndergroundStash ) )
			is_hidden_stash_exception = true;
		
		if ( GetNumberOfItems() == 0 || is_hidden_stash_exception )
		{
			EntityAI cargoParent = parent.GetHierarchyParent();
			ClothingBase parentClothing = ClothingBase.Cast(parent);
			if (cargoParent && parentClothing && !IsKindOfPouch(parent))
				return !(parent.IsClothing() && cargoParent.IsClothing());			
			return true;
		}
		
		return false;
	}

	bool IsKindOfPouch(EntityAI parent)
	{		
		return parent.IsInherited(SmershBag);
	}

	override bool CanReceiveItemIntoCargoClothingConditions(EntityAI item)
	{
		if (GetInventory().IsInCargo())
			return false;
		return true;
	}

	override bool CanLoadItemIntoCargoClothingConditions(EntityAI item)
	{		
		if (GetInventory().IsInCargo())
			return false;
		return true;
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if(!super.CanReceiveAttachment(attachment, slotId))
		{
			return false;
		}

		if (IsInherited(SmershVest) && attachment && attachment.IsInherited(SmershBag) && GetInventory().IsInCargo())
		{
			if(attachment.GetInventory() && attachment.GetInventory().GetCargo())
			{
				return attachment.GetInventory().GetCargo().GetItemCount() == 0;
			}
		}
		
		return true;
	}
};