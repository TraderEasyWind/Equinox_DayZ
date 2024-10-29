class CfgPatches
{
	class MassiveMod_MassTextures
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
	class CowboyHat_ColorBase;
	class MassiveMod_HuntingCowboyhat: CowboyHat_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Hats\MassHuntingCowboyhat.paa",
			"MassiveMod\MassTextures\Hats\MassHuntingCowboyhat.paa",
			"MassiveMod\MassTextures\Hats\MassHuntingCowboyhat.paa"
		};
	};
	class NBCHoodBase;
	class MassiveMod_WinterHuntingHood: NBCHoodBase
	{
		displayName="Recon Hood";
		descriptionShort="Mass's Hunter Recon Hood. Does not act as an NBC Hood";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Hats\MassWinterHuntingHood.paa",
			"MassiveMod\MassTextures\Hats\MassWinterHuntingHood.paa",
			"MassiveMod\MassTextures\Hats\MassWinterHuntingHood.paa"
		};
		class Protection
		{
			biological=0;
			chemical=0;
		};
	};
};