class A6_PP19Bizon_Base : RifleBoltFree_Base {
	void A6_PP19Bizon_Base() {
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new PP19Recoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
	}
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand) {
		if ( weaponAction == WeaponActions.CHAMBERING) {
			switch (subCommand) {
				case WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_UNIQUE_CLOSED:
					return WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_OPENED;
				default:
					return subCommand;
			}
		}
		return subCommand;
	}
	override bool CanEnterIronsights() {
		ItemOptics optic = GetAttachedOptics();
		if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KazuarOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) || A6_AK_Handguard_Zentico_Long_Base.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOptics") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOpticMountAK") == NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponOpticsAK" )) {
            return ( FindAttachmentBySlotName( "weaponOptics") == NULL);
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
        return super.CanDisplayAttachmentSlot(slot_id);
	}
}
class A6_PP19Bizon : A6_PP19Bizon_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_AKS74U_Buttstock" );
		inventory.CreateInInventory( "A6_Optic_MountAK" );
		inventory.CreateInInventory( "A6_PP19Bizon_Muzzle" );
		#ifdef A6_OpticScripts
        inventory.CreateInInventory( "A6_MRS_Optic" );
        inventory.CreateInInventory( "Battery9V" );
        #endif
		SpawnAttachedMagazine("A6_Mag_Gripped_PP19Bizon_64Rnd");
	}
}