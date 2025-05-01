class A6_UMP45_Base : RifleBoltLock_Base { 
	void A6_UMP45_Base() {}
	override RecoilBase SpawnRecoilObject() {
		return new Ump45Recoil(this);
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
class A6_UMP45: A6_UMP45_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_UMP45_Buttstock" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_SigSauerRomeoXLOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_UMP45_25Rnd");
	}
};
class A6_UMP45_Winter: A6_UMP45_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_UMP45_Buttstock_Winter" );
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_SigSauerRomeoXLOptic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_UMP45_25Rnd");
	}
};