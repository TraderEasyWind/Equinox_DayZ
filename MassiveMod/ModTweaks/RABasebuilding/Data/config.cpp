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
			"MassiveMod_ModTweaks_RABasebuilding"
        };
	};
};//meow
class CfgVehicles
{
	class BaseBuilding_WallBase;
	class BaseBuilding_MetalWall: BaseBuilding_WallBase
	{
		hiddenSelectionsTextures[]+=
		{
			"dz\gear\consumables\data\pile_of_planks_co.paa",
			"MassiveMod\ModTweaks\RABasebuilding\Data\Metal_Wall_co.paa"
		};
	};
};