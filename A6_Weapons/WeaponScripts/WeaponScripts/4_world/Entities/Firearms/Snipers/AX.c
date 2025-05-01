class A6_AX_Base : BoltActionRifle_ExternalMagazine_Base {	
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new CZ527Recoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_AX_Muzzle" );
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Tan_Optic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_AX_7Rnd");
    }
}
class A6_AX : A6_AX_Base {}
class A6_AX_Black: A6_AX {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_AX_Muzzle" );
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_AX_7Rnd");
    }
}