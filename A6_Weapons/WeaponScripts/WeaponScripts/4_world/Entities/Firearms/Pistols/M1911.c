class A6_M1911_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new Colt1911Recoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_M1911_7Rnd");
	}
};
class A6_M1911 : A6_M1911_Base {};
class A6_M1911_Kimber : A6_M1911_Base {};