class A6_Delta5_Base : BoltActionRifle_ExternalMagazine_Base {
	override RecoilBase SpawnRecoilObject() {
		return new CZ527Recoil(this);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SureFire762_Muzzle" );
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_NXSOptic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_Delta5_10Rnd");
    }
}
class A6_Delta5: A6_Delta5_Base {}
class A6_Delta5_Camo1: A6_Delta5_Base {}
class A6_Delta5_Camo2: A6_Delta5_Base {}
class A6_Delta5_Camo3: A6_Delta5_Base {}
class A6_Delta5_Camo4: A6_Delta5_Base {}
class A6_Delta5_Camo5: A6_Delta5_Base {}
class A6_Delta5_Camo6: A6_Delta5_Base {}
class A6_Delta5_Camo7: A6_Delta5_Base {}
class A6_Delta5_Camo8: A6_Delta5_Base {}
class A6_Delta5_Camo9: A6_Delta5_Base {}
class A6_Delta5_Camo10: A6_Delta5_Base {}