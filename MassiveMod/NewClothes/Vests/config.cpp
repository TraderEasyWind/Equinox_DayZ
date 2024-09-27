class CfgPatches
{
	class MassiveMod_Vests
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Vests",
			"MassiveMod_Clothes"
		};
	};
};
class CfgVehicles
{
	class HighCapacityVest_ColorBase;
	class MassiveMod_GhostRiderVest: HighCapacityVest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\Vests\Data\GhostRider Vest.paa","MassiveMod\NewClothes\Vests\Data\GhostRider Vest.paa","MassiveMod\NewClothes\Vests\Data\GhostRider Vest.paa"};
	};
};