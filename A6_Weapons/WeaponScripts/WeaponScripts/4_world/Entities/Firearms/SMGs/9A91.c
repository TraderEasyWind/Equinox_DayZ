class A6_9A91_Base : RifleBoltFree_Base {
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
            return ( FindAttachmentBySlotName( "Suppressor9A91") != NULL && this.FindAttachmentBySlotName("Suppressor9A91").ConfigGetBool("CanAcceptGrip") == true);    
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" )) {
            return ( FindAttachmentBySlotName( "Suppressor9A91") != NULL && this.FindAttachmentBySlotName("Suppressor9A91").ConfigGetBool("CanAcceptLeftFlashlight") == true);
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};
class A6_9A91: A6_9A91_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_9A91_Suppressor" );
        inventory.CreateInInventory( "A6_Optic_Mount9A91" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_MRS_Optic" );  
        inventory.CreateInInventory( "Battery9V" );
        #endif
        SpawnAttachedMagazine("A6_Mag_9A91_30Rnd");
    }
};