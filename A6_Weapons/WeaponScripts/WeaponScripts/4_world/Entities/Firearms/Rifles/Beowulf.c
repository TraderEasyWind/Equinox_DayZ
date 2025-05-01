class A6_Beowulf_Base : RifleBoltLock_Base {
	void A6_Beowulf_Base() {	
		ShowPistolGrip(this);
		ShowTubeStock(this);
	}
    override RecoilBase SpawnRecoilObject() {
        if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
            return new M4a1Recoil(this);
        } else {
            return new HiCalSemiRecoil(this);
        }
    }
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	
        if ( A6_M4A1_Handguard_KAC_Base.Cast(attachment) || A6_M4A1_Handguard_Plastic.Cast(attachment) || A6_M4A1_Handguard_MP.Cast(attachment) ) {
        	return false;
        }
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (FindAttachmentBySlotName("weaponHandguardM4")) {
			A6_M4A1_Handguard_Base hgironsights = A6_M4A1_Handguard_Base.Cast(FindAttachmentBySlotName("weaponHandguardM4"));
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
		if ( A6_CAR15_Wire_Buttstock.Cast(item) ) { 
            HideTubeStock(this);
            SetAnimationPhase("stock_trans", 0.285);
        }
        if ( A6_PRS_Buttstock.Cast(item) ) { 
            SetAnimationPhase("stock_trans", 0.375);
        }
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
		if ( A6_M4A1_Handguard_DD95_MLOK_Base.Cast(item) || A6_M4A1_Handguard_DD125_MLOK_Base.Cast(item) || A6_M4A1_Handguard_DDFSP_MLOK_Base.Cast(item)) {
			SetAnimationPhase("grip_trans", 0.4);
		}
		if ( A6_M4A1_Handguard_DD95_Base.Cast(item) || A6_M4A1_Handguard_DDFSP_Base.Cast(item) ) {
			SetAnimationPhase("lighttranslation", 0.23);
		}
		if ( A6_M4A1_Handguard_DD125_Base.Cast(item) ) {
			SetAnimationPhase("lighttranslation", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (FindAttachmentBySlotName("weaponHandguardM4")) {
			A6_M4A1_Handguard_Base hgironsights = A6_M4A1_Handguard_Base.Cast(FindAttachmentBySlotName("weaponHandguardM4"));
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
		if ( A6_CAR15_Wire_Buttstock.Cast(item) ) { 
            ShowTubeStock(this);
            SetAnimationPhase("stock_trans", 0);
        }
        if ( A6_PRS_Buttstock.Cast(item) ) { 
            SetAnimationPhase("stock_trans", 0);
        }
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
		if ( A6_M4A1_Handguard_Base.Cast(item) ) {
			SetAnimationPhase("grip_trans", 0);
			SetAnimationPhase("lighttranslation",0);
		}
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
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
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardM4") != NULL && this.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptBipod") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M4A1_PistolGrip_DD" );
        inventory.CreateInInventory( "A6_M4A1_Handguard_DD125_MLOK_Black" );
        inventory.CreateInInventory( "A6_Tank_Muzzle" );
        inventory.CreateInInventory( "A6_DD_Buttstock" );
		inventory.CreateInInventory( "A6_Bipod_RIS_Black" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_VuduOptic" );    
        #endif
        SpawnAttachedMagazine("A6_Mag_Beowulf_10Rnd");
    }
};
class A6_Beowulf: A6_Beowulf_Base {};