class CfgPatches
{
	class A6_Gunplay
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgMods
{
	class A6_Gunplay
	{
		dir="A6_Gunplay";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Gunplay";
		credits="FutureSixx";
		author="FutureSixx";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"A6_Gunplay/Scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"A6_Gunplay/Scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"A6_Gunplay/Scripts/5_mission"};
			};
		};
	};
};	
class cfgWeapons
{
	class DefaultWeapon;
	class LauncherCore;
	class RifleCore;
	class PistolCore;
	// for weapon classes, the values that you put in are in seconds. Here we are just setting up for vanilla classes.
	// By Default all classes under "Rifle_Base" take 0.35 seconds to full ads. 
	// take the aimSpeedModifier array and paste into any base class of the weapon you wish to change the ADS Speed of.  
	class Rifle_Base: RifleCore
	{
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class BoltActionRifle_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.4,0.4,0.4};
	};
	class BoltActionRifle_InnerMagazine_Base: BoltActionRifle_Base
	{
		aimSpeedModifier[]={0.4,0.4,0.4};
	};
	class BoltActionRifle_ExternalMagazine_Base: BoltActionRifle_Base
	{
		aimSpeedModifier[]={0.4,0.4,0.4};
	};
	class Shotgun_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class Pistol_Base: PistolCore
	{
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class Archery_Base: RifleCore
	{
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class Launcher_Base: LauncherCore
	{
		aimSpeedModifier[]={0.5,0.5,0.5};
	};
	class Colt1911_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.16,0.16,0.16};
	};
	class CZ75_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.18,0.18,0.18};
	};	
	class Deagle_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.26,0.26,0.26};
	};
	class Derringer_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.12,0.12,0.12};
	};
	class Flaregun_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.12,0.12,0.12};
	};
	class FNX45_Base: Pistol_Base
	{	
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class Glock19_Base: Pistol_Base
	{	
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class LongHorn_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class Magnum_Base: Pistol_Base
	{	
		aimSpeedModifier[]={0.23,0.23,0.23};
	};
	class SawedoffMagnum: Magnum_Base
	{	
		aimSpeedModifier[]={0.16,0.16,0.16};
	};
	class MKII_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.19,0.19,0.19};
	};
	class P1_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.16,0.16,0.16};
	};
	class MakarovPB_Base: Pistol_Base
	{	
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class MakarovIJ70_Base: Pistol_Base
	{
		aimSpeedModifier[]={0.16,0.16,0.16};
	};
	class Red9_Base: Pistol_Base
	{	
		aimSpeedModifier[]={0.23,0.23,0.23};
	};
	class Izh18Shotgun_Base: Shotgun_Base
	{
		aimSpeedModifier[]={0.26,0.26,0.26};
	};
	class SawedoffIzh18Shotgun: Izh18Shotgun_Base
	{
		aimSpeedModifier[]={0.18,0.18,0.18};
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
	{
		aimSpeedModifier[]={0.22,0.22,0.22};
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		aimSpeedModifier[]={0.28,0.28,0.28};
	};
	class Saiga_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.35,0.35,0.35};
	};
	class Crossbow_Base: Archery_Base
	{
		aimSpeedModifier[]={0.25,0.25,0.25};
	};
	class M79_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.4,0.4,0.4};
	};
	class AK101_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.35,0.35,0.35};
	};
	class AK74_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.35,0.35,0.35};
	};
	class AKS74U: AK74_Base
	{
		aimSpeedModifier[]={0.27,0.27,0.27};
	};
	class AKM_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.37,0.37,0.37};
	};
	class Aug_Base;
	class Aug: Aug_Base
	{
		aimSpeedModifier[]={0.28,0.28,0.28};
	};
	class AugShort: Aug_Base
	{
		aimSpeedModifier[]={0.24,0.24,0.24};
	};
	class B95_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.32,0.32,0.32};
	};		
	class SawedoffB95: B95_Base
	{	
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{		
		aimSpeedModifier[]={0.28,0.28,0.28};
	};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{		
		aimSpeedModifier[]={0.35,0.35,0.35};
	};
	class CZ61_Base: Rifle_Base
	{	
		aimSpeedModifier[]={0.17,0.17,0.17};
	};
	class FAL_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.42,0.42,0.42};
	};
	class Famas_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.25,0.25,0.25};
	};
	class SawedoffFAMAS: Famas_Base
	{
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class Izh18_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.28,0.28,0.28};
	};
	class Izh18;
	class SawedoffIzh18: Izh18
	{
		aimSpeedModifier[]={0.18,0.18,0.18};
	};
	class M14_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.39,0.39,0.39};
	};
	class M16A2_Base: Rifle_Base
	{		
		aimSpeedModifier[]={0.32,0.32,0.32};
	};
	class M249_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.5,0.5,0.5};
	};
	class M4A1_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.32,0.32,0.32}; 
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSpeedModifier[]={0.35,0.35,0.35}; 
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{
		aimSpeedModifier[]={0.25,0.25,0.25}; 
	};
	class MP5K_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.2,0.2,0.2};
	};
	class Groza_Base: Rifle_Base
	{	
		aimSpeedModifier[]={0.28,0.28,0.28};
	};
	class PM73Rak_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.2,0.2,0.2};
	};	
	class PP19_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.23,0.23,0.23};
	};
	class Repeater_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.27,0.27,0.27};
	};
	class Ruger1022_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.23,0.23,0.23};
	};
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
		aimSpeedModifier[]={0.32,0.32,0.32};
	};	
	class SKS_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.34,0.34,0.34};
	};	
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		aimSpeedModifier[]={0.33,0.33,0.33};
	};	
	class SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
		aimSpeedModifier[] = {0.37,0.37,0.37};
	};
	class SVD_Base: Rifle_Base
	{
		aimSpeedModifier[] = {0.42,0.42,0.42};
	};
	class Trumpet_Base: Rifle_Base
	{	
		aimSpeedModifier[]={0.23,0.23,0.23};
	};
	class UMP45_Base: Rifle_Base
	{	
		aimSpeedModifier[]={0.26,0.26,0.26};
	};
	class VSS_Base: Rifle_Base
	{
		aimSpeedModifier[]={0.24,0.24,0.24};
	};
	class ASVAL: VSS_Base
	{
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class Vikhr: VSS_Base
	{
		aimSpeedModifier[]={0.26,0.26,0.26};
	};		
};
class cfgVehicles
{
	// For anything attaching to the weapon, the aimSpeedModifier is a multiplier. 
	// For example if the M4A1 has a speed of 0.35 seconds to ADS and we add a buttstock that has a value of 0.8 for the ADS modifier
	// 0.35 x 0.8 = 0.28 Seconds for the M4A1 to ADS with that buttstock.
	// Adjust values to your liking, for any custom modded items, copy the aimSpeedModifier array and paste it into the base class of that item you wish to change.
	class Inventory_Base;
	class ItemOptics;
	class ItemOptics_Base : ItemOptics
	{
		aimSpeedModifier[]={1,1,1};
	};
	class AK_Bayonet: Inventory_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mosin_Bayonet: Inventory_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class SKS_Bayonet: Inventory_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class ItemSuppressor: Inventory_Base
	{
		aimSpeedModifier[] = {1.2,1.2,1.2};
	};
	class M4_OEBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class M4_MPBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class M4_CQBBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.85,0.85,0.85};
	};
	class AK_WoodBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class Red9Bttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class Fal_OeBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.85,0.85,0.85};
	};
	class Saiga_Bttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class PP19_Bttstck: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class M4_RISHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class M4_MPHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class AK74_Hndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class AK_RailHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class M249_Hndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class M249_RisHndgrd: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class GhillieAtt_ColorBase: Inventory_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Groza_LowerReceiver: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class GrozaGL_LowerReceiver: Inventory_Base
	{
		aimSpeedModifier[] = {1,1,1};
	};
};	
class CfgMagazines
{
	class DefaultMagazine;
	// You can even apply ADS Modifiers with Magazines! 
	// For Example: 10 Round C Mag could provide a faster ADS than a 20 Round or 30 Round Magazine!
	class Magazine_Base: DefaultMagazine
	{
		aimSpeedModifier[] = {1,1,1};
	};
	class Mag_FNX45_15Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_Deagle_9rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_1911_7Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_CZ75_15Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_Glock_15Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_P1_8Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_IJ70_8Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_MP5_15Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class Mag_MP5_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	class Mag_PM73_15Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_PM73_25Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
	class Mag_CZ61_20Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class Mag_FAMAS_25Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
	class Mag_MKII_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_Ruger1022_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_Ruger1022_15Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_Ruger1022_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.09,1.09,1.09};
	};
	class Mag_AKM_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.1,1.1,1.1};
	};
	class Mag_AKM_Drum75Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.3,1.3,1.3};
	};
	class Mag_AKM_Palm30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
	class Mag_CZ527_5rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_STANAG_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.1,1.1,1.1};
	};
	class Mag_STANAGCoupled_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.25,1.25,1.25};
	};
	class Mag_STANAG_60Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.25,1.25,1.25};
	};
	class Mag_CMAG_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_CMAG_20Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_CMAG_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.07,1.07,1.07};
	};
	class Mag_CMAG_40Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.11,1.11,1.11};
	};
	class Mag_AK101_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	class Mag_Aug_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.07,1.07,1.07};
	};
	class Mag_AK74_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	class Mag_AK74_45Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.18,1.18,1.18};
	};
	class Mag_SVD_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	class Mag_FAL_20Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	class Mag_Scout_5Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_UMP_25Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_VSS_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_VAL_20Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
	class Mag_Vikhr_30Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.1,1.1,1.1};
	};
	class Mag_PP19_64Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.1,1.1,1.1};
	};
	class Mag_CZ550_4rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_CZ550_10rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
	class Mag_SSG82_5rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.05,1.05,1.05};
	};
	class Mag_Saiga_5Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.03,1.03,1.03};
	};
	class Mag_Saiga_8Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
	class Mag_Saiga_Drum20Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.25,1.25,1.25};
	};
	class Mag_M14_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class Mag_M14_20Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	class Mag_SV98_10Rnd : Magazine_Base
	{
		aimSpeedModifier[] = {1.06,1.06,1.06};
	};
};	