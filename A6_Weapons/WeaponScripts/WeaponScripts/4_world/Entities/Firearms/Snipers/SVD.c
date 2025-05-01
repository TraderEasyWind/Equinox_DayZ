class A6_SVD_Base : RifleBoltLock_Base {
	void A6_SVD_Base() {
		ShowStock(this);
		ShowMuzzle(this);
	}
    override RecoilBase SpawnRecoilObject() {
		return new SvdRecoil(this);
	}
    override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override bool CanEnterIronsights() {
		ItemOptics optic = GetAttachedOptics();
		if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KashtanOptic.Cast(optic) || KazuarOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_SVD_TubeStock_Adapter.Cast(item) ) { 
            HideStock(this);
        }
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_SVD_TubeStock_Adapter.Cast(item) ) { 
            ShowStock(this);
        }
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            ShowMuzzle(this);
        } 
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOptics") != NULL);
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponOpticMount") == NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponOpticsAK" )) {
            return ( FindAttachmentBySlotName( "weaponOptics") == NULL);
        }  
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponTubeStockAdapterSVD") != NULL);    
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_Optic_MountSVD" );	
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_Spitfire_Optic" );	
        inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_SVD_10Rnd");
    } 
}
class A6_SVD: A6_SVD_Base {}
class A6_SVD_Tiger_Base : RifleBoltLock_Base {
	void A6_SVD_Tiger_Base() {
		ShowStock(this);
		ShowMuzzle(this);
	}
    override RecoilBase SpawnRecoilObject() {
		return new SvdRecoil(this);
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
        if ( A6_SVD_TubeStock_Adapter.Cast(item) ) { 
            HideStock(this);
        }
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_SVD_TubeStock_Adapter.Cast(item) ) { 
            ShowStock(this);
        }
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)){ 
            ShowMuzzle(this);
        } 
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponButtstockM4" )) {
            return ( FindAttachmentBySlotName( "weaponTubeStockAdapterSVD") != NULL);    
        }
        return super.CanDisplayAttachmentSlot(slot_id);
	}
    override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_VuduOptic" );	
		#endif
        inventory.CreateInInventory( "A6_SVD_TubeStock_Adapter" );
        inventory.CreateInInventory( "A6_Carbine_Buttstock" );		
        inventory.CreateInInventory( "A6_RK0_Grip" );	
        inventory.CreateInInventory( "A6_AWC_Thor_Suppressor" );
        inventory.CreateInInventory( "A6_PERST" );
        inventory.CreateInInventory( "Battery9V" );
        inventory.CreateInInventory( "A6_Klesh_Light" );
        inventory.CreateInInventory( "Battery9V" );
		SpawnAttachedMagazine("A6_Mag_SVD_20Rnd");
    } 
}
class A6_SVD_Tiger: A6_SVD_Tiger_Base {}