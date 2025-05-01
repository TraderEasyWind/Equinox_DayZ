class A6_MP9Pro_Base : Pistol_Base {
	override RecoilBase SpawnRecoilObject() {
		return new GlockRecoil(this);
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_MP9Pro_17Rnd");
	}
};
class A6_MP9Pro_Black: A6_MP9Pro_Base {};
class A6_MP9Pro_Silver: A6_MP9Pro_Base {};
class A6_MP9Pro_Tan: A6_MP9Pro_Base {};
class A6_MP9Pro_Green: A6_MP9Pro_Base {};