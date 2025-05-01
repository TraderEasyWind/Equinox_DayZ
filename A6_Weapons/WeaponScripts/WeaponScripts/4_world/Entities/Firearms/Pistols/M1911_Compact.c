class A6_M1911_Compact_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new Colt1911Recoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_M1911Compact_9Rnd");
	}
};
class A6_M1911_Compact : A6_M1911_Compact_Base {};