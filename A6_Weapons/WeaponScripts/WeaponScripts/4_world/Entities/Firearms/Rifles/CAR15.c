class A6_CAR15_Base : RifleBoltLock_Base {
    void A6_CAR15_Base() {	
		ShowPistolGrip(this);
		ShowTubeStock(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	
        if ( A6_M4A1_Handguard_DD95_Base.Cast(attachment) || A6_M4A1_Handguard_DD125_Base.Cast(attachment) || A6_M4A1_Handguard_DDFSP_Base.Cast(attachment) ) {
        	return false;
        }
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
		if ( A6_M4A1_Handguard_MP.Cast(item) ) { 
            SetAnimationPhase("grip_trans", 1);
        }
        if ( A6_CAR15_Wire_Buttstock.Cast(item) ) { 
            HideTubeStock(this);
        }
    } 
    override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name); 
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
		if ( A6_M4A1_Handguard_MP.Cast(item) ) { 
            SetAnimationPhase("grip_trans", 0);
        }
        if ( A6_CAR15_Wire_Buttstock.Cast(item) ) { 
            ShowTubeStock(this);
        }
    }   
	override bool CanDisplayAttachmentSlot(int slot_id) {   
    	if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponOptics" ) ) {
            return ( FindAttachmentBySlotName( "weaponOpticMountM16") != NULL );           
        } 
    	if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM4") != NULL && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptGrip") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM4") != NULL && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptLeftFlashlight") == true);           
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM4") != NULL && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptRightFlashlight") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardM4") != NULL && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptTopFlashlight") == true);           
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBayonet" )) {
            return (FindAttachmentBySlotName("weaponHandguardM4") == NULL && FindAttachmentBySlotName("weaponMuzzleM4") == NULL || FindAttachmentBySlotName("weaponBayonet") == NULL && FindAttachmentBySlotName("weaponMuzzleM4") == NULL && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptBayonet") == true || FindAttachmentBySlotName("weaponBayonet") != NULL && this.FindAttachmentBySlotName("weaponMuzzleM4").ConfigGetBool("CanAcceptBayonet") == true && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptBayonet") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M4A1_Handguard_Plastic" );
        inventory.CreateInInventory( "A6_CAR15_FlashHider" );
        inventory.CreateInInventory( "A6_CAR15_OE_Buttstock" );
        SpawnAttachedMagazine("A6_Mag_Stanag_30Rnd");
    }
};

class A6_CAR15 : A6_CAR15_Base {};