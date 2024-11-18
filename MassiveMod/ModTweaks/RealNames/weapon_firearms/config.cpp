class CfgPatches
{
	class Real_Names
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols_1911",
			"DZ_Pistols_CZ75",
			"DZ_Pistols_DE",
			"DZ_Pistols_Derringer",
			"DZ_Pistols_Encore",
			"DZ_Pistols_FNX45",
			"DZ_Pistols_Glock",
			"DZ_Pistols_Magnum",
			"DZ_Pistols_mkii",
			"DZ_Pistols_p1",
			"DZ_Pistols_pmm",
			"DZ_Weapons_Firearms_AK101",
			"DZ_Weapons_Firearms_AK74",
			"DZ_Weapons_Firearms_AKM",
			"DZ_Weapons_Firearms_aug",
			"DZ_Weapons_Firearms_B95",
			"DZ_Weapons_Firearms_CZ527",
			"DZ_Weapons_Firearms_CZ550",
			"DZ_Weapons_Firearms_cz61",
			"DZ_Weapons_Firearms_FAL",
			"DZ_Weapons_Firearms_Famas",
			"DZ_Weapons_Firearms_IZH18",
			"DZ_Weapons_Firearms_M14",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_MosinNagant",
			"DZ_Weapons_Firearms_MP5",
			"DZ_Weapons_Firearms_PP19",
			"DZ_Weapons_Firearms_Repeater",
			"DZ_Weapons_Firearms_Ruger1022",
			"DZ_Weapons_Firearms_Scout",
			"DZ_Weapons_Firearms_SKS",
			"DZ_Weapons_Firearms_SSG82",
			"DZ_Weapons_Firearms_SVD",
			"DZ_Weapons_Firearms_UMP",
			"DZ_Weapons_Firearms_VSS",
			"DZ_Weapons_Firearms_Winchester70",
			"DZ_Weapons_Firearms_SaigaK",
			"DZ_Weapons_Shotguns_Izh18Shotgun",
			"DZ_Weapons_Shotguns_Izh43",
			"DZ_Weapons_Shotguns_MP133",
			"DZ_Weapons_Firearms_SV98"
		};
	};
};
class cfgWeapons
{
	class Pistol_Base;
	class Colt1911_Base: Pistol_Base
	{
	};
	class Colt1911: Colt1911_Base
	{
		displayName="$STR_cfgWeapons_real_Colt19110";
		descriptionShort="$STR_cfgWeapons_real_Colt19111";
	};
	class Engraved1911: Colt1911_Base
	{
		displayName="$STR_cfgWeapons_real_Engraved19110";
		descriptionShort="$STR_cfgWeapons_real_Engraved19111";
	};
	class CZ75_Base: Pistol_Base
	{
	};
	class CZ75: CZ75_Base
	{
		displayName="$STR_cfgWeapons_real_CZ750";
		descriptionShort="$STR_cfgWeapons_real_CZ751";
	};
	class Deagle_Base: Pistol_Base
	{
	};
	class Deagle: Deagle_Base
	{
		displayName="$STR_cfgWeapons_real_DE0";
		descriptionShort="$STR_cfgWeapons_real_DE1";
	};
	class Derringer_Base: Pistol_Base
	{
		displayName="$STR_cfgWeapons_real_Derringer_Base0";
		descriptionShort="$STR_cfgWeapons_real_Derringer_Base1";
	};
	class LongHorn_Base: Pistol_Base
	{
	};
	class LongHorn: LongHorn_Base
	{
		displayName="$STR_cfgWeapons_real_LongHorn0";
		descriptionShort="$STR_cfgWeapons_real_LongHorn1";
	};
	class FNX45_Base: Pistol_Base
	{
	};
	class FNX45: FNX45_Base
	{
		displayName="$STR_cfgWeapons_real_FNX450";
		descriptionShort="$STR_cfgWeapons_real_FNX451";
	};
	class Glock19_Base: Pistol_Base
	{
	};
	class Glock19: Glock19_Base
	{
		displayName="$STR_cfgWeapons_real_Glock190";
		descriptionShort="$STR_cfgWeapons_real_Glock191";
	};
	class Magnum_Base: Pistol_Base
	{
	};
	class Magnum: Magnum_Base
	{
		displayName="$STR_cfgWeapons_real_Magnum0";
		descriptionShort="$STR_cfgWeapons_real_Magnum1";
	};
	class SawedoffMagnum: Magnum_Base
	{
		displayName="$STR_cfgWeapons_real_SawedoffMagnum0";
		descriptionShort="$STR_cfgWeapons_real_SawedoffMagnum1";
	};
	class MKII_Base: Pistol_Base
	{
	};
	class MKII: MKII_Base
	{
		displayName="$STR_cfgWeapons_real_MKII0";
		descriptionShort="$STR_cfgWeapons_real_MKII1";
	};
	class P1_Base: Pistol_Base
	{
	};
	class P1: P1_Base
	{
		displayName="$STR_cfgWeapons_real_P10";
		descriptionShort="$STR_cfgWeapons_real_P11";
	};
	class MakarovIJ70_Base: Pistol_Base
	{
	};
	class MakarovIJ70: MakarovIJ70_Base
	{
		displayName="$STR_cfgWeapons_real_MakarovIJ700";
		descriptionShort="$STR_cfgWeapons_real_MakarovIJ701";
	};
	class Rifle_Base;
	class BoltActionRifle_ExternalMagazine_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class AK101_Base: Rifle_Base
	{
	};
	class AK101: AK101_Base
	{
		displayName="$STR_cfgWeapons_real_AK1010";
		descriptionShort="$STR_cfgWeapons_real_AK1011";
	};
	class AK74_Base: Rifle_Base
	{
	};
	class AK74: AK74_Base
	{
		displayName="$STR_cfgWeapons_real_AK740";
		descriptionShort="$STR_cfgWeapons_real_AK741";
	};
	class AKS74U: AK74_Base
	{
		displayName="$STR_cfgWeapons_real_AKS74U0";
		descriptionShort="$STR_cfgWeapons_real_AKS74U1";
	};
	class AKS74U_Black: AKS74U
	{
		descriptionShort="$STR_cfgWeapons_real_AKS74U1";
	};
	class AKS74U_Green: AKS74U
	{
		descriptionShort="$STR_cfgWeapons_real_AKS74U1";
	};
	class AKM_Base: Rifle_Base
	{
	};
	class AKM: AKM_Base
	{
		displayName="$STR_cfgWeapons_real_AKM0";
		descriptionShort="$STR_cfgWeapons_real_AKM1";
	};
	class Aug_Base: Rifle_Base
	{
	};
	class Aug: Aug_Base
	{
		displayName="$STR_cfgWeapons_real_Aug0";
		descriptionShort="$STR_cfgWeapons_real_Aug1";
	};
	class AugShort: Aug_Base
	{
		displayName="$STR_cfgWeapons_real_AugShort0";
		descriptionShort="$STR_cfgWeapons_real_AugShort1";
	};
	class B95_Base: Rifle_Base
	{
	};
	class B95: B95_Base
	{
		displayName="$STR_cfgWeapons_real_B950";
		descriptionShort="$STR_cfgWeapons_real_B951";
	};
	class SawedoffB95: B95_Base
	{
		displayName="$STR_cfgWeapons_real_SawedoffB950";
		descriptionShort="$STR_cfgWeapons_real_SawedoffB951";
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class CZ527: CZ527_Base
	{
		displayName="$STR_cfgWeapons_real_CZ5270";
		descriptionShort="$STR_cfgWeapons_real_CZ5271";
	};
	class CZ527_Black: CZ527
	{
		descriptionShort="$STR_cfgWeapons_real_CZ5271";
	};
	class CZ527_Green: CZ527
	{
		descriptionShort="$STR_cfgWeapons_real_CZ5271";
	};
	class CZ527_Camo: CZ527
	{
		descriptionShort="$STR_cfgWeapons_real_CZ5271";
	};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class CZ550: CZ550_Base
	{
		displayName="$STR_cfgWeapons_real_CZ5500";
		descriptionShort="$STR_cfgWeapons_real_CZ5501";
	};
	class CZ61_Base: Rifle_Base
	{
	};
	class CZ61: CZ61_Base
	{
		displayName="$STR_cfgWeapons_real_CZ610";
		descriptionShort="$STR_cfgWeapons_real_CZ611";
	};
	class FAL_Base: Rifle_Base
	{
	};
	class FAL: FAL_Base
	{
		displayName="$STR_cfgWeapons_real_FAL0";
		descriptionShort="$STR_cfgWeapons_real_FAL1";
	};
	class Famas_Base: Rifle_Base
	{
	};
	class FAMAS: Famas_Base
	{
		displayName="$STR_cfgWeapons_real_FAMAS0";
		descriptionShort="$STR_cfgWeapons_real_FAMAS1";
	};
	class SawedoffFAMAS: Famas_Base
	{
		displayName="$STR_cfgWeapons_real_SawedoffFAMAS0";
		descriptionShort="$STR_cfgWeapons_real_SawedoffFAMAS1";
	};
	class Izh18_Base: Rifle_Base
	{
	};
	class Izh18: Izh18_Base
	{
		displayName="$STR_cfgWeapons_real_Izh180";
		descriptionShort="$STR_cfgWeapons_real_Izh181";
	};
	class SawedoffIzh18: Izh18
	{
		displayName="$STR_cfgWeapons_real_SawedoffIzh180";
		descriptionShort="$STR_cfgWeapons_real_SawedoffIzh181";
	};
	class M14_Base: Rifle_Base
	{
	};
	class M14: M14_Base
	{
		displayName="$STR_cfgWeapons_real_M140";
		descriptionShort="$STR_cfgWeapons_real_M141";
	};
	class M16A2_Base: Rifle_Base
	{
	};
	class M16A2: M16A2_Base
	{
		displayName="$STR_cfgWeapons_real_M16A20";
		descriptionShort="$STR_cfgWeapons_real_M16A21";
	};
	class M4A1_Base: Rifle_Base
	{
	};
	class M4A1: M4A1_Base
	{
		displayName="$STR_cfgWeapons_real_M4A10";
		descriptionShort="$STR_cfgWeapons_real_M4A11";
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		displayName="$STR_cfgWeapons_real_Mosin91300";
		descriptionShort="$STR_cfgWeapons_real_Mosin91301";
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{
		displayName="$STR_cfgWeapons_real_SawedoffMosin91300";
		descriptionShort="$STR_cfgWeapons_real_SawedoffMosin91301";
	};
	class MP5K_Base: Rifle_Base
	{
	};
	class MP5K: MP5K_Base
	{
		displayName="$STR_cfgWeapons_real_MP5K0";
		descriptionShort="$STR_cfgWeapons_real_MP5K1";
	};
	class PP19_Base: Rifle_Base
	{
		displayName="$STR_cfgWeapons_real_PP190";
		descriptionShort="$STR_cfgWeapons_real_PP191";
	};
	class Repeater_Base: Rifle_Base
	{
	};
	class Repeater: Repeater_Base
	{
		displayName="$STR_cfgWeapons_real_Repeater0";
		descriptionShort="$STR_cfgWeapons_real_Repeater1";
	};
	class Ruger1022_Base: Rifle_Base
	{
	};
	class Ruger1022: Ruger1022_Base
	{
		displayName="$STR_cfgWeapons_real_Ruger10220";
		descriptionShort="$STR_cfgWeapons_real_Ruger10221";
	};
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class Scout: Scout_Base
	{
		displayName="$STR_cfgWeapons_real_Scout0";
		descriptionShort="$STR_cfgWeapons_real_Scout1";
	};
	class SKS_Base: Rifle_Base
	{
	};
	class SKS: SKS_Base
	{
		displayName="$STR_cfgWeapons_real_SKS0";
		descriptionShort="$STR_cfgWeapons_real_SKS1";
	};
	class SKS_Black: SKS
	{
		descriptionShort="$STR_cfgWeapons_real_SKS1";
	};
	class SKS_Green: SKS
	{
		descriptionShort="$STR_cfgWeapons_real_SKS1";
	};
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
	};
	class SSG82: SSG82_Base
	{
		displayName="$STR_cfgWeapons_real_SSG820";
		descriptionShort="$STR_cfgWeapons_real_SSG821";
	};
	class SVD_Base: Rifle_Base
	{
	};
	class SVD: SVD_Base
	{
		displayName="$STR_cfgWeapons_real_SVD0";
		descriptionShort="$STR_cfgWeapons_real_SVD1";
	};
	class UMP45_Base: Rifle_Base
	{
	};
	class UMP45: UMP45_Base
	{
		displayName="$STR_cfgWeapons_real_UMP450";
		descriptionShort="$STR_cfgWeapons_real_UMP451";
	};
	class VSS_Base: Rifle_Base
	{
	};
	class VSS: VSS_Base
	{
		displayName="$STR_cfgWeapons_real_VSS0";
		descriptionShort="$STR_cfgWeapons_real_VSS1";
	};
	class ASVAL: VSS_Base
	{
		displayName="$STR_cfgWeapons_real_ASVAL0";
		descriptionShort="$STR_cfgWeapons_real_ASVAL1";
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
	};
	class Winchester70: Winchester70_Base
	{
		displayName="$STR_cfgWeapons_real_Winchester700";
		descriptionShort="$STR_cfgWeapons_real_Winchester701";
	};
	class Winchester70_Black: Winchester70
	{
		descriptionShort="$STR_cfgWeapons_real_Winchester701";
	};
	class Winchester70_Green: Winchester70
	{
		descriptionShort="$STR_cfgWeapons_real_Winchester701";
	};
	class Shotgun_Base;
	class Saiga_Base: Rifle_Base
	{
	};
	class Saiga: Saiga_Base
	{
		displayName="$STR_cfgWeapons_real_Saiga12KShotgun0";
		descriptionShort="$STR_cfgWeapons_real_Saiga12KShotgun1";
	};
	class Izh18Shotgun_Base: Shotgun_Base
	{
	};
	class Izh18Shotgun: Izh18Shotgun_Base
	{
		displayName="$STR_cfgWeapons_real_Izh18Shotgun0";
		descriptionShort="$STR_cfgWeapons_real_Izh18Shotgun1";
	};
	class SawedoffIzh18Shotgun: Izh18Shotgun_Base
	{
		displayName="$STR_cfgWeapons_real_SawedoffIzh18Shotgun0";
		descriptionShort="$STR_cfgWeapons_real_SawedoffIzh18Shotgun1";
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
	};
	class Izh43Shotgun: Izh43Shotgun_Base
	{
		displayName="$STR_cfgWeapons_real_Izh43Shotgun0";
		descriptionShort="$STR_cfgWeapons_real_Izh43Shotgun1";
	};
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
	{
		displayName="$STR_cfgWeapons_real_SawedoffIzh43Shotgun0";
		descriptionShort="$STR_cfgWeapons_real_SawedoffIzh43Shotgun1";
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
	};
	class Mp133Shotgun: Mp133Shotgun_Base
	{
		displayName="$STR_cfgWeapons_real_Mp133Shotgun0";
		descriptionShort="$STR_cfgWeapons_real_Mp133Shotgun1";
	};
	class Vikhr: VSS_Base
	{
		displayName="$STR_cfgWeapons_real_Vikhr0";
		descriptionShort="$STR_cfgWeapons_real_Vikhr1";
	};
	class SV98_Base;
	class SV98: SV98_Base
	{
		displayName="$STR_cfgWeapons_real_SV980";
	};
};
