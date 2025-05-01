class A6_FAL_Base : RifleBoltLock_Base {
	void A6_FAL_Base() {	
		ShowPistolGrip(this);
		ShowIronSightsA6(this);
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
        if ( A6_FAL_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
        if (ItemOptics.Cast(item)) { 
			HideIronSightsA6(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_FAL_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
        if (ItemOptics.Cast(item)) { 
			ShowIronSightsA6(this);
		}
	}	
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponFALOpticMount") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardFAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardFAL").ConfigGetBool("CanAcceptGrip") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardFAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardFAL").ConfigGetBool("CanAcceptLeftFlashlight") == true);           
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardFAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardFAL").ConfigGetBool("CanAcceptRightFlashlight") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardFAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardFAL").ConfigGetBool("CanAcceptTopFlashlight") == true);           
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardFAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardFAL").ConfigGetBool("CanAcceptBipod") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};
class A6_FAL: A6_FAL_Base  {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_FAL_Handguard_Rail" );
        inventory.CreateInInventory( "A6_FAL_PistolGrip_Fab_Defense" );
        inventory.CreateInInventory( "A6_FAL_Muzzle_2" );
		inventory.CreateInInventory( "A6_SA58_SPR_Buttstock" );
        inventory.CreateInInventory( "A6_Optic_Mount_FAL" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_ElcanSpecterOptic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_FAL_50Rnd");
    }
};
class A6_FAL_Tactical: A6_FAL  {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_FAL_Handguard_Rail" );
        inventory.CreateInInventory( "A6_FAL_Muzzle_2" );
		inventory.CreateInInventory( "A6_FAL_Plastic_Buttstock" );
        inventory.CreateInInventory( "A6_Optic_Mount_FAL" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_AimpointCompM4Optic" );
        inventory.CreateInInventory( "Battery9V" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_FAL_20Rnd");
    }
};
class A6_FAL_Paratrooper: A6_FAL {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_FAL_Handguard_Plastic" );
        inventory.CreateInInventory( "A6_FAL_Muzzle_2" );
		inventory.CreateInInventory( "A6_FAL_Folding_Buttstock" );
        inventory.CreateInInventory( "A6_Optic_Mount_FAL" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_AimpointCompM4Optic" );
        inventory.CreateInInventory( "Battery9V" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_FAL_20Rnd");
    }
};
class A6_FAL_G: A6_FAL  {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_FAL_Handguard_Wood" );
        inventory.CreateInInventory( "A6_FAL_Muzzle" );
		inventory.CreateInInventory( "A6_FAL_Wood_Buttstock" );
        SpawnAttachedMagazine("A6_Mag_FAL_20Rnd");
    }
};