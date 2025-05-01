class A6_AS50_Base : RifleBoltFree_Base {
    void A6_AS50_Base() {	
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new SvdRecoil(this);
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
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_AX50_5Rnd");
    }
}
class A6_AS50 : A6_AS50_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_AS50");
		}	
	}
}
class A6_AS50_Green : A6_AS50 {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_AS50");
		}	
	}
}
class A6_AS50_White : A6_AS50 {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_AS50");
		}	
	}
}
class A6_AS50_Purple : A6_AS50 {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_AS50");
		}	
	}
}
class A6_AS50_Camo : A6_AS50 {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_AS50");
		}	
	}
}
