class A6_M24A3_Base : BoltActionRifle_InnerMagazine_Base {
	void A6_M24A3_Base() {
		ShowFrontsight(this);
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
        if ( A6_AX_Muzzle.Cast(item) || A6_AI_338_Suppressor.Cast(item) ) {
            HideFrontsight(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_AX_Muzzle.Cast(item) || A6_AI_338_Suppressor.Cast(item) ) {
            ShowFrontsight(this);
        }  
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NXSOptic" );	
		#endif
		inventory.CreateInInventory( "A6_Bipod_Rotator" );	
    } 
}
class A6_M24A3: A6_M24A3_Base {}