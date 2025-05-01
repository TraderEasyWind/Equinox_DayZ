class A6_SRSA2_Base : BoltActionRifle_ExternalMagazine_Base {	
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new CZ527Recoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif
		inventory.CreateInInventory( "A6_HXQD_Suppressor" );
		SpawnAttachedMagazine("A6_Mag_SRSA2_8Rnd");
    } 
}
class A6_SRSA2: A6_SRSA2_Base {}