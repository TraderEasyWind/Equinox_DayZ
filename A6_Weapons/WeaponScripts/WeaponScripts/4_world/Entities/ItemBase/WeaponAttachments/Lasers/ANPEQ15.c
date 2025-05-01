class A6_ANPEQ15_Base: A6_Laser_Base {
	override string GetLaserTexture() {
		return "#(argb,8,8,3)color(1,0,0,0.7,ca)";
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
class A6_ANPEQ15: A6_ANPEQ15_Base {}
class A6_ANPEQ15_Tan: A6_ANPEQ15_Base {}