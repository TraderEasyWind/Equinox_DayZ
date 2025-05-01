class CfgPatches
{
	class A6_Attachments_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_Attachments_Modded
	{
		dir="A6_Attachments_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Attachments_Modded";
		credits="FutureSixx";
		author="FutureSixx";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
    // EDIT ALL YOUR VALUES HERE IN THE CLASSES.

	// Bayonets
    class A6_M4_Bayonet: Inventory_Base
	{
		itemSize[] = {1,3};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_AK_Bayonet: Inventory_Base
	{
		itemSize[] = {1,3};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_SKS_Bayonet: Inventory_Base
	{
		itemSize[] = {1,3};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	// Bipods
	class A6_Bipod_Base: Inventory_Base
	{
		itemSize[] = {1,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
	};
	class A6_Bipod_RIS_Black: A6_Bipod_Base
	{
		itemSize[] = {1,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_Bipod_RIS_Tan: A6_Bipod_Base
	{
		itemSize[] = {1,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_Bipod_Rotator: A6_Bipod_Base
	{
		itemSize[] = {1,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	//TubeStocks
	class A6_SVD_TubeStock_Adapter: Inventory_Base
	{
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {0.75,0.75,0.75};
	};
	class A6_AK_TubeStock_Adapter: Inventory_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
	};	
	class A6_ASVAL_TubeStock_Adapter: Inventory_Base
	{
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};	
	};
	class A6_Vector_TubeStock_Adapter: Inventory_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
	};
	class A6_SCAR_TubeStock_Adapter: Inventory_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
	};
	// AK Buttstocks
	class A6_AK_Buttstock: Inventory_Base 
	{
		itemSize[] = {2,1};
	};
	class A6_AK_Plastic_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.94,0.94,0.94};	
	};
	class A6_AKM_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.96,0.96,0.96};
	};
	class A6_AKMS_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.82,0.82,0.82};
	};
	class A6_AKS74U_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.87,0.87,0.87};
	};	
	class A6_RPK_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1.07,1.07,1.07};
	};	
	class A6_Zhukov_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.82,0.82,0.82};
	};	
	class A6_PT1_Buttstock: A6_AK_Buttstock
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.91,0.91,0.91};	
	};	
	// M4 Buttstocks
	class A6_M4_Buttstock: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_M4OE_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.97,0.97,0.97};
	};
	class A6_CAR15_OE_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.93,0.93,0.93};
	};	
	class A6_MFT_Min_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.82,0.82,0.82};
	};
	class A6_CAR15_Wire_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.73,0.73,0.73};
	};
	class A6_Carbine_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.91,0.91,0.91};
	};
	class A6_M110_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.98,0.98,0.98};
	};
	class A6_HKG28_Buttstock_Black: A6_M4_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class A6_HK_E1_Buttstock_Black: A6_M4_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.97,0.97,0.97};
	};
	class A6_HK_Slim_Buttstock_Black: A6_M4_Buttstock
	{
		recoilModifier[] = {0.73,0.73,0.73};
		swayModifier[] = {0.79,0.79,0.79};
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};
	class A6_MFT_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.97,0.97,0.97};
	};
	class A6_B5Bravo_Buttstock_Black: A6_M4_Buttstock
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.94,0.94,0.94};
	};
	class A6_BCM_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.85,0.85,0.85};
	};
	class A6_DS150_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.79,0.79,0.79};
		aimSpeedModifier[] = {0.9,0.9,0.9};
	};	
	class A6_MOESLK_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.72,0.72,0.72};
		swayModifier[] = {0.87,0.87,0.87};
		aimSpeedModifier[] = {0.83,0.83,0.83};
	};	
	class A6_DD_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.91,0.91,0.91};
	};
	class A6_PRS_Buttstock: A6_M4_Buttstock
	{
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.07,1.07,1.07};
	};
	// Vector Buttstocks
	class A6_Vector_Buttstock: Inventory_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.94,0.94,0.94};
	};	
	// Scorpion Buttstocks
	class A6_Scorpion_Evo_Buttstock: Inventory_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.94,0.94,0.94};
	};
	class A6_Scorpion_Evo_Tactical_Buttstock: Inventory_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {0.83,0.83,0.83};
	};	
	// UMP Buttstocks
	class A6_UMP45_Buttstock: Inventory_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.93,0.93,0.93};
	};
	// HK G36 Buttstocks
	class A6_G36_Buttstock_Base;
	class A6_G36_Buttstock: A6_G36_Buttstock_Base
	{
		recoilModifier[] = {0.82,0.82,0.82};
		swayModifier[] = {0.74,0.74,0.74};
		aimSpeedModifier[] = {0.82,0.82,0.82};
	};	
	class A6_G36_Buttstock_KV: A6_G36_Buttstock_Base
	{
		recoilModifier[] = {0.67,0.67,0.67};
		swayModifier[] = {0.61,0.61,0.61};
		aimSpeedModifier[] = {0.93,0.93,0.93};
	};			
	// FAL Buttstocks
	class A6_FAL_Buttstock: Inventory_Base
	{
		itemSize[] = {2,1};
	};	
	class A6_FAL_Wood_Buttstock: A6_FAL_Buttstock
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};	
	class A6_FAL_Plastic_Buttstock: A6_FAL_Buttstock
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.91,0.91,0.91};
	};	
	class A6_FAL_Folding_Buttstock: A6_FAL_Buttstock
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.82,0.82,0.82};
	};	
	class A6_SA58_BRS_Buttstock: A6_FAL_Buttstock
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.84,0.84,0.84};
	};	
	class A6_SA58_SPR_Buttstock: A6_FAL_Buttstock
	{
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.08,1.08,1.08};
	};
	// Spas 12 Buttstocks
	class A6_Spas12_Buttstock: Inventory_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.93,0.93,0.93};	
	};
	// Mossberg Buttstocks
	class A6_Mossberg_Buttstock_Base: Inventory_Base
	{
		itemSize[] = {3,1};
	};
	class A6_Mossberg_Buttstock_Wood: A6_Mossberg_Buttstock_Base
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {1.25,1.25,1.25};
	};
	class A6_Mossberg_Buttstock_Plastic: A6_Mossberg_Buttstock_Base
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.55,0.55,0.55};
		aimSpeedModifier[] = {1.16,1.16,1.16};
	};
	class A6_Mossberg_Buttstock_Plastic_2: A6_Mossberg_Buttstock_Base
	{
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.12,1.12,1.12};
	};
	class A6_Mossberg_Buttstock_Pistolgrip: A6_Mossberg_Buttstock_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.84,0.84,0.84};
		itemSize[] = {1,1};
	};
	class A6_Mossberg_Buttstock_Handle_Plastic: A6_Mossberg_Buttstock_Base
	{
		itemSize[] = {1,1};
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[] = {0.72,0.72,0.72};	
	};
	// MP5 Buttstocks
	class A6_MP5_Buttstock_Base: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_MP5_Buttstock: A6_MP5_Buttstock_Base
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.93,0.93,0.93};
	};	
	class A6_MP5_Buttstock_Wood: A6_MP5_Buttstock_Base
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.96,0.96,0.96};
	};	
	class A6_MP5_Buttstock_Folding: A6_MP5_Buttstock_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.89,0.89,0.89};
	};	
	class A6_MP5_Buttstock_Retractable: A6_MP5_Buttstock_Base
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.83,0.83,0.83};	
	};	
	// Scar Buttstocks
	class A6_SCAR_Buttstock_Base: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_SCAR_16S17S_Buttstock_Black: A6_SCAR_Buttstock_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.92,0.92,0.92};
	};
	class A6_SCAR_SSR_Buttstock_Black: A6_SCAR_Buttstock_Base
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.82,0.82,0.82};
	};
	// Flashlights
	class A6_SureFire_M951V_Light : Switchable_Base
	{
		itemSize[]={2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.03,1.03,1.03};
	};
	class A6_Klesh_Light : Switchable_Base
	{	
		itemSize[]={2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};	
	class A6_Foxtrot_PistolLight : Switchable_Base
	{
		itemSize[]={1,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.03,1.03,1.03};
	};
	//Lasers
	class A6_ANPEQ15_Base: Switchable_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};	
	class A6_NcSTAR_Base: Switchable_Base
	{
		itemSize[] = {1,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};	
	class A6_PERST_Base: Switchable_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};	
	// Foregrips
	class A6_ForeGrip_Base;
	class A6_AFG_Grip_Black: A6_ForeGrip_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.96,0.96,0.96};
	};	
	class A6_FSG2_Grip_Black: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class A6_BCMGFVG_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1,1,1};
		itemSize[] = {1,1};	
	};	
	class A6_StrikeCobra_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.87,0.87,0.87};
	};
    class A6_StarkSE5_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.81,0.81,0.81};
		swayModifier[] = {0.66,0.66,0.66};
		aimSpeedModifier[] = {0.89,0.89,0.89};
	};	
	class A6_RK0_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.95,0.95,0.95};
		itemSize[] = {1,1};
	};
    class A6_Fortis_Shift_Short_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.9,0.9,0.9};
		itemSize[] = {1,1};
	};
    class A6_Fortis_Shift_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.68,0.68,0.68};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.92,0.92,0.92};
	};
	class A6_B25U_RK2_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.91,0.91,0.91};
		itemSize[] = {1,1};
	};
	class A6_RK6_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		itemSize[] = {1,1};
	};
	class A6_TroyMini_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		itemSize[] = {1,1};
	};
    class A6_TangoDown_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1,1,1};
		itemSize[] = {1,1};
	};
	class A6_RK2_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		itemSize[] = {1,2};
	};
	class A6_Troy_Grip: A6_ForeGrip_Base
	{
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.08,1.08,1.08};
		itemSize[] = {1,2};
	};
	// HK Handguards
	class A6_HKG28_Handguard_Base: Inventory_Base 
	{
		itemSize[] = {4,1};
	};
	class A6_HKG28_Handguard_Quad_Rail: A6_HKG28_Handguard_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
	};
	class A6_HKG28_Handguard_Extended_Quad_Rail: A6_HKG28_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_HK_Handguard_Base: Inventory_Base 
	{
		itemSize[] = {4,1};
	};
	class A6_HK_Handguard_MI_9_Black: A6_HK_Handguard_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
	};
	class A6_HK_Handguard_MI_135_Black: A6_HK_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_HK_Handguard_Quad_Rail_Black: A6_HK_Handguard_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
	};
	class A6_HK_Handguard_Extended_Quad_Rail_Black: A6_HK_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	// M16 Handguards
	class A6_M16_Handguard_Base: Inventory_Base 
	{
		itemSize[] = {4,1};
	};
	class A6_M16_A2_Handguard: A6_M16_Handguard_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.98,0.98,0.98};
	};
	class A6_M16_A3_Handguard: A6_M16_Handguard_Base
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_M16_A4_Handguard: A6_M16_Handguard_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={1,1,1};
	};
	// FAL Handguards
	class A6_FAL_Handguard_Base: Inventory_Base 
	{
		itemSize[] = {3,1};
	};
	class A6_FAL_Handguard_Wood: A6_FAL_Handguard_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.98,0.98,0.98};
	};
	class A6_FAL_Handguard_Plastic: A6_FAL_Handguard_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_FAL_Handguard_Rail: A6_FAL_Handguard_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[]={1,1,1};
	};
	// MP5 Handguards
	class A6_MP5k_Forearm_Base;
	class A6_MP5k_Forearm: A6_MP5k_Forearm_Base
	{
		itemSize[] = {1,2};
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_MP5k_Forearm_Proto: A6_MP5k_Forearm_Base
	{
		itemSize[] = {1,2};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_MP5k_Forearm_SP: A6_MP5k_Forearm_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.8,0.8,0.8};
	};
	class A6_MP5_Forearm_Base;
	class A6_MP5_Forearm: A6_MP5_Forearm_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_MP5_Forearm_RIS: A6_MP5_Forearm_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={1,1,1};
	};
	class A6_MP5_Forearm_Slimline: A6_MP5_Forearm_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.9,0.9,0.9};
	};
	class A6_MP5_Forearm_Vented: A6_MP5_Forearm_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[]={0.9,0.9,0.9};
	};
	class A6_MP5_Forearm_Wood: A6_MP5_Forearm_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	// Mossberg Handguards
	class A6_Mossberg_Shroud_Base: Inventory_Base
	{
		itemSize[] = {3,1};
	};
	class A6_Mossberg_Shroud: A6_Mossberg_Shroud_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={1.05,1.05,1.05};
		itemSize[] = {4,1};
	};
	class A6_Mossberg_Forearm_Base: Inventory_Base
	{
		itemSize[] = {3,1};
	};
	class A6_Mossberg_Forearm_Plastic: A6_Mossberg_Forearm_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_Mossberg_Forearm_Plastic_2: A6_Mossberg_Forearm_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.9,0.9,0.9};
	};
	class A6_MP153_Forearm_Base: Inventory_Base
	{
		itemSize[] = {3,1};
	};
	class A6_MP153_Forearm_Plastic: A6_MP153_Forearm_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.9,0.9,0.9};
	};
	// AK Handguards
	class A6_AK_Handguard_Base;
	class A6_AK_Handguard_Plastic: A6_AK_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[]={0.98,0.98,0.98};
	};
	class A6_AK_Handguard_AKM: A6_AK_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.97,0.97,0.97};
	};
	class A6_AK_Handguard_RPK: A6_AK_Handguard_Base
	{
		itemSize[] = {2,2};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={1.1,1.1,1.1};
	};
	class A6_AK_Handguard_MOE: A6_AK_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[]={0.95,0.95,0.95};
	};
	class A6_AK_Handguard_Tactical_Polymer_Base: A6_AK_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={1,1,1};
	};
	class A6_AK_Handguard_Wood_Zentico: A6_AK_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.98,0.98,0.98};
	};
	class A6_AK_Handguard_Zentico: A6_AK_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {1,1,1};
	};
	class A6_AK_Handguard_Zentico_Long_Base: A6_AK_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.07,1.07,1.07};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};
	// M4 Handguards
	class A6_M4A1_Handguard_Base;
	class A6_M4A1_Handguard_Plastic: A6_M4A1_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.98,0.98,0.98};
	};
	class A6_M4A1_Handguard_MP: A6_M4A1_Handguard_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.95,0.95,0.95};
	};
	class A6_M4A1_Handguard_KAC_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {1,1,1};
	};
	class A6_M4A1_Handguard_DD95_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
	};
	class A6_M4A1_Handguard_DD125_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_M4A1_Handguard_DDFSP_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_M4A1_Handguard_DD95_MLOK_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
	};
	class A6_M4A1_Handguard_DD125_MLOK_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_M4A1_Handguard_DDFSP_MLOK_Base: A6_M4A1_Handguard_Base
	{
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	// ASVAL Handguard
	class A6_ASVAL_Handguard: Inventory_Base
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {1,1,1};
	};	
	// Muzzles
	class ItemSuppressor;
	class A6_FAL_Muzzle_Base;
	class A6_FAL_Muzzle: A6_FAL_Muzzle_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.07,1.07,1.07};
	};
	class A6_FAL_Muzzle_2: A6_FAL_Muzzle_Base
	{
		itemSize[] = {2,1};
		recoilModifier[] = {0.89,0.89,0.89};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};
	class A6_SKS_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};	
	class A6_SKS_Muzzle: A6_SKS_Muzzle_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};
	class A6_AK_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};	
	class A6_AKM_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};	
	class A6_AK74_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.03,1.03,1.03};
	};	
	class A6_PP19Bizon_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};
	class A6_AKS74u_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};	
	class A6_RPK_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};
	class A6_PP19_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.94,0.94,0.94};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};
	class A6_AK203_Muzzle: A6_AK_Muzzle_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.06,1.06,1.06};
	};
	class A6_M4A1_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};
	class A6_M4A1_A2_FlashHider: A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};
	class A6_M16_FlashHider: A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};	
	class A6_CAR15_FlashHider: A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};
	class A6_G36_FlashHider: A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};	
	class A6_M4A1_Surefire_FlashHider: A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.89,0.89,0.89};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};
	class A6_M4A1_KAW_Compensator : A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.87,0.87,0.87};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};
	class A6_M4A1_AEMB_Muzzle : A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};
	class A6_M4A1_MK18_Muzzle : A6_M4A1_Muzzle_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.08,1.08,1.08};
		itemSize[] = {2,1};
	};
	class A6_308_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};
	class A6_HKG28_Prolonged_Flash_Hider: A6_308_Muzzle_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};
	class A6_TBA_30CB_Muzzle: A6_308_Muzzle_Base
	{
		recoilModifier[] = {0.88,0.88,0.88};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};	
	class A6_AWR_Muzzle: A6_308_Muzzle_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};
	class A6_SureFire762_Muzzle: A6_308_Muzzle_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.03,1.03,1.03};
	};
	class A6_338_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};
	class A6_AX_Muzzle: A6_338_Muzzle_Base
	{
		recoilModifier[] = {0.87,0.87,0.87};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.07,1.07,1.07};
	};	
	class A6_SRSQD_Muzzle: A6_338_Muzzle_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};	
	class A6_ELR_Muzzle: A6_338_Muzzle_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
	};
	class A6_Tank_Muzzle: A6_338_Muzzle_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.1,1.1,1.1};
	};	
	class A6_408_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};
	class A6_CheyTac_Muzzle: A6_408_Muzzle_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1,1,1};
	};	
	class A6_Shotgun_Muzzle_Base: ItemSuppressor
	{
		itemSize[] = {1,1};
	};
	class A6_Salvo12_Muzzle: A6_Shotgun_Muzzle_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
	};
	// Optic Mounts
	class A6_Optic_Mount_M16: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_Optic_Mount_FAL: Inventory_Base
	{
		itemSize[] = {3,1};
	};
	class A6_Optic_Mount_SKS: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_Optic_Mount_MP5: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_Mossberg_OpticMount_Base: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class A6_Mossberg_OpticMount: A6_Mossberg_OpticMount_Base
	{
		itemSize[] = {1,1};
	};
	class A6_Mossberg_Shroud_Rail: A6_Mossberg_OpticMount_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		itemSize[] = {5,2};
	};
	class A6_Optic_Mount9A91: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_Optic_MountSVD: Inventory_Base
	{
		itemSize[] = {2,2};
	};
	class A6_Optic_MountAK: Inventory_Base
	{
		itemSize[] = {2,1};
	};
	class A6_AK_Dustcover_Optic_Mount: Inventory_Base
	{
		itemSize[] = {3,1};
	};	
	// Pistol Grips
		class A6_FAL_PistolGrip_Base: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class A6_FAL_PistolGrip_M249SAW: A6_FAL_PistolGrip_Base
	{
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.92,0.92,0.92};
	};
	class A6_FAL_PistolGrip_Fab_Defense: A6_FAL_PistolGrip_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.81,0.81,0.81};
	};
	class A6_Scorpion_Evo_PistolGrip_Base: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class A6_Scorpion_Evo_PistolGrip: A6_Scorpion_Evo_PistolGrip_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.78,0.78,0.78};
	};
	class A6_M4A1_PistolGrip_Base: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class A6_M4A1_PistolGrip_Hogue: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.92,0.92,0.92};
	};
	class A6_M4A1_PistolGrip_Gevar: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {0.97,0.97,0.97};
		swayModifier[] = {0.97,0.97,0.97};
		aimSpeedModifier[]={0.87,0.87,0.87};
	};
	class A6_M4A1_PistolGrip_MOE: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {0.96,0.96,0.96};
		swayModifier[] = {0.96,0.96,0.96};
		aimSpeedModifier[]={0.83,0.83,0.83};
	};
	class A6_M4A1_PistolGrip_DD: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.81,0.81,0.81};
	};
	class A6_M4A1_PistolGrip_Skeleton: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {1.06,1.06,1.06};
		swayModifier[] = {1.09,1.09,1.09};
		aimSpeedModifier[]={0.72,0.72,0.72};
	};
	class A6_M4A1_PistolGrip_Ergo: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[]={1.04,1.04,1.04};
	};
	class A6_HK_PistolGrip_BG_Black: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {0.94,0.94,0.94};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.87,0.87,0.87};
	};
	class A6_HK_PistolGrip_BGB_Black: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {0.92,0.92,0.92};
		swayModifier[] = {0.93,0.93,0.93};
		aimSpeedModifier[]={0.87,0.87,0.87};
	};
    class A6_M4A1_PistolGrip_F1: A6_M4A1_PistolGrip_Base
	{
		recoilModifier[] = {1.06,1.06,1.06};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.72,0.72,0.72};
    };    
	class A6_AK_PistolGrip_Base: Inventory_Base
	{
		itemSize[] = {1,1};
	};
	class A6_AK_PistolGripWood: A6_AK_PistolGrip_Base
	{
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.96,0.96,0.96};
	};
	class A6_AK_Bakelite_PistolGrip: A6_AK_PistolGrip_Base
	{
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.93,0.93,0.93};
	};
	class A6_AK_PP19_PistolGrip: A6_AK_PistolGrip_Base
	{
		recoilModifier[] = {0.98,0.98,0.98};
		swayModifier[] = {0.98,0.98,0.98};
		aimSpeedModifier[]={0.88,0.88,0.88};
	};
	class A6_AK_MOE_PistolGrip: A6_AK_PistolGrip_Base
	{
		recoilModifier[] = {0.96,0.96,0.96};
		swayModifier[] = {0.96,0.96,0.96};
		aimSpeedModifier[]={0.84,0.84,0.84};
	};
	class A6_AK_Zenitco_RK3_PistolGrip: A6_AK_PistolGrip_Base
	{
		recoilModifier[] = {0.97,0.97,0.97};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.76,0.76,0.76};
	};			
	class A6_AK_12_PistolGrip: A6_AK_PistolGrip_Base
	{
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.82,0.82,0.82};
	};
	class A6_Gemtech_Tundra_Suppressor: ItemSuppressor
	{
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.2,1.2,1.2};
	};
	class A6_AK_PSB1_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
	};
	class A6_UniversalSuppressor_Base: ItemSuppressor
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
	};
	class A6_Hybrid_46_Suppressor: A6_UniversalSuppressor_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
	};
	class A6_Chimera_300_Suppressor: A6_UniversalSuppressor_Base
	{	
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {3,1};
	};
	class A6_Omega_300_Suppressor: A6_UniversalSuppressor_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
	};
	class A6_Jumbo_Shrimp_Suppressor: A6_UniversalSuppressor_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
	};
	class A6_TBA_Ultra5_Suppressor: A6_UniversalSuppressor_Base
	{
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.13,1.13,1.13};
	};	
	class A6_AWC_Thor_Suppressor: A6_UniversalSuppressor_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
	};
	class A6_HXQD_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[]={4,1};
	};
	class A6_AI_338_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[]={4,1};
	};		
	class A6_Windtalker_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.25,1.25,1.25};
		itemSize[]={4,1};
	};
	class A6_QDL_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.35,1.35,1.35};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[]={5,1};
	};
	class A6_OspreySuppressor: ItemSuppressor
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {3,1};
	};
	class A6_MP7A2Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.1,1.1,1.1};
		itemSize[]={3,1};
	};
	class A6_9A91_Suppressor: ItemSuppressor 
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.25,1.25,1.25};
		itemSize[] = {4,1};
	};
	class A6_HoneyBadger_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {3,1};
	};
	class A6_SLX68_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {3,1};
	};
	class A6_Salvo12_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[] = {3,1};
	};
	class A6_DeadAirMask22_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {2,1};
	};
	class A6_ASH12_Suppressor: ItemSuppressor
	{
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[]={3,1};
	};
};
