modded class BaseBuilding
{
	override float GetTimeToDecay()
	{
		switch (GetMaterialLevel()) {
			case MaterialLevel.FRAME: return 4.0 * 60.0 * 60.0; //2 hours
			case MaterialLevel.WOOD: return 24.0 * 60.0 * 60.0; //12 hours
			case MaterialLevel.METAL: return 36.0 * 60.0 * 60.0; //18 hours
			case MaterialLevel.CONCRETE: return 48.0 * 60.0 * 60.0; //24 hours
		}

		return 24.0 * 60.0 * 60.0; //24 hours
	}
}
modded class RA_Blueprint
{
	protected bool m_Open;
	#ifndef SERVER
	//@ Client only
	protected ref BuildingRadialMenu m_BuildingRadialMenu;
	protected ref BaseBuildingHologram m_BaseBuildingHologram;
	static const ref array<string> BASE_BUILDING_ITEMS = 
	{
		"BaseBuilding_HologramFoundation",
		"BaseBuilding_HologramTriangleFoundation",
		"BaseBuilding_HologramFloor",
		"BaseBuilding_HologramTriangleFloor",
		"BaseBuilding_HologramWall",
		"BaseBuilding_HologramHalfWall",
		"BaseBuilding_HologramDoorFrameSmall",
		"BaseBuilding_HologramDoorFrame",
		"BaseBuilding_HologramDoubleDoorFrame",
		"BaseBuilding_HologramWindowFrame",
		"BaseBuilding_HologramSingleDoor",
		"BaseBuilding_HologramDoubleDoor",
		"BaseBuilding_HologramGarageDoor",
		"BaseBuilding_HologramWindow",
		"BaseBuilding_HologramWindowBoards",
		"BaseBuilding_HologramEmbrasure",
		"BaseBuilding_HologramShutters",
		"BaseBuilding_HologramStairs",
		"BaseBuilding_HologramStairsStraight",
		"BaseBuilding_HologramCompoundGate",
		"BaseBuilding_HologramCompoundWall",
		"BaseBuilding_HologramStepLadder",
		"BaseBuilding_HologramRamp",
		"BaseBuilding_HologramRoof",
		//"BaseBuilding_HologramTriangleRoof", nightmare
		"BaseBuilding_HologramRoofWall_Left",
		"BaseBuilding_HologramRoofWall_Right",		
		"BaseBuilding_HologramLadderHatch", 
		"BaseBuilding_HologramTriangleLadderHatch"
		"BaseBuilding_HologramHatchLadder"
	};
	#endif
	
	
};

