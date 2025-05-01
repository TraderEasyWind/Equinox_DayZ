class A6_MP5k_Base : RifleBoltFree_Base { 
	void A6_MP5k_Base() {}
	override RecoilBase SpawnRecoilObject() {
		return new Mp5kRecoil(this);
	}
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand) {
		if ( weaponAction == WeaponActions.RELOAD) {
			switch (subCommand) {
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET;			
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET;		
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET;
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET;
				default:
					return subCommand;
			}
		}
		return subCommand;
	}
	int weaponForearmMP5k = InventorySlots.GetSlotIdFromString("weaponForearmMP5k");
	int pistolMuzzle = InventorySlots.GetSlotIdFromString("pistolMuzzle");
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {
		switch(slotId) {
			case pistolMuzzle: {
				if ( this.FindAttachmentBySlotName("weaponForearmMP5k")) {
					A6_MP5k_Forearm_Base forearm = A6_MP5k_Forearm_Base.Cast(FindAttachmentBySlotName("weaponForearmMP5k"));
					if (!forearm) {
						return true;
					}
					if (forearm.BlockSuppressor()) {
						return false;
					}
				}
			}	
		}
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif 
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponMP5OpticMount") != NULL);    
        }
        return super.CanDisplayAttachmentSlot(slot_id);
    }
};
class A6_MP5k: A6_MP5k_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_MP5k_Forearm_Proto" );
		inventory.CreateInInventory( "A6_Optic_Mount_MP5" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_MP5_Waffle_30Rnd");
	}
};