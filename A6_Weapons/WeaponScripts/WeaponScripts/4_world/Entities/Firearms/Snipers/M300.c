class A6_M300_Base : BoltActionRifle_ExternalMagazine_Base {
	void A6_M300_Base() {
		ShowMuzzle(this);
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
        if ( A6_338_Muzzle_Base.Cast(item) ) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_338_Muzzle_Base.Cast(item) ) { 
            ShowMuzzle(this);
        } 
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_Bipod_Rotator" );
		SpawnAttachedMagazine("A6_Mag_M200_7Rnd");
    } 
}
class A6_M300 : A6_M300_Base {}