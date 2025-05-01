class A6_VSS_Base : RifleBoltFree_Base {
    override RecoilBase SpawnRecoilObject() {
		return new VSSRecoil(this);
	}
	override bool CanEnterIronsights() {
		ItemOptics optic = GetAttachedOptics();
		if ( optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KashtanOptic.Cast(optic) || KazuarOptic.Cast(optic) )
			return true;
		return super.CanEnterIronsights();
	}
    override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOptics") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOpticMount") == NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponOpticsAK" )) {
            return ( FindAttachmentBySlotName( "weaponOptics") == NULL);
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardASVAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardASVAL").ConfigGetBool("CanAcceptGrip") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardASVAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardASVAL").ConfigGetBool("CanAcceptLeftFlashlight") == true);           
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardASVAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardASVAL").ConfigGetBool("CanAcceptRightFlashlight") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardASVAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardASVAL").ConfigGetBool("CanAcceptTopFlashlight") == true);           
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardASVAL") != NULL && this.FindAttachmentBySlotName("weaponHandguardASVAL").ConfigGetBool("CanAcceptBipod") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        SpawnAttachedMagazine("A6_Mag_VSS_10Rnd");
    }
};
class A6_VSS: A6_VSS_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_Optic_Mount9A91" );
        inventory.CreateInInventory( "A6_ASVAL_Handguard" );
        inventory.CreateInInventory( "A6_RK6_Grip" );
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_ElcanSpecterOptic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_VSS_10Rnd");
    }
};