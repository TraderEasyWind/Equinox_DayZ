class A6_GreenHouse_Base : GardenPlotPolytunnel {
	override bool CanPutInCargo(EntityAI parent) {
		return false;
	}
	override bool CanPutIntoHands(EntityAI parent) {
		return false;
	}
	bool CanBeDismantled() {
        return false;
    }
}
class A6_GreenHouse extends A6_GreenHouse_Base {
	override bool CanBeDismantled() {
        return true;
    }
}