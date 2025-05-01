class A6_PX4_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new MakarovRecoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_PX4_14Rnd");
	}
};
class A6_PX4: A6_PX4_Base {};