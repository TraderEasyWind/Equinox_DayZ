class A6_PERST_Base: A6_Laser_Base {
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
class A6_PERST: A6_PERST_Base {}