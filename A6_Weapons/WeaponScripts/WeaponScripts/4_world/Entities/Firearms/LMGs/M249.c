class A6_M249_Base : RifleBoltLock_Base {
	void A6_M249_Base() {	
		ShowMuzzle(this);
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_M249");
		}
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
        if ( A6_M4A1_Muzzle_Base.Cast(item) ) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_FAL_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
        if ( A6_M4A1_Muzzle_Base.Cast(item) ) { 
            ShowMuzzle(this);
        }
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
            return false;
        }
        return super.CanDisplayAttachmentSlot(slot_id);
    };    
};
class A6_M249 : A6_M249_Base  {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_AcogOptic_Black" );  
        #endif
        inventory.CreateInInventory( "A6_FAL_PistolGrip_Fab_Defense");
        SpawnAttachedMagazine("A6_Mag_M249_200Rnd");
    }
};