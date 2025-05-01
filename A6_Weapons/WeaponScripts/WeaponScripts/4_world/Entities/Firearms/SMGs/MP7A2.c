class A6_MP7A2_Base : RifleBoltLock_Base {
	void A6_MP7A2_Base(){	
		ShowIrons4Laser(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new VSSRecoil(this);
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
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
};
class A6_MP7A2 : A6_MP7A2_Base  {
	override void OnDebugSpawn() {
		super.OnDebugSpawn();
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_StrikeCobra_Grip" );
		inventory.CreateInInventory( "A6_MP7A2Suppressor" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SigSauerRomeo5Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_MP7A2_40Rnd");
	}
};