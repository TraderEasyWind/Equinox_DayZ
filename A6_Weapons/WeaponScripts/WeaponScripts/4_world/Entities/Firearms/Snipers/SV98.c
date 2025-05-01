class A6_SV98_Base : BoltActionRifle_ExternalMagazine_Base {
	void A6_SV98_Base() {
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new SV98Recoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if (A6_Suppressor_Base.Cast(item)) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if (A6_Suppressor_Base.Cast(item)) { 
            ShowMuzzle(this);
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
		inventory.CreateInInventory( "A6_LeupoldOptic" );	
		#endif
		SpawnAttachedMagazine("A6_Mag_SV98_10Rnd");
    } 
}
class A6_SV98 : A6_SV98_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_SV98");
		}	
	}
}