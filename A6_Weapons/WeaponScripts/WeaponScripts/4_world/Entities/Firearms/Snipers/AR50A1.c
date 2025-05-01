class A6_AR50A1_Base : BoltActionRifle_InnerMagazine_Base {
	void A6_AR50A1_Base() {	
		ShowPistolGrip(this);
	}
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new CZ527Recoil(this);
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
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NFATACRF1_Optic" );	
		#endif
    }
}
class A6_AR50A1: A6_AR50A1_Base {}