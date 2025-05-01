class A6_M9_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new Cz75Recoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_M9_15Rnd");
	}
};
class A6_M9: A6_M9_Base {};
class A6_M9_Desert: A6_M9 {};