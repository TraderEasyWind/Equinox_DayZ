class A6_P320_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new GlockRecoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Foxtrot_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_SigSauerRomeo2_Optic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_P320_17Rnd");
	}
};
class A6_P320: A6_P320_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Foxtrot_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_SigSauerRomeo2_Optic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_P320_17Rnd");
	}
};
class A6_P320_Silver: A6_P320_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Foxtrot_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_SigSauerRomeo2_Optic" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_P320_17Rnd");
	}
};
class A6_P320_Tan: A6_P320_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Foxtrot_Tan_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_SigSauerRomeo2_Optic_Tan" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_P320_Tan_17Rnd");
	}
};
class A6_P320_Tan2: A6_P320_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Foxtrot_Tan_PistolLight" );
		inventory.CreateInInventory( "Battery9V" );
		#ifdef A6_OpticScripts 
		inventory.CreateInInventory( "A6_SigSauerRomeo2_Optic_Tan" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_P320_Tan_17Rnd");
	}
};