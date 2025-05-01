class A6_Vector_Base : RifleBoltFree_Base {
	void A6_Vector_Base() {	
		UnfoldSightsA6(this);
		ShowIrons4Laser(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new VSSRecoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			FoldSightsA6(this);
		}
		switch (slot_name) {
			case "weaponLightTop":
				HideIrons4Laser(this);
			break;	
		}	
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			UnfoldSightsA6(this);
		}
		switch (slot_name) {
			case "weaponLightTop":
				ShowIrons4Laser(this);
			break;	
		}
	}	
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif 
        if ( A6_AFG_Grip_Black.Cast(attachment) ){
        	return false;
        } 
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockM4") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponTubeStockAdapterVector") == NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponVectorButtstock" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockM4") == NULL);
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponTubeStockAdapterVector" ) ) {
            return ( FindAttachmentBySlotName( "weaponVectorButtstock") == NULL);
        } 
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};
class A6_Vector : A6_Vector_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Vector_Buttstock" );
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_EoTechOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Vector_50Rnd");
	}
};
class A6_Vector_Black : A6_Vector_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Vector_Buttstock" );
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_EoTechOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Vector_50Rnd");
	}
};
class A6_Vector_Tan : A6_Vector_Base  {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Vector_Buttstock_Tan" );
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_EoTechOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Vector_50Rnd");
	}
};
class A6_Vector_Green : A6_Vector_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Vector_Buttstock_Green" );
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_EoTechOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Vector_50Rnd");
	}
};
class A6_Vector_White : A6_Vector_Base  {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Vector_Buttstock_White" );
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_EoTechOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Vector_50Rnd");
	}
};