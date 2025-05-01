class A6_VSSK_Base : RifleBoltFree_Base {	
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new SvdRecoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
	}
	void A6_VSSK_Base() {	
		UnfoldSightsA6(this);
	}
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_VSSK");
		}
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			FoldSightsA6(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			UnfoldSightsA6(this);
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
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif	
		SpawnAttachedMagazine("A6_Mag_VSSK_5Rnd");
    } 
}
class A6_VSSK: A6_VSSK_Base {}