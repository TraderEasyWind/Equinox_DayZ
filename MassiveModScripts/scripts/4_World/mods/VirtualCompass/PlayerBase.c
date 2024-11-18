modded class PlayerBase extends ManBase
{
	private ItemBase m_VirtualCompassItem;
	
	void ~PlayerBase()
	{
		if ( m_VirtualCompassItem )
			HideVirtualCompass();
	}

	private void UpdateVirtualCompass()
	{
		vector cam_pos = GetGame().GetCurrentCameraPosition() + Vector(0.00,-0.1,0);
		vector cam_dir = GetGame().GetCurrentCameraDirection() + Vector(0.00,-0.1,0);
		vector cam_angles = cam_dir.VectorToAngles();
		vector obj_pos = cam_pos + cam_dir * 0.25;
		vector obj_rot = vector.Zero;

		obj_rot[0] = cam_angles[0] - 90;
		obj_rot[2] = -(cam_angles[1] + 45);

		m_VirtualCompassItem.SetPosition( obj_pos );
		m_VirtualCompassItem.SetOrientation( obj_rot );
	}

	void ShowVirtualCompass(int type)
	{
		if ( IsMissionClient() )
		{
			if ( type == 1)
			{
				m_VirtualCompassItem = ItemBase.Cast( GetGame().CreateObjectEx( "Compass", GetPosition(), ECE_NOLIFETIME|ECE_LOCAL ) );
				m_VirtualCompassItem.Open();
				m_VirtualCompassItem.SetTakeable(false);
			}
			if ( type == 2)
			{
				m_VirtualCompassItem = ItemBase.Cast( GetGame().CreateObjectEx( "OrienteeringCompass", GetPosition(), ECE_NOLIFETIME|ECE_LOCAL ) );
				m_VirtualCompassItem.SetTakeable(false);
			}
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.UpdateVirtualCompass, 1, true);
		}
	}

	void HideVirtualCompass()
	{
		if ( IsMissionClient() )
		{
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.UpdateVirtualCompass);
			m_VirtualCompassItem.Delete();
		}
	}
	
	int HasCompass()
	{
		array<EntityAI> itemsArray = new array<EntityAI>;
		GetInventory().EnumerateInventory(InventoryTraversalType.PREORDER, itemsArray);        
		for (int i = 0; i < itemsArray.Count(); i++){
			if (itemsArray.Get(i)){ 
				string itemType = itemsArray.Get(i).GetType();
				itemType.ToLower();
                if (itemType.Contains("orienteeringcompass")){
                    return 2;
                }
                if (itemType.Contains("compass")){
                    return 1;
                }
			}
		}
		return 0;
	}
};
