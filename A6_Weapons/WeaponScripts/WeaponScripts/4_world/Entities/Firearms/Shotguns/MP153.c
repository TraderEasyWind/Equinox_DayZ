class A6_MP153_Base: A6_SemiAutoShotgun {
	override RecoilBase SpawnRecoilObject() {
		return new Mp133Recoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if ( A6_Mossberg_Shroud_Rail.Cast(item) ) {
			SetAnimationPhase("translation", 1);
		}		
		if ( A6_Mossberg_Buttstock_Base.Cast(item) ) {
			SetObjectTexture(1,"");
			SetObjectMaterial(1,"");
		}
		if (A6_MP153_Forearm_Plastic.Cast(item)) {
			SetObjectTexture(2,"");
			SetObjectMaterial(2,"");
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);	
		if ( A6_Mossberg_Shroud_Rail.Cast(item) ) {
			SetAnimationPhase("translation", 0);
		}
		if ( A6_Mossberg_Buttstock_Base.Cast(item) ) {
			SetObjectTexture(1,"A6_Weapons\\Shotguns\\Mossberg\\data\\camo_pistolgrip_2_co.paa");
			SetObjectMaterial(1,"A6_Weapons\\Shotguns\\Mossberg\\data\\camo_pistolgrip_2.rvmat");
		}
		if (A6_MP153_Forearm_Plastic.Cast(item)) {
			SetObjectTexture(2,"A6_Weapons\\Shotguns\\MP153\\data\\camo_mp153_co.paa");
			SetObjectMaterial(2,"A6_Weapons\\Shotguns\\MP153\\data\\camo_mp153.rvmat");
		}
	}	
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "MossbergOpticMount") != NULL);    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString("weaponLightLeft" ) ) {
            return ( FindAttachmentBySlotName( "MossbergOpticMount") != NULL && this.FindAttachmentBySlotName("MossbergOpticMount").ConfigGetBool("CanAcceptLeftFlashlight") == true );    
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "MossbergOpticMount") != NULL && this.FindAttachmentBySlotName("MossbergOpticMount").ConfigGetBool("CanAcceptRightFlashlight") == true );    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString("weaponLightTop" ) ) {
            return ( FindAttachmentBySlotName( "MossbergOpticMount") != NULL && this.FindAttachmentBySlotName("MossbergOpticMount").ConfigGetBool("CanAcceptTopFlashlight") == true );    
        }
		if ( slot_id == InventorySlots.GetSlotIdFromString("weaponBipod" ) ) {
            return ( FindAttachmentBySlotName( "MossbergOpticMount") != NULL && this.FindAttachmentBySlotName("MossbergOpticMount").ConfigGetBool("CanAcceptBipod") == true );    
        }
        return super.CanDisplayAttachmentSlot(slot_id);
    }  
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Mossberg_Buttstock_Wood" );
		inventory.CreateInInventory( "A6_Mossberg_OpticMount" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
	} 
} 
class A6_MP153 : A6_MP153_Base {}