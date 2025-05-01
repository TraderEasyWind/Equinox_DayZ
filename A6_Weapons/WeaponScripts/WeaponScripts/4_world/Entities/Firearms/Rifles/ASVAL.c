class A6_ASVAL_Base : RifleBoltFree_Base {
	void A6_ASVAL_Base() {	
		ShowASVAL(this);
		HideTubeStock(this);
		HidePistolGrip(this);
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
        if ( A6_ASVAL_TubeStock_Adapter.Cast(item) ) { 
            HideASVAL(this);
            ShowTubeStock(this);
            ShowPistolGrip(this);
        }
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_ASVAL_TubeStock_Adapter.Cast(item) ) { 
            ShowASVAL(this);
            HideTubeStock(this);
            HidePistolGrip(this);
        }
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
	}
    override RecoilBase SpawnRecoilObject() {
		return new VSSRecoil(this);
	}
	override bool CanEnterIronsights() {
		ItemOptics optic = GetAttachedOptics();
		if ( optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KashtanOptic.Cast(optic) || KazuarOptic.Cast(optic) )
			return true;
		return super.CanEnterIronsights();
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
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponAKPistolGrip" ) || slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" ) ) {
            return ( FindAttachmentBySlotName( "weaponTubeStockAdapterASVAL") != NULL);    
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
        inventory.CreateInInventory( "A6_Optic_Mount9A91" );
        inventory.CreateInInventory( "A6_ASVAL_Handguard" );
        inventory.CreateInInventory( "A6_RK6_Grip" );
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_VAL_20Rnd");
    }
};
class A6_ASVAL: A6_ASVAL_Base {};