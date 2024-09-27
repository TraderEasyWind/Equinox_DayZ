modded class PlayerContainer
{
	override void ToggleContainer( Widget w, EntityAI item )
	{
		int slotId;
		string slotName;
		item.GetInventory().GetCurrentAttachmentSlotInfo(slotId, slotName);

		if (slotName == "Back")
		{
			Clothing clothItem;
			if(Class.CastTo(clothItem, item))
			{
				if ( clothItem.HasValidZipperSound() )
				{
					InventoryLocation il = new InventoryLocation;
					item.GetInventory().GetCurrentInventoryLocation( il );
					SlotsIcon icon = m_InventorySlots.Get( il.GetSlot() );
					ClosableContainer c = ClosableContainer.Cast( m_ShowedItems.Get( item ) );
					Param1<bool> paramOpened = new Param1<bool>(!c.IsOpened());

					item.RPCSingleParam(3675309, paramOpened, true);
				}
			}
		}
		
		super.ToggleContainer(w, item);
	}

	void CloseContainer( EntityAI item, bool noisy = false )
	{
		InventoryLocation il = new InventoryLocation;
		item.GetInventory().GetCurrentInventoryLocation( il );
		SlotsIcon icon = m_InventorySlots.Get( il.GetSlot() );
		ClosableContainer c = ClosableContainer.Cast( m_ShowedItems.Get( item ) );

		if (c == NULL)
			return;
		
		if (c.IsOpened())
		{
			if (noisy)
			{
				Param1<bool> paramOpened = new Param1<bool>(!c.IsOpened());
				item.RPCSingleParam(3675309, paramOpened, true);
			}
			
			c.Close();

			if (icon)
			{
				Widget ric = icon.GetRadialIcon();
				ric.Show(!c.IsOpened());
				icon.GetRadialIconClosed().Show(c.IsOpened());
			}
		}

		RecomputeOpenedContainers();
		Refresh();
	}
};
