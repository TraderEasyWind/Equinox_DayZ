class A6_SA58_Base : RifleBoltLock_Base {
	void A6_SA58_Base() {	
		ShowPistolGrip(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override RecoilBase SpawnRecoilObject() {
		return new FALRecoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_FAL_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_FAL_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
	}	
};
class A6_SA58: A6_SA58_Base  {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SA58_BRS_Buttstock" );
        inventory.CreateInInventory( "A6_FAL_PistolGrip_Fab_Defense" );
        inventory.CreateInInventory( "A6_AWC_Thor_Suppressor" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_VuduOptic" );	
        #endif
		SpawnAttachedMagazine("A6_Mag_FAL_50Rnd");
	}
};