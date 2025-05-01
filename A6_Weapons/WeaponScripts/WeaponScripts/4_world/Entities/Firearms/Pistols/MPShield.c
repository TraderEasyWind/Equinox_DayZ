class A6_MPShield_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new GlockRecoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_MPShield_13Rnd");
	}
};
class A6_MPShield: A6_MPShield_Base {};