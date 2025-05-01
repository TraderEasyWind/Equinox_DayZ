class A6_RugerMarkIV_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new MkiiRecoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_DeadAirMask22_Suppressor" );
		inventory.CreateInInventory( "A6_Foxtrot_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_SigSauerRomeo0_Optic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_RugerMarkIV_10Rnd");
	}
};
class A6_RugerMarkIV: A6_RugerMarkIV_Base {}