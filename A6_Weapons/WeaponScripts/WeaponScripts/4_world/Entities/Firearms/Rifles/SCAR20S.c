class A6_SCAR20S_Base : RifleBoltLock_Base {
    void A6_SCAR20S_Base() {	
		ShowPistolGrip(this);
		ShowButtstockPlate(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new FALRecoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
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
		if (A6_SCAR_SSR_Buttstock_Black.Cast(item)) { 
			HideButtstockPlate(this);
		}
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
		if (A6_SCAR_SSR_Buttstock_Black.Cast(item)) { 
			ShowButtstockPlate(this);
		}
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
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
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponTubeStockAdapterScar" ) ) {
            return ( FindAttachmentBySlotName( "weaponScarButtstock") == NULL);
        } 
        return super.CanDisplayAttachmentSlot(slot_id);	
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SCAR_SSR_Buttstock_Black" );
        inventory.CreateInInventory( "A6_M4A1_PistolGrip_Ergo" );
        inventory.CreateInInventory( "A6_SureFire762_Muzzle" );
		inventory.CreateInInventory( "A6_Bipod_RIS_Black" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_VuduOptic" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_SCARH_20Rnd");
	}
};
class A6_SCAR20S : A6_SCAR20S_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SCAR_SSR_Buttstock_Black" );
        inventory.CreateInInventory( "A6_M4A1_PistolGrip_Ergo" );
        inventory.CreateInInventory( "A6_SureFire762_Muzzle" );
		inventory.CreateInInventory( "A6_Bipod_RIS_Black" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_VuduOptic" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_SCARH_20Rnd");
	}
};
class A6_SCAR20S_Tan : A6_SCAR20S_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SCAR_SSR_Buttstock_Tan" );
        inventory.CreateInInventory( "A6_M4A1_PistolGrip_Ergo" );
        inventory.CreateInInventory( "A6_SureFire762_Muzzle" );
		inventory.CreateInInventory( "A6_Bipod_RIS_Tan" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_SigSauerTango6T_Tan_Optic" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_SCARH_Tan_20Rnd");
	}
};