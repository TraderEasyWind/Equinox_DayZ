class CfgPatches
{
	class MassiveModLootMetalPlates
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};//meow
class CfgVehicles
{
	class Inventory_Base;
	class PileOfMetalPlates: Inventory_Base
	{
		scope = 2;
		displayName = "Metal Plate Pile";
		descriptionShort = "$STR_CfgVehicles_PileOfWoodenPlanks1";
		model = "\dz\gear\consumables\Metal_Sheets.p3d";
		weight = 5000;
		itemSize[] = {7,20};
		canBeSplit = 0;
		varQuantityInit = 150.0;
		varQuantityMin = 0.0;
		varQuantityMax = 150.0;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 256;
		physLayer = "item_large";
		useEntityHierarchy = "true";
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		class AnimationSources
		{
			class stage_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stage_2
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stage_3
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
};