class A6_HK416_Base : RifleBoltLock_Base {
    void A6_HK416_Base() {	
		ShowPistolGrip(this);
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
		A6_HK_Handguard_Base handguard = A6_HK_Handguard_Base.Cast(item);
		if (FindAttachmentBySlotName("weaponHandguardHK")) {
			A6_HK_Handguard_Base hgironsights = A6_HK_Handguard_Base.Cast(FindAttachmentBySlotName("weaponHandguardHK"));
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
        if ( A6_HK_Handguard_MI_9_Black.Cast(item) || A6_HK_Handguard_MI_135_Black.Cast(item) ) {
			SetAnimationPhase("grip_trans", 1);
		}
		if ( A6_HK_Handguard_Extended_Quad_Rail_Black.Cast(item) ) {
			SetAnimationPhase("bipod_trans", 1);
			SetAnimationPhase("lighttranslation",0.55);
			SetAnimationPhase("lighttranslation2",1);
		}
		if ( A6_HK_Handguard_MI_135_Black.Cast(item) ) {
			SetAnimationPhase("lighttranslation",1);
			SetAnimationPhase("lighttranslation2",0.85);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		A6_HK_Handguard_Base handguard = A6_HK_Handguard_Base.Cast(item);
		if (FindAttachmentBySlotName("weaponHandguardHK")) {
			A6_HK_Handguard_Base hgironsights = A6_HK_Handguard_Base.Cast(FindAttachmentBySlotName("weaponHandguardHK"));
			if (!hgironsights){return;}
			if (hgironsights.HasIronSights()) {
				if (ItemOptics.Cast(item)){
					hgironsights.Open();
				}
			}
		}
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate",0);
		}
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
		if ( A6_HK_Handguard_Base.Cast(item) ) {
			SetAnimationPhase("grip_trans",0);
			SetAnimationPhase("bipod_trans",0);
			SetAnimationPhase("lighttranslation",0);
			SetAnimationPhase("lighttranslation2",0);
		}
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {   
    	if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHK") != NULL && this.FindAttachmentBySlotName("weaponHandguardHK").ConfigGetBool("CanAcceptGrip") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHK") != NULL && this.FindAttachmentBySlotName("weaponHandguardHK").ConfigGetBool("CanAcceptLeftFlashlight") == true);           
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHK") != NULL && this.FindAttachmentBySlotName("weaponHandguardHK").ConfigGetBool("CanAcceptRightFlashlight") == true);           
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardHK") != NULL && this.FindAttachmentBySlotName("weaponHandguardHK").ConfigGetBool("CanAcceptTopFlashlight") == true);           
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardHK") != NULL && this.FindAttachmentBySlotName("weaponHandguardHK").ConfigGetBool("CanAcceptBipod") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};
class A6_HK416_Carbine_Base : A6_HK416_Base {
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	
        if ( A6_HK_Handguard_MI_135_Black.Cast(attachment) || A6_HK_Handguard_Extended_Quad_Rail_Black.Cast(attachment) ){
        	return false;
        }    
        return super.CanReceiveAttachment(attachment, slotId);
	}
};
class A6_HK416_Carbine_Black : A6_HK416_Carbine_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_HK_Handguard_Quad_Rail_Black" );
        inventory.CreateInInventory( "A6_M4A1_A2_FlashHider" );
        inventory.CreateInInventory( "A6_HK_PistolGrip_BG_Black" );
		inventory.CreateInInventory( "A6_HK_E1_Buttstock_Black" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_HK_PMG2_30Rnd");
    }
};
class A6_HK416_Carbine_Tan : A6_HK416_Carbine_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_HK_Handguard_MI_9_Tan" );
        inventory.CreateInInventory( "A6_M4A1_A2_FlashHider" );
        inventory.CreateInInventory( "A6_HK_PistolGrip_BGB_Tan" );
		inventory.CreateInInventory( "A6_HK_Slim_Buttstock_Tan" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic_Tan" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_HK_PMG2_30Rnd");
    }
};
class A6_HK416_Black : A6_HK416_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_HK_Handguard_Extended_Quad_Rail_Black" );
        inventory.CreateInInventory( "A6_M4A1_A2_FlashHider" );
        inventory.CreateInInventory( "A6_HK_PistolGrip_BG_Black" );
		inventory.CreateInInventory( "A6_HK_E1_Buttstock_Black" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_HK_PMG2_30Rnd");
    }
};
class A6_HK416_Tan : A6_HK416_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_HK_Handguard_MI_135_Tan" );
        inventory.CreateInInventory( "A6_M4A1_A2_FlashHider" );
        inventory.CreateInInventory( "A6_HK_PistolGrip_BGB_Tan" );
		inventory.CreateInInventory( "A6_HK_Slim_Buttstock_Tan" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic_Tan" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_HK_PMG2_30Rnd");
    }
};