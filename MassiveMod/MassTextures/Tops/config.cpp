class CfgPatches
{
	class MassiveMod_MassTextures_Tops
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
	class TShirt_ColorBase;
	class HuntingJacket_ColorBase;
	class Hoodie_ColorBase;
	class TacticalShirt_ColorBase;
	class PoliceJacketOrel;
	class M65Jacket_ColorBase;
	class Sweater_ColorBase;
	class TTsKOJacket_ColorBase;
	class MassiveMod_GDShirt: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\GDshirt.paa",
			"MassiveMod\MassTextures\Tops\GDshirt.paa",
			"MassiveMod\MassTextures\Tops\GDshirt.paa"
		};
	};
	class MassiveMod_GokuShirt: TShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\Gokushirt.paa",
			"MassiveMod\MassTextures\Tops\Gokushirt.paa",
			"MassiveMod\MassTextures\Tops\Gokushirt.paa"
		};
	};
	class MassiveMod_BlackJacket: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\MassBlackJacket.paa",
			"MassiveMod\MassTextures\Tops\MassBlackJacket.paa",
			"MassiveMod\MassTextures\Tops\MassBlackJacket.paa"
		};
	};
	class MassiveMod_BeigeJacket: HuntingJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\MassBeigeJacket.paa",
			"MassiveMod\MassTextures\Tops\MassBeigeJacket.paa",
			"MassiveMod\MassTextures\tops\MassBeigeJacket.paa"
		};
	};
	class MassiveMod_CamoHoodie: Hoodie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\MassCamoHoodie.paa",
			"MassiveMod\MassTextures\Tops\MassCamoHoodie.paa",
			"MassiveMod\MassTextures\Tops\MasscamoHoodie.paa",
			"MassiveMod\MassTextures\Tops\MasscamoHoodie.paa",
			"MassiveMod\MassTextures\Tops\MassCamoHoodie.paa",
			"MassiveMod\MassTextures\Tops\MasscamoHoodie.paa",
			"MassiveMod\MassTextures\Tops\MasscamoHoodie.paa"
		};
	};
	class MassiveMod_Mandraketop: TacticalShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\MassMandraketop.paa",
			"MassiveMod\MassTextures\Tops\MassMandraketop.paa",
			"MassiveMod\MassTextures\Tops\MassMandraketop.paa"
		};
	};
	class MassiveMod_OrelTopgreen: PoliceJacketOrel
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\Massoreltopgreen.paa",
			"MassiveMod\MassTextures\Tops\Massoreltopgreen.paa",
			"MassiveMod\MassTextures\Tops\Massoreltopgreen.paa",
			"MassiveMod\MassTextures\Tops\Massoreltopgreen.paa",
			"MassiveMod\MassTextures\Tops\Massoreltopgreen.paa"
		};
	};
	class MassiveMod_SM90Top: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\MassSM90Top.paa",
			"MassiveMod\MassTextures\Tops\MassSM90Top.paa",
			"MassiveMod\MassTextures\Tops\MassSM90Top.paa"
		};
	};
	class MassiveMod_SM90WTop: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\MassSM90WTop.paa",
			"MassiveMod\MassTextures\Tops\MassSM90WTop.paa",
			"MassiveMod\MassTextures\Tops\MassSM90WTop.paa"
		};
	};
	class MassiveMod_TropicamTop: TacticalShirt_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\Masstropicamtop.paa",
			"MassiveMod\MassTextures\Tops\Masstropicamtop.paa",
			"MassiveMod\MassTextures\Tops\Masstropicamtop.paa"
		};
	};
	class MassiveMod_urbancamom65: M65Jacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\Massurbancamom65.paa",
			"MassiveMod\MassTextures\Tops\Massurbancamom65.paa",
			"MassiveMod\MassTextures\Tops\Massurbancamom65.paa"
		};
	};
	class Masswoodlandcamosweater: Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\Masswoodlandcamosweater",
			"MassiveMod\MassTextures\Tops\Masswoodlandcamosweater",
			"MassiveMod\MassTextures\Tops\Masswoodlandcamosweater"
		};
	};
	class MassiveMod_ErbsenmusterTop: TTsKOJacket_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\MassTextures\Tops\ttsko_jacket_MassProject.paa",
			"MassiveMod\MassTextures\Tops\ttsko_jacket_MassProject.paa",
			"MassiveMod\MassTextures\Tops\ttsko_jacket_MassProject.paa"
		};
	};
};