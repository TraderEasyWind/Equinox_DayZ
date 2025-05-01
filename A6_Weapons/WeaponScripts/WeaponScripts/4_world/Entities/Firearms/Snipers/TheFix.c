class A6_TheFix_Base : BoltActionRifle_ExternalMagazine_Base {
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
		inventory.CreateInInventory( "A6_VuduOptic" );	
		#endif
		inventory.CreateInInventory( "A6_Jumbo_Shrimp_Suppressor" );
		inventory.CreateInInventory( "A6_Bipod_RIS_Black" );		
		SpawnAttachedMagazine("A6_Mag_TheFix_10Rnd");
    } 
}
class A6_TheFix: A6_TheFix_Base{}
class A6_TheFix_Green: A6_TheFix_Base{}