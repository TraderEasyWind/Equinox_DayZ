class A6_GM6Lynx_Base : RifleBoltFree_Base {
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new SvdRecoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NFATACRF1_Optic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_GM6Lynx_5Rnd");
    } 
}
class A6_GM6Lynx: A6_GM6Lynx_Base {}