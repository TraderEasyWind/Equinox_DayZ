class A6_AKM_Base : RifleBoltFree_Base {
	void A6_AKM_Base() {	
		ShowPistolGrip(this);
        HideSideMount(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new AkmRecoil(this);
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
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
        if ( A6_AK_Handguard_Tactical_Polymer_Base.Cast(item) ) {
    		SetAnimationPhase("translation", 0.725);
    	}
        if ( A6_AK_Handguard_MOE.Cast(item) ) {
    		SetAnimationPhase("translation", 1);
    	}
        if ( A6_AK_Handguard_Zentico_Long_Base.Cast(item) ) {
            SetAnimationPhase("lighttranslation", 1);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
        if ( A6_AK_Handguard_Tactical_Polymer_Base.Cast(item) || A6_AK_Handguard_MOE.Cast(item) ) {
    		SetAnimationPhase("translation", 0);
    	}
        if ( A6_AK_Handguard_Zentico_Long_Base.Cast(item) ) {
            SetAnimationPhase("lighttranslation", 0);
        }
	}
	override bool CanEnterIronsights() {
		ItemOptics optic = GetAttachedOptics();
		if ( optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KashtanOptic.Cast(optic) || KazuarOptic.Cast(optic) )
			return true;
		return super.CanEnterIronsights();
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOpticMountAK") != NULL);
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockM4") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponTubeStockAdapterAK") == NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockAK" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockM4") == NULL);
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponTubeStockAdapterAK" )) {
            return ( FindAttachmentBySlotName( "weaponButtstockAK") == NULL);
        } 
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("CanAcceptGrip") == true);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("CanAcceptRightFlashlight") == true);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightLeft" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("CanAcceptLeftFlashlight") == true);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightTop" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("CanAcceptTopFlashlight") == true);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return ( FindAttachmentBySlotName( "weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("CanAcceptBipod") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};	
class A6_AKM : A6_AKM_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_AKM_Buttstock" );
        inventory.CreateInInventory( "A6_AKM_Muzzle" );
        inventory.CreateInInventory( "A6_AK_Handguard_AKM" );
        inventory.CreateInInventory( "A6_AK_Bakelite_PistolGrip" );
        SpawnAttachedMagazine("A6_Mag_AKM_30Rnd");
    }
};

class A6_AKMS : A6_AKM_Base {
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_AKMS_Buttstock" );
        inventory.CreateInInventory( "A6_AKM_Muzzle" );
        inventory.CreateInInventory( "A6_AK_Handguard_AKM" );
        inventory.CreateInInventory( "A6_AK_Bakelite_PistolGrip" );
        SpawnAttachedMagazine("A6_Mag_AKM_30Rnd");
    }
};