class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuilding
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"Rearmed_BaseBuilding",
			"BaseBuilding_Wall",
			"BaseBuilding_Floor",
			"BaseBuilding_Foundation"
        };
	};
};
class CfgVehicles
{
	class BaseBuilding;
	class BaseBuilding_FoundationBase;
	class BaseBuilding_FrameFoundation: BaseBuilding_FoundationBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_FloorBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
		};
	};
	class BaseBuilding_WallBase;
	class BaseBuilding_MetalWall: BaseBuilding_WallBase
	{
		hiddenSelectionsTextures[]=
		{
			"dz\gear\consumables\data\pile_of_planks_co.paa",
			"MassiveMod\ModTweaks\RABasebuilding\Data\Metal_Wall_co.paa"
		};
	};
};