class A6_AX50_Base : BoltActionRifle_ExternalMagazine_Base {
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
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Tan_Optic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_AX50_5Rnd");
    }
}
class A6_AX50: A6_AX50_Base {}
class A6_AX50_Black: A6_AX50 {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_AX50_5Rnd");
    }
}