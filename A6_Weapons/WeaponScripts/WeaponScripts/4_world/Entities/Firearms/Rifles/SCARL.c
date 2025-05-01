class A6_SCARL_Base : RifleBoltLock_Base {
    void A6_SCARL_Base() {	
		UnfoldSightsA6(this);
		ShowPistolGrip(this);
		ShowButtstockPlate(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
		if (ItemOptics.Cast(item)) { 
			FoldSightsA6(this);
		}
		if (A6_SCAR_SSR_Buttstock_Black.Cast(item)) { 
			HideButtstockPlate(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
		if (ItemOptics.Cast(item)) { 
			UnfoldSightsA6(this);
		}
		if (A6_SCAR_SSR_Buttstock_Black.Cast(item)) { 
			ShowButtstockPlate(this);
		}
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockM4") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponTubeStockAdapterScar") == NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponScarButtstock" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockM4") == NULL);
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponTubeStockAdapterScar" )) {
            return ( FindAttachmentBySlotName( "weaponScarButtstock") == NULL);
        } 	
        return super.CanDisplayAttachmentSlot(slot_id);	
	}	
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SCAR_16S17S_Buttstock_Black" );
        inventory.CreateInInventory( "A6_M4A1_MK18_Muzzle" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_AcogOptic_Black" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_556_PMAG_30Rnd");
	}	
};
class A6_SCARL: A6_SCARL_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SCAR_16S17S_Buttstock_Black" );
        inventory.CreateInInventory( "A6_M4A1_MK18_Muzzle" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_AcogOptic_Black" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_556_PMAG_30Rnd");
	}	
};
class A6_SCARL_Tan: A6_SCARL {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SCAR_16S17S_Buttstock_Tan" );
        inventory.CreateInInventory( "A6_M4A1_MK18_Muzzle" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_AcogOptic_Tan" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_556_PMAG_30Rnd");
	}	
};