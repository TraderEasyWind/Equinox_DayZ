class CfgPatches
{
	class MassiveMod_MassTextures_Bottoms
	{
		units[]=
		{""};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Tops",
			"MassiveMod_MassTextures"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Breeches_ColorBase;
	class TTSKOPants;
	class MassiveMod_ErbsenmusterBreeches: Breeches_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		hiddenSelectionsTextures[] = 
		{
			"MassiveMod\MassTextures\Bottoms\BreechesF_MassProject.paa",
			"MassiveMod\MassTextures\Bottoms\BreechesF_MassProject.paa",
			"MassiveMod\MassTextures\Bottoms\BreechesF_MassProject.paa"
		};
	};
	class ShortJeans_ColorBase;
	class MassiveMod_jeanshorts: ShortJeans_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\Massjeanshorts.paa",
			"MassiveMod\MassTextures\Bottoms\Massjeanshorts.paa",
			"MassiveMod\MassTextures\Bottoms\Massjeanshorts.paa"
		};
	};
	class FirefightersPants_ColorBase;
	class MassiveMod_Mandrakebottom: FirefightersPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\MassMandrakebottom.paa",
			"MassiveMod\MassTextures\Bottoms\MassMandrakebottom.paa",
			"MassiveMod\MassTextures\Bottoms\MassMandrakebottom.paa"
		};
	};
	class MassiveMod_orelpantsgreen: TTSKOPants
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\Massorelpantsgreen.paa",
			"MassiveMod\MassTextures\Bottoms\Massorelpantsgreen.paa",
			"MassiveMod\MassTextures\Bottoms\Massorelpantsgreen.paa"
		};
	};
	class MassiveMod_SM90Pants: TTSKOPants
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\MassSM90Pants.paa",
			"MassiveMod\MassTextures\Bottoms\MassSM90Pants.paa",
			"MassiveMod\MassTextures\Bottoms\MassSM90Pants.paa"
		};
	};
	class MassiveMod_SM90WPants: TTSKOPants
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\MassSM90WPants.paa",
			"MassiveMod\MassTextures\Bottoms\MassSM90WPants.paa",
			"MassiveMod\MassTextures\Bottoms\MassSM90WPants.paa"
		};
	};
	class CargoPants_ColorBase;
	class MassiveMod_TropicamPants: CargoPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\Masstropicampants.paa",
			"MassiveMod\MassTextures\Bottoms\Masstropicampants.paa",
			"MassiveMod\MassTextures\Bottoms\Masstropicampants.paa"
		};
	};
	class MassiveMod_woodlandcargopants: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\Masswoodlandcargopants.paa",
			"MassiveMod\MassTextures\Bottoms\Masswoodlandcargopants.paa",
			"MassiveMod\MassTextures\Bottoms\Masswoodlandcargopants.paa"
		};
	};
	class MassiveMod_ErbsenmusterBottoms: TTSKOPants
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\ttsko_pants_MassProject.paa",
			"MassiveMod\MassTextures\Bottoms\ttsko_pants_MassProject.paa",
			"MassiveMod\MassTextures\Bottoms\ttsko_pants_MassProject.paa"
		};
	};
    class MassiveMod_Urbancamocargopants: CargoPants_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Bottoms\Massurbancamocargopants.paa",
			"MassiveMod\MassTextures\Bottoms\Massurbancamocargopants.paa",
			"MassiveMod\MassTextures\Bottoms\Massurbancamocargopants.paa"
		};
	};
};