class CfgPatches
{
	class MassiveMod_Clothes_Paramedic
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects",
			"DZ_Characters_Tops",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class ParamedicJacket_ColorBase;
	class ParamedicPants_ColorBase;
	class MassiveMod_ParamedicJacket_LivBlack: ParamedicJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\Paramedic\paramedic_jacket_blue_co____BlackLIV.paa","MassiveMod\NewClothes\Paramedic\paramedic_jacket_blue_co____BlackLIV.paa","MassiveMod\NewClothes\Paramedic\paramedic_jacket_blue_co____BlackLIV.paa"};
	};
	class MassiveMod_ParamedicPants_LivBlack: ParamedicPants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\Paramedic\paramedic_pants_blk_coFLAT.paa","MassiveMod\NewClothes\Paramedic\paramedic_pants_blk_coFLAT.paa","MassiveMod\NewClothes\Paramedic\paramedic_pants_blk_coFLAT.paa"};
	};
};