class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuildingFix
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"BaseBuilding_Wall",
			"MassiveMod_ModTweaks_RABasebuilding",
			"BaseBuilding_Floor",
			"BaseBuilding_DoorWall"
        };
	};
};//meow
class CfgVehicles
{
	class BaseBuilding;
	class BaseBuilding_WallBase;
	class BaseBuilding_SingleDoorBase;
	class BaseBuilding_VaultSingleDoor: BaseBuilding_SingleDoorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor.p3d";
	};
	class BaseBuilding_TriangleFloorBase: BaseBuilding
	{
		placementMode = 3;
		class Snapping
		{
			class NorthEast
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {-0.866025,0,-0.5};
				up[] = {0,1,0};
			};
			class NorthWest
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0.866025,0,-0.5};
				up[] = {0,1,0};
			};
			class South
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
		};
	};
	class BaseBuilding_FloorBase: BaseBuilding
	{
		placementMode = 3;
		class Snapping
		{
			class North
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0,0,-1};
				up[] = {0,1,0};
			};
			class South
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
			class East
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {-1,0,0};
				up[] = {0,1,0};
			};
			class West
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {1,0,0};
				up[] = {0,1,0};
			};
			class Center
			{
				acceptedTypes[] = {"BaseBuilding_StairsBase"};
				acceptedSnapPoints[] = {"Bottom"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
		};
	};
	class BaseBuilding_FrameTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Floors\FrameTriangleFloor.p3d";
	};
	class BaseBuilding_FrameFloor: BaseBuilding_FloorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Floors\FrameFloor.p3d";
	};
	//class BaseBuilding_MetalWall: BaseBuilding_WallBase
	//{
	//	model = "MassiveMod\ModTweaks\RABasebuilding\Data\Walls\MetalWall.p3d";
	//	hiddenSelections[] = {"wood","metal"};
	//	hiddenSelectionsTextures[]=
	//	{
	//		"dz\gear\consumables\data\pile_of_planks_co.paa",
	//		"MassiveMod\ModTweaks\RABasebuilding\Data\Walls\Metal_Wall_co.paa"
	//	};
	//};
};