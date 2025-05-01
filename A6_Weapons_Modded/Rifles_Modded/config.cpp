class CfgPatches
{
	class A6_Rifles_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_Rifles_Modded
	{
		dir="A6_Rifles_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Rifles_Modded";
		credits="FutureSixx";
		author="FutureSixx";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class A6_ACR_Base;
	class A6_ACR: A6_ACR_Base
	{
		modes[] = {"SemiAuto","FullAuto"}; // Reverse the SemiAuto and FullAuto here, so guns spawns in Full Auto EX: modes[] = {"FullAuto","SemiAuto"};
		chamberableFrom[]={"Ammo_A6_68SPC"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,1.5};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[]={8,3};
	};	
	class A6_AK74_Base;
	class A6_AK74: A6_AK74_Base
	{
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AK74N: A6_AK74
	{	
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AK105: A6_AK74
	{
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		recoilModifier[] = {1.15,1.15,1.15};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AKM_Base;
	class A6_AKM: A6_AKM_Base
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.36,0.36,0.36};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AKMN: A6_AKM
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.36,0.36,0.36};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AK104: A6_AKM
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {1.95,1.95,1};
		aimSpeedModifier[]={0.32,0.32,0.32};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AK101_Base;
	class A6_AK101: A6_AK101_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AK102: A6_AK101
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.15,1.15,1.15};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AK50_Base;
	class A6_AK50: A6_AK50_Base
	{
		chamberableFrom[]={"Ammo_A6_50Beo"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.8,1.5,1.2};
		aimSpeedModifier[]={0.48,0.48,0.48};
		itemSize[]={8,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_AN94_Base;
	class A6_AN94: A6_AN94_Base
	{
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {1.7,1.7,0.7};
		aimSpeedModifier[]={0.34,0.34,0.34};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};	
	class A6_AR10_Base;
	class A6_AR10: A6_AR10_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.3,2.3,1.3};
		aimSpeedModifier[]={0.43,0.43,0.43};
		itemSize[]={9,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_AR15_Base;
	class A6_AR15_Carbine: A6_AR15_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[]={7,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_AR15_Standard: A6_AR15_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_ASH12_Base;
	class A6_ASH12: A6_ASH12_Base
	{
		chamberableFrom[]={"Ammo_A6_127x55"};
		recoilModifier[] = {1,1,1};
		swayModifier[]={2,1.7,1.3};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_ASVAL_Base;
	class A6_ASVAL: A6_ASVAL_Base
	{
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_Aug_Base;
	class A6_AugA1: A6_Aug_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.28,0.28,0.28};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};	
	class A6_AugA3: A6_Aug_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.24,0.24,0.24};
		itemSize[] = {7,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};	
	class A6_Beowulf_Base;
	class A6_Beowulf: A6_Beowulf_Base
	{
		chamberableFrom[]={"Ammo_A6_50Beo"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.48,0.48,0.48};
		itemSize[]={8,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_CAR15_Base;
	class A6_CAR15: A6_CAR15_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_FAL_Base;
	class A6_FAL: A6_FAL_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.8,2.8,1.8};
		aimSpeedModifier[]={0.44,0.44,0.44};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_FamasF1_Base;
	class A6_FamasF1: A6_FamasF1_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.2,0.2,0.2};
		itemSize[] = {6,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};	
	class A6_G36_Base;
	class A6_G36C: A6_G36_Base
	{
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.75,1.75,1};
		aimSpeedModifier[]={0.27,0.27,0.27};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
	class A6_G36K: A6_G36_Base
	{
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.85,1.85,1.05};
		aimSpeedModifier[]={0.32,0.32,0.32};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
	class A6_G36: A6_G36_Base
	{
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.4,0.4,0.4};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
	class A6_HK416_Base;
	class A6_HK416_Carbine_Base : A6_HK416_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.29,0.29,0.29};
		itemSize[] = {7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_HK416_Standard_Base: A6_HK416_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.33,0.33,0.33};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_HKG28_Base;
	class A6_HKG28: A6_HKG28_Base
	{
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.4,1.4,1.4};
		swayModifier[] = {2.4,2.4,1.4};
		aimSpeedModifier[]={0.4,0.4,0.4};
		itemSize[] = {9,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_HK417: A6_HKG28_Base
	{
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.4,1.4,1.4};
		swayModifier[] = {2.4,2.4,1.4};
		aimSpeedModifier[]={0.4,0.4,0.4};
		itemSize[] = {9,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_M110_Base;
	class A6_M110: A6_M110_Base
	{	
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.4,0.4,0.4};
		itemSize[]={9,3};
		modes[] = {"SemiAuto"};	
	};	
	class A6_M16_Base;
	class A6_M16: A6_M16_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.7,2.7,1.3};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[] = {9,3};
		modes[] = {"SemiAuto","Burst"};
	};	
	class A6_M4A1_Base;
	class A6_M4A1_Carbine: A6_M4A1_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.32,0.32,0.32};
		itemSize[] = {7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_M4A1_Standard: A6_M4A1_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_MCX_Spear_Base;
	class A6_MCX_Spear: A6_MCX_Spear_Base
	{
		chamberableFrom[]={"Ammo_A6_277FURY"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.9,1.9,1.3};
		aimSpeedModifier[]={0.39,0.39,0.39};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_MK12_Base;
	class A6_MK12: A6_MK12_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {0.6,0.6,0.6}; 
		swayModifier[] = {1,1,0.6};
		aimSpeedModifier[]={0.37,0.37,0.37};
		itemSize[]={9,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_MK14_Base;
	class A6_MK14: A6_MK14_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.9,1.9,1.1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[]={8,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_MK18_Base;
	class A6_MK18: A6_MK18_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.28,0.28,0.28};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_DDM4_300S_Base;
	class A6_DDM4_300S: A6_DDM4_300S_Base
	{
		chamberableFrom[]={"Ammo_A6_300"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.28,0.28,0.28};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_OPSKS_Base;
	class A6_OPSKS: A6_OPSKS_Base
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {2.4,2.4,1.3};
		aimSpeedModifier[]={0.33,0.33,0.33};
		itemSize[] = {9,3};
		modes[] = {"SemiAuto"};
	};
	class A6_RSASS_Base;
	class A6_RSASS: A6_RSASS_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.3,2.3,1.4};
		aimSpeedModifier[]={0.39,0.39,0.39};
		itemSize[]={9,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_SA58_Base;
	class A6_SA58: A6_SA58_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.35,0.35,0.35};
		itemSize[] = {7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_SCARL_Base;
	class A6_SCARL: A6_SCARL_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.32,0.32,0.32};
		itemSize[]={7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_SCARH_Base;
	class A6_SCARH: A6_SCARH_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {2.1,1.9,1.2};
		aimSpeedModifier[]={0.39,0.39,0.39};
		itemSize[]={8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_SCAR20S_Base;
	class A6_SCAR20S: A6_SCAR20S_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.6,2.5,1.8};
		aimSpeedModifier[]={0.42,0.42,0.42};
		itemSize[]={9,3};
		modes[] = {"SemiAuto"};
	};
	class A6_VSS_Base;
	class A6_VSS: A6_VSS_Base
	{	
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.24,0.24,0.24};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_XM8_100Rnd: Magazine_Base
	{
		itemSize[]={3,2};
		recoilModifier[]={0.75,0.75,0.75};
		aimSpeedModifier[] = {1.43,1.43,1.43};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};	
	class A6_Mag_HKG28_20Rnd: Magazine_Base
 	{
 		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_HK_PMG2_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.03,1.03,1.03};
		recoilModifier[]={0.92,0.92,0.92};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_OPSKS_20Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class A6_Mag_Famas_25Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_VSS_10Rnd: Magazine_Base
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class A6_Mag_VAL_20Rnd: Magazine_Base
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class A6_Mag_Vikhr_30Rnd: Magazine_Base
	{
		itemSize[] = {1,3};
		aimSpeedModifier[]={1.2,1.2,1.2};
		recoilModifier[]={0.87,0.87,0.87};
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class A6_Mag_SR3_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.15,1.15,1.15};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class A6_Mag_SR3_Red_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.15,1.15,1.15};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class A6_Mag_Aug_30Rnd: Magazine_Base 
	{
		itemSize[] = {1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_Aug_Black_30Rnd: Magazine_Base 
	{
		itemSize[] = {1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_FAL_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_FAL_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.15,1.15,1.15};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_FAL_50Rnd: Magazine_Base 
	{
		itemSize[]={2,2};
		recoilModifier[]={0.8,0.8,0.8};
		aimSpeedModifier[] = {1.4,1.4,1.4};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_ASH12_10Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]= {"Ammo_A6_127x55"};
	};
	class A6_Mag_ASH12_20Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.2,1.2,1.2};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]= {"Ammo_A6_127x55"};
	};
	class A6_Mag_Beowulf_10Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_50Beo"};
	};
	class A6_Mag_300BLK_PMAG_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.03,1.03,1.03};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[]={"Ammo_A6_300"};
	};
	class A6_Mag_300BLK_PMAG_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_300"};
	};
	class A6_Mag_300BLK_PMAG_60Rnd: Magazine_Base
	{
		itemSize[]={2,3};
		recoilModifier[]={0.8,0.8,0.8};
		aimSpeedModifier[] = {1.32,1.32,1.32};
		ammoItems[]={"Ammo_A6_300"};
	};
	class A6_Mag_556_PMAG_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1,1,1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_556_PMAG_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_556_PMAG_60Rnd: Magazine_Base
	{
		itemSize[]={2,3};
		recoilModifier[]={0.8,0.8,0.8};
		aimSpeedModifier[] = {1.32,1.32,1.32};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_308_Stanag_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_308_PMAG_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_SCARH_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_SCARH_Tan_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_68_SPC_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_68SPC"};
	};
	class A6_Mag_MCX_Spear_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_277FURY"};
	};
	class A6_Mag_AK101_30Rnd: Magazine_Base
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_AK74_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
	class A6_Mag_AK74_Orange_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
	class A6_Mag_AK74_60Rnd: Magazine_Base
 	{
		itemSize[]={1,3};
		recoilModifier[]={0.85,0.85,0.85};
		aimSpeedModifier[] = {1.32,1.32,1.32};
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};	
	class A6_Mag_AKM_Poly_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.08,1.08,1.08};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class A6_Mag_AKM_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class A6_Mag_AKM_PMAG_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.06,1.06,1.06};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class A6_Mag_Stanag_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.07,1.07,1.07};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_Stanag_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_Stanag_60Rnd: Magazine_Base
	{
		itemSize[] = {2,3};
		aimSpeedModifier[] = {1.38,1.38,1.38};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class A6_Mag_AK74_45Rnd: Magazine_Base 
	{
		itemSize[]={1,4};
		aimSpeedModifier[]={1.25,1.25,1.25};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
	class A6_Mag_AK74_Orange_45Rnd: Magazine_Base 
	{
		itemSize[]={1,4};
		aimSpeedModifier[]={1.25,1.25,1.25};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
};	
