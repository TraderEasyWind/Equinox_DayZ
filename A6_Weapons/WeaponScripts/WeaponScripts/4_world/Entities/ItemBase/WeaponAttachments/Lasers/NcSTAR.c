class A6_NcSTAR_Base: A6_Laser_Base {
	override string GetLaserTexture() {
		return "#(argb,8,8,3)color(0,0.4,1,0.7,ca)";
	}
	override string SwapLaserTexture() {
		return "#(argb,8,8,3)color(0,1,0,1.0,co)";
	}
}
class A6_NcSTAR: A6_NcSTAR_Base {}