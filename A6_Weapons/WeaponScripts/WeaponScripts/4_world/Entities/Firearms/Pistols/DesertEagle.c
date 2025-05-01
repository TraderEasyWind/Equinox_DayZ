class A6_DesertEagle_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new DEagleRecoil(this);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        SpawnAttachedMagazine("A6_Mag_DesertEagle_9Rnd");
    }
};
class A6_DesertEagle: A6_DesertEagle_Base {};
class A6_DesertEagle_Gold: A6_DesertEagle {};