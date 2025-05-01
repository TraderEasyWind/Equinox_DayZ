class A6_AN94_Base : RifleBoltFree_Base {
	void A6_AN94_Base() {	
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new Ak74Recoil(this);
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
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_AK_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
	}
	override bool CanEnterIronsights() {
		ItemOptics optic = GetAttachedOptics();
		if ( optic )
			return true;
		return super.CanEnterIronsights();
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
        return super.CanDisplayAttachmentSlot(slot_id);
	}
};	
class A6_AN94 : A6_AN94_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_AK_Plastic_Buttstock" );
        inventory.CreateInInventory( "A6_Optic_MountAK" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_AimpointCompM4Optic" );   
        inventory.CreateInInventory( "Battery9V" ); 
        #endif
        SpawnAttachedMagazine("A6_Mag_AK74_30Rnd");
    }
};