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
			"DZ_Weapons_Magazines"
		};
		magazines[]={};
	};
};
class cfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
	};
	class Mag_1911_7Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_1911_7Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_1911_7Rnd1";
	};
	class Mag_CZ75_15Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CZ75_15Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CZ75_15Rnd1";
	};
	class Mag_Deagle_9Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Deagle_9Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Deagle_9Rnd1";
	};
	class Mag_FNX45_15Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_FNX45_15Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_FNX45_15Rnd1";
	};
	class Mag_Glock_15Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Glock_15Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Glock_15Rnd1";
	};
	class Mag_IJ70_8Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_IJ70_12Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_IJ70_12Rnd1";
	};
	class Mag_MKII_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_MKII_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_MKII_10Rnd1";
	};
	class Mag_P1_8Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_P1_8Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_P1_8Rnd1";
	};
	class Mag_SSG82_5rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_SSG82_5rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_SSG82_5rnd1";
	};
	class Mag_AK74_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AK74_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AK74_30Rnd1";
	};
	class Mag_AK74_30Rnd_Black: Mag_AK74_30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AK74_30Rnd1";
	};
	class Mag_AK74_30Rnd_Green: Mag_AK74_30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AK74_30Rnd1";
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AK74_45Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AK74_45Rnd1";
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AK101_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AK101_30Rnd1";
	};
	class Mag_AK101_30Rnd_Black: Mag_AK101_30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AK101_30Rnd1";
	};
	class Mag_AK101_30Rnd_Green: Mag_AK101_30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AK101_30Rnd1";
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AKM_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_30Rnd1";
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AKM_Drum75Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_Drum75Rnd1";
	};
	class Mag_AKM_Drum75Rnd_Black: Mag_AKM_Drum75Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_Drum75Rnd1";
	};
	class Mag_AKM_Drum75Rnd_Green: Mag_AKM_Drum75Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_Drum75Rnd1";
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AKM_Palm30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_Palm30Rnd1";
	};
	class Mag_AKM_Palm30Rnd_Black: Mag_AKM_Palm30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_Palm30Rnd1";
	};
	class Mag_AKM_Palm30Rnd_Green: Mag_AKM_Palm30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_AKM_Palm30Rnd1";
	};
	class Mag_Aug_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_AUG_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_AUG_30Rnd1";
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CMAG_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_10Rnd1";
	};
	class Mag_CMAG_10Rnd_Black: Mag_CMAG_10Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_10Rnd1";
	};
	class Mag_CMAG_10Rnd_Green: Mag_CMAG_10Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_10Rnd1";
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CMAG_20Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_20Rnd1";
	};
	class Mag_CMAG_20Rnd_Black: Mag_CMAG_20Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_20Rnd1";
	};
	class Mag_CMAG_20Rnd_Green: Mag_CMAG_20Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_20Rnd1";
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CMAG_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_30Rnd1";
	};
	class Mag_CMAG_30Rnd_Black: Mag_CMAG_30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_30Rnd1";
	};
	class Mag_CMAG_30Rnd_Green: Mag_CMAG_30Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_30Rnd1";
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CMAG_40Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_40Rnd1";
	};
	class Mag_CMAG_40Rnd_Black: Mag_CMAG_40Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_40Rnd1";
	};
	class Mag_CMAG_40Rnd_Green: Mag_CMAG_40Rnd
	{
		descriptionShort="$STR_cfgMagazines_real_Mag_CMAG_40Rnd1";
	};
	class Mag_CZ61_20Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CZ61_20Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CZ61_20Rnd1";
	};
	class Mag_CZ527_5Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CZ527_5Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CZ527_5Rnd1";
	};
	class Mag_CZ550_4Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CZ550_4Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CZ550_4Rnd1";
	};
	class Mag_CZ550_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_CZ550_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_CZ550_10Rnd1";
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_FAL_20Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_FAL_20Rnd1";
	};
	class Mag_FAMAS_25Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_FAMAS_25Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_FAMAS_25Rnd1";
	};
	class Mag_M14_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_M14_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_M14_10Rnd1";
	};
	class Mag_M14_20Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_M14_20Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_M14_20Rnd1";
	};
	class Mag_MP5_15Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_MP5_15Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_MP5_15Rnd1";
	};
	class Mag_MP5_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_MP5_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_MP5_30Rnd1";
	};
	class Mag_PP19_64Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_PP19_64Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_PP19_64Rnd1";
	};
	class Mag_Ruger1022_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Ruger1022_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Ruger1022_10Rnd1";
	};
	class Mag_Ruger1022_15Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Ruger1022_15Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Ruger1022_15Rnd1";
	};
	class Mag_Ruger1022_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Ruger1022_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Ruger1022_30Rnd1";
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_STANAGCoupled_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_STANAGCoupled_30Rnd1";
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_STANAG_30Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_STANAG_30Rnd1";
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_STANAG_60Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_STANAG_60Rnd1";
	};
	class Mag_SVD_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_SVD_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_SVD_10Rnd1";
	};
	class Mag_Saiga_5Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Saiga_5Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Saiga_5Rnd1";
	};
	class Mag_Saiga_8Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Saiga_8Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Saiga_8Rnd1";
	};
	class Mag_Saiga_Drum20Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Saiga_Drum20Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Saiga_Drum20Rnd1";
	};
	class Mag_Scout_5Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_Scout_5Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_Scout_5Rnd1";
	};
	class Mag_UMP_25Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_UMP_25Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_UMP_25Rnd1";
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_VAL_20Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_VAL_20Rnd1";
	};
	class Mag_VSS_10Rnd: Magazine_Base
	{
		displayName="$STR_cfgMagazines_real_Mag_VSS_10Rnd0";
		descriptionShort="$STR_cfgMagazines_real_Mag_VSS_10Rnd1";
	};
	class Mag_SV98_10Rnd: Magazine_Base
	{
		displayName="$STR_CfgMagazines_Mag_real_SV98_10Rnd0";
		descriptionShort="$STR_CfgMagazines_Mag_real_SV98_10Rnd1";
	};
};
