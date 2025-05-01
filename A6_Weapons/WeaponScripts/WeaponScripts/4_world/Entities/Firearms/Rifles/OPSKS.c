class A6_OPSKS_Base : RifleBoltLock_Base {
    override RecoilBase SpawnRecoilObject() {
		return new SKSRecoil(this);
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponSKSOpticMount") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponBayonetSKS" )) {
            return ( FindAttachmentBySlotName("weaponMuzzleSKS") == NULL || FindAttachmentBySlotName("weaponBayonetSKS") != NULL && this.FindAttachmentBySlotName("weaponMuzzleSKS").ConfigGetBool("CanAcceptBayonet") == true);   
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Optic_Mount_SKS" );
        inventory.CreateInInventory( "A6_SKS_Muzzle" );
		inventory.CreateInInventory( "A6_M4OE_Buttstock" );
        SpawnAttachedMagazine("A6_Mag_OPSKS_20Rnd");
	}
};
class A6_OPSKS: A6_OPSKS_Base {};
class A6_OPSKS_Black: A6_OPSKS_Base {};