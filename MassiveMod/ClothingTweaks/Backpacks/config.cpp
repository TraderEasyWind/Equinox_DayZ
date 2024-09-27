class CfgPatches
{
	class Spearhead_BackpackTweaks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"Spearhead_ClothingTweaks",
			"DZ_Characters_Backpacks"
		};
		author = "Mass";
		name = "CMASIGAIMGHIDJFUASD";
	};
};
class CfgVehicles
{
	class Clothing;
    class AssaultBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {7,8};
	};
	class TortillaBag: Clothing
	{
		itemsCargoSize[] = {9,8};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		itemsCargoSize[] = {9,9};
	};
};