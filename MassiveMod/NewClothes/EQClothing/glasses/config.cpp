// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class StrikerGlasses
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Characters_Tops",
			"DZ_Characters_Masks",
			"DZ_Characters_Headgear",
			"DZ_Characters_gloves",
			"DZ_Characters_Glasses",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class ItemOptics;
	class SportGlasses_ColorBase;
	class SportGlasses_NCR_JoeyXs2: SportGlasses_ColorBase
	{
		descriptionShort="Highly functional design that wraps around the head. NCR Branded JoeyX's that also Protects the eyes from the sun.";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\glasses\data\joeyx_NCR2.paa",
			"MassiveMod\NewClothes\EQClothing\glasses\data\joeyx_NCR2.paa",
			"MassiveMod\NewClothes\EQClothing\glasses\data\joeyx_NCR2.paa"
		};
	};
};	