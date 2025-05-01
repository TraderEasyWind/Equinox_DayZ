class A6_M200_Base : BoltActionRifle_ExternalMagazine_Base {
	void A6_M200_Base() {
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new CZ527Recoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
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
	override bool CanDisplayAttachmentSlot(int slot_id) {    
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBipod" )) {
			return false;
		}
		return super.CanDisplayAttachmentSlot(slot_id);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NFATACRF1_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_CheyTac_Muzzle" );
		SpawnAttachedMagazine("A6_Mag_M200_7Rnd");
    } 
}
class A6_M200 : A6_M200_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_M200");
		}	
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NFATACRF1_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_CheyTac_Muzzle" );
		SpawnAttachedMagazine("A6_Mag_M200_7Rnd");
    } 
}
class A6_M200_Tan : A6_M200_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_M200_Tan");
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NFATACRF1_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_CheyTac_Muzzle" );
		SpawnAttachedMagazine("A6_Mag_M200_Tan_7Rnd");
    } 
}