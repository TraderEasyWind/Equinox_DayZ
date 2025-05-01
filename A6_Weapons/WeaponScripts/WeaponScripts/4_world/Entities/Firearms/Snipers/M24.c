class A6_M24_Base : BoltActionRifle_ExternalMagazine_Base {
	override RecoilBase SpawnRecoilObject() {
		return new CZ527Recoil(this);	
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MatchProOptic" );	
		#endif
		inventory.CreateInInventory( "A6_Bipod_Rotator" );	
        SpawnAttachedMagazine("A6_Mag_M24_5Rnd");
    } 
}
class A6_M24: A6_M24_Base {}