class A6_Glock19_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new GlockRecoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_Foxtrot_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_RMROptic_Black" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Glock19_15Rnd");
	}
};
class A6_Glock19: A6_Glock19_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_Foxtrot_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_RMROptic_Black" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Glock19_15Rnd");
	}
};
class A6_Glock19_Tan: A6_Glock19_Base  {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_OspreySuppressor" );
		inventory.CreateInInventory( "A6_Foxtrot_Tan_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_RMROptic_Tan" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Glock19_15Rnd");
	}
};