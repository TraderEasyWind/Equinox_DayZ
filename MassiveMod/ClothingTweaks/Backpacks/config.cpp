class CfgPatches
{
	class EQ_BackpackTweaks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Backpacks"
		};
		author = "Mass";
		name = "CMASIGAIMGHIDJFUASD";
	};
};
class CfgVehicles
{
	class Clothing;
    class TaloonBag_ColorBase: Clothing
	{
		allowOwnedCargoManipulation=1;
	};
};