class A6_Alligator_Snipex_Base : BoltActionRifle_ExternalMagazine_Base {
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new CZ527Recoil(this);
		} else {
			return new HiCalSemiRecoil(this);
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
        SpawnAttachedMagazine("A6_Mag_Alligator_Snipex_5Rnd");
    }
}
class A6_Alligator_Snipex : A6_Alligator_Snipex_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ){
			GetInventory().CreateAttachment("A6_Bipod_Snipex");
		}	
	}
}
class A6_Alligator_Snipex_Black : A6_Alligator_Snipex_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_Snipex");
		}	
	}
}