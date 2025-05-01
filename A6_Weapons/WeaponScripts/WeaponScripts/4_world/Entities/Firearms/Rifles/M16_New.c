class A6_M16_Base : RifleBoltLock_Base {
	void A6_M16_Base() {
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M16A2Recoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
    }
    override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);  
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
    }
    override bool CanReceiveAttachment(EntityAI attachment, int slotId) {
        #ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
            return false;
        }	
		#endif     
        return super.CanReceiveAttachment(attachment, slotId);
	}	
	override bool CanDisplayAttachmentSlot(int slot_id) {   
    	if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponOptics" ) ) {
            return ( FindAttachmentBySlotName( "weaponOpticMountM16") != NULL );           
        } 
    	if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM16") != NULL && this.FindAttachmentBySlotName("weaponHandguardM16").ConfigGetBool("CanAcceptGrip") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM16") != NULL && this.FindAttachmentBySlotName("weaponHandguardM16").ConfigGetBool("CanAcceptLeftFlashlight") == true);           
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM16") != NULL && this.FindAttachmentBySlotName("weaponHandguardM16").ConfigGetBool("CanAcceptRightFlashlight") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM16") != NULL && this.FindAttachmentBySlotName("weaponHandguardM16").ConfigGetBool("CanAcceptTopFlashlight") == true);           
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardM16") != NULL && this.FindAttachmentBySlotName("weaponHandguardM16").ConfigGetBool("CanAcceptBipod") == true);   
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOpticMountM16") != NULL);    
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBayonet" )) {
            return ( FindAttachmentBySlotName("weaponMuzzleM4") == NULL || FindAttachmentBySlotName("weaponBayonet") != NULL && this.FindAttachmentBySlotName("weaponMuzzleM4").ConfigGetBool("CanAcceptBayonet") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}   
};
class A6_M16 : A6_M16_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_Optic_Mount_M16" );
        inventory.CreateInInventory( "A6_M16_A4_Handguard" );
        inventory.CreateInInventory( "A6_M16_FlashHider" );
        inventory.CreateInInventory( "A6_TroyMini_Grip" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_MRS_Optic" );    
        inventory.CreateInInventory( "Battery9V" );
        #endif
        SpawnAttachedMagazine("A6_Mag_Stanag_30Rnd");
    }
};
class A6_M16A2 : A6_M16_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M16_A2_Handguard" );
        inventory.CreateInInventory( "A6_M16_FlashHider" );
        SpawnAttachedMagazine("A6_Mag_Stanag_20Rnd");
    }
};
class A6_M16A3 : A6_M16_Base  {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M16_A3_Handguard" );
        inventory.CreateInInventory( "A6_M16_FlashHider" );
        SpawnAttachedMagazine("A6_Mag_Stanag_30Rnd");
    }
};
class A6_M16A4 : A6_M16_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M16_A4_Handguard" );
        inventory.CreateInInventory( "A6_M16_FlashHider" );
        SpawnAttachedMagazine("A6_Mag_Stanag_30Rnd");
    }
};