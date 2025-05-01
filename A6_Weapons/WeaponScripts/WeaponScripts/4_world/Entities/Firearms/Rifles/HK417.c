class A6_HK417_Base : RifleBoltLock_Base {
    void A6_HK417_Base() {	
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}	 
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);
		A6_HKG28_Handguard_Base handguard = A6_HKG28_Handguard_Base.Cast(item);
		if (FindAttachmentBySlotName("weaponHandguardHKG28")) {
			A6_HKG28_Handguard_Base hgironsights = A6_HKG28_Handguard_Base.Cast(FindAttachmentBySlotName("weaponHandguardHKG28"));
			if (!hgironsights){return;}
			if (hgironsights.HasIronSights()) {
				if (ItemOptics.Cast(item)){
					hgironsights.Close();
				}
			}
		}
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
		if ( A6_HKG28_Handguard_Extended_Quad_Rail.Cast(item) ) {
			SetAnimationPhase("lighttranslation",1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);
		A6_HKG28_Handguard_Base handguard = A6_HKG28_Handguard_Base.Cast(item);
		if (FindAttachmentBySlotName("weaponHandguardHKG28")) {
			A6_HKG28_Handguard_Base hgironsights = A6_HKG28_Handguard_Base.Cast(FindAttachmentBySlotName("weaponHandguardHKG28"));
			if (!hgironsights){return;}
			if (hgironsights.HasIronSights()) {
				if (ItemOptics.Cast(item)){
					hgironsights.Open();
				}
			}
		}
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
		if ( A6_HKG28_Handguard_Base.Cast(item) ) {
			SetAnimationPhase("lighttranslation",0);
		}
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {   
    	if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHKG28") != NULL && this.FindAttachmentBySlotName("weaponHandguardHKG28").ConfigGetBool("CanAcceptGrip") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHKG28") != NULL && this.FindAttachmentBySlotName("weaponHandguardHKG28").ConfigGetBool("CanAcceptLeftFlashlight") == true);           
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHKG28") != NULL && this.FindAttachmentBySlotName("weaponHandguardHKG28").ConfigGetBool("CanAcceptRightFlashlight") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHKG28") != NULL && this.FindAttachmentBySlotName("weaponHandguardHKG28").ConfigGetBool("CanAcceptTopFlashlight") == true);           
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardHKG28") != NULL && this.FindAttachmentBySlotName("weaponHandguardHKG28").ConfigGetBool("CanAcceptBipod") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};
class A6_HK417 : A6_HK417_Base  {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_HKG28_Handguard_Quad_Rail" );
        inventory.CreateInInventory( "A6_HKG28_Prolonged_Flash_Hider" );
        inventory.CreateInInventory( "A6_HK_PistolGrip_BGB_Tan" );
		inventory.CreateInInventory( "A6_HKG28_Buttstock_Tan" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SigSauerTango6T_Tan_Optic" );	
		#endif    
        SpawnAttachedMagazine("A6_Mag_HKG28_20Rnd");
    }
};