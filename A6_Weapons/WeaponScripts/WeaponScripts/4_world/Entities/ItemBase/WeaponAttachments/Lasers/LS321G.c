class A6_LS321G_Base: A6_Laser_Base {
	override string GetLaserTexture() {
		return "#(argb,8,8,3)color(0,1,0,0.7,ca)";
	}
	override string SwapLaserTexture() {
		return "#(argb,8,8,3)color(0,1,0,0.7,ca)";
	}
	override string GetIRLaserTexture() {
		return "#(argb,8,8,3)color(0,1,0,0.7,ca)";
	}
	override bool isIRCompatibleLaser() {
		return true;
	}
}
class A6_LS321G_Vanilla : A6_LS321G_Base {}
class A6_LS321G_Black : A6_LS321G_Base {}