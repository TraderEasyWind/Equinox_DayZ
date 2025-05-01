class A6_RSASS_Base : RifleBoltLock_Base {
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	void A6_RSASS_Base() {	
		ShowPistolGrip(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
         	HidePistolGrip(this);
      	}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
        	ShowPistolGrip(this);
      	}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M4A1_PistolGrip_MOE_Tan" );
        inventory.CreateInInventory( "A6_TBA_Ultra5_Suppressor" );
        inventory.CreateInInventory( "A6_DS150_Buttstock_Tan" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_VortexRazorGenIIOptic" );    
        #endif
        SpawnAttachedMagazine("A6_Mag_308_PMAG_20Rnd");
    }
}
class A6_RSASS : A6_RSASS_Base {}	