class A6_FiveSeven_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new Cz75Recoil(this);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        SpawnAttachedMagazine("A6_Mag_FiveSeven_20Rnd");
    }
};
class A6_FiveSeven: A6_FiveSeven_Base {};
class A6_FiveSeven_Tan: A6_FiveSeven_Base {};