class A6_R700_Base : BoltActionRifle_ExternalMagazine_Base {
	override RecoilBase SpawnRecoilObject() {
		return new CZ527Recoil(this);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MatchProOptic" );	
		#endif
		SpawnAttachedMagazine("A6_Mag_R700_5Rnd");
    } 
}
class A6_R700: A6_R700_Base {}