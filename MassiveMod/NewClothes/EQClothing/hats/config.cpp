// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class StrikerHats
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Headgear",
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class BaseballCap_ColorBase;
	class BaseballCap_admin: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\hats\data\autism_hat3.paa",
			"MassiveMod\NewClothes\EQClothing\hats\data\autism_hat3.paa",
			"MassiveMod\NewClothes\EQClothing\hats\data\autism_hat3.paa"
		};
	};
};