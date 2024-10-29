class CfgPatches
{
	class MassiveMod_MassTextures_Vests
	{
		units[]=
		{""};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Tops"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class PressVest_ColorBase;
	class MassiveMod_PressVestBlack: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Vests\Mass_PressVestBlack.paa",
			"MassiveMod\MassTextures\Vests\Mass_PressVestBlack.paa",
			"MassiveMod\MassTextures\Vests\Mass_PressVestBlack.paa"
		};
	};
	class MassiveMod_woodlandcamovest: PressVest_ColorBase
	{
		scope=2;
		descriptionShort="Mass's Custom Woodland Ballistic Vest";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Vests\Masswoodlandcamovest",
			"MassiveMod\MassTextures\Vests\Masswoodlandcamovest",
			"MassiveMod\MassTextures\Vests\Masswoodlandcamovest"
		};
	};
	class MassiveMod_TradeVest: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Vests\Tvest\Tvest_co.paa",
			"MassiveMod\MassTextures\Vests\Tvest\Tvest_co.paa",
			"MassiveMod\MassTextures\Vests\Tvest\Tvest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\MassTextures\Vests\Tvest\Tvest.rvmat",
			"MassiveMod\MassTextures\Vests\Tvest\Tvest.rvmat",
			"MassiveMod\MassTextures\Vests\Tvest\Tvest.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"MassiveMod\MassTextures\Vests\Tvest\Tvest.rvmat"}},{0.7,{"MassiveMod\MassTextures\Vests\Tvest\Tvest.rvmat"}},{0.5,{"MassiveMod\MassTextures\Vests\Tvest\Tvest_Damage.rvmat"}},{0.3,{"MassiveMod\MassTextures\Vests\Tvest\Tvest_Damage.rvmat"}},{0.0,{"MassiveMod\MassTextures\Vests\Tvest\Tvest_Destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				
			};
		};
	};
};