class A6_G36_Base : RifleBoltLock_Base {
	void A6_G36_Base() {	
		ShowIrons4Laser(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
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
		super.EEItemAttached(item, slot_name);
		switch (slot_name) {
			case "weaponLightTop":
				HideIrons4Laser(this);
			break;	
		}	
	}	
	override void EEItemDetached(EntityAI item, string slot_name) {
		super.EEItemDetached(item, slot_name);
		switch (slot_name) {
			case "weaponLightTop":
				ShowIrons4Laser(this);
			break;	
		}		
	}
}
class A6_G36C : A6_G36_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_G36_FlashHider" );
		inventory.CreateInInventory( "A6_G36_Buttstock" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_HK_PMG2_30Rnd");
	}
}
class A6_G36K : A6_G36_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_G36_FlashHider" );
		inventory.CreateInInventory( "A6_G36_Buttstock" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_HK_PMG2_30Rnd");
	}
}
class A6_G36 : A6_G36_Base {
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponBipod") ) {
			GetInventory().CreateAttachment("A6_Bipod_G36");
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
        inventory.CreateInInventory( "A6_G36_FlashHider" );
		inventory.CreateInInventory( "A6_G36_Buttstock_KV" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
        SpawnAttachedMagazine("A6_Mag_XM8_100Rnd");
	}
}