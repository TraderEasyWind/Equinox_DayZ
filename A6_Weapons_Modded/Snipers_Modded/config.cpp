class CfgPatches
{
	class A6_Snipers_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_Snipers_Modded
	{
		dir="A6_Snipers_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Snipers_Modded";
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
	// resize as you please, everything here is resized to feel more like tarkov already
	// Add other ammo compatibilities, also.  
	class Rifle_Base;
	class A6_Alligator_Snipex_Base;
	class A6_Alligator_Snipex: A6_Alligator_Snipex_Base
	{	
		chamberableFrom[]={"Ammo_A6_145x114"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {3.1,3.1,2.1};
		aimSpeedModifier[] = {0.7,0.7,0.7};
		itemSize[] = {15,4};
		modes[] = {"Single"};
	};	
	class A6_AR50A1_Base;
	class A6_AR50A1: A6_AR50A1_Base
	{	
		chamberableFrom[]={"Ammo_A6_127x99"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.6,0.6,0.6};
		itemSize[] = {12,3};
		modes[] = {"Single"};
	};		
	class A6_AS50_Base;
	class A6_AS50: A6_AS50_Base
	{
		chamberableFrom[]={"Ammo_A6_127x99"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.6,0.6,0.6};
		itemSize[]={12,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_AWM_Base;
	class A6_AWM: A6_AWM_Base
	{
		chamberableFrom[]={"Ammo_A6_338"};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.5,0.5,0.5};
		itemSize[] = {10,3};
		modes[] = {"Single"};
	};	
	class A6_AX_Base;	
	class A6_AX: A6_AX_Base
	{
		chamberableFrom[]={"Ammo_A6_338"};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.0,2.0,1.0};
		aimSpeedModifier[] = {0.5,0.5,0.5};
		itemSize[] = {9,3};
		modes[] = {"Single"};
	};
	class A6_AX50_Base;
	class A6_AX50: A6_AX50_Base
	{
		chamberableFrom[]={"Ammo_A6_127x99"};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.55,0.55,0.55};
		itemSize[]={10,3};
		modes[] = {"Single"};
	};	
	class A6_Delta5_Base;
	class A6_Delta5: A6_Delta5_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[] = {0.33,0.33,0.33};
		itemSize[] = {9,3};
		modes[] = {"Single"};
	};	
	class A6_DVL10_Base;
	class A6_DVL10: A6_DVL10_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[] = {0.37,0.37,0.37};
		itemSize[] = {8,3};
		modes[] = {"Single"};
	};	
	class A6_GM6Lynx_Base;
	class A6_GM6Lynx: A6_GM6Lynx_Base
	{
		chamberableFrom[]={"Ammo_A6_127x99"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.52,0.52,0.52};
		itemSize[]={9,3};
		modes[] = {"SemiAuto"};
	};
	class A6_M200_Base;
	class A6_M200: A6_M200_Base
	{
		chamberableFrom[]={"Ammo_A6_408"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.56,0.56,0.56};
		itemSize[] = {10,3};
		modes[] = {"Single"};
	};	
	class A6_M24_Base;
	class A6_M24: A6_M24_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.3,0.3,0.3};
		itemSize[] = {9,2};
		modes[] = {"Single"};
	};
	class A6_M24A3_Base;
	class A6_M24A3: A6_M24A3_Base
	{	
		chamberableFrom[]={"Ammo_A6_338"};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.32,0.32,0.32};
		itemSize[] = {9,2};
		modes[] = {"Single"};
	};	
	class A6_M300_Base;
	class A6_M300: A6_M300_Base
	{
		chamberableFrom[]={"Ammo_A6_408"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.0,2.0,1.0};
		aimSpeedModifier[] = {0.5,0.5,0.5};
		itemSize[]={10,3};
		modes[] = {"Single"};
	};	
	class A6_M82_Base;
	class A6_M82: A6_M82_Base
	{
		chamberableFrom[]={"Ammo_A6_127x99"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.8,2.8,1.8};
		aimSpeedModifier[] = {0.6,0.6,0.6};
		itemSize[] = {12,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_MK18_Mjolnir_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_A6_338"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.4,2.4,1.4};
		aimSpeedModifier[] = {0.53,0.53,0.53};
		itemSize[] = {10,3};
		modes[] = {"SemiAuto"};
	};		
	class A6_R700_Base;
	class A6_R700: A6_R700_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.3,0.3,0.3};
		itemSize[] = {9,2};
		modes[] = {"Single"};
	};	
	class A6_SRSA2_Base;
	class A6_SRSA2: A6_SRSA2_Base
	{
		chamberableFrom[]={"Ammo_A6_338"};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.38,0.38,0.38};
		itemSize[]={7,3};
		modes[] = {"Single"};
	};
	class A6_SV98_Base;
	class A6_SV98: A6_SV98_Base
	{		
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,1};
		aimSpeedModifier[] = {0.35,0.35,0.35};
		itemSize[] = {9,3};
		modes[] = {"Single"};
	};	
	class A6_SVD_Base;
	class A6_SVD: A6_SVD_Base
	{
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {0.4,0.4,0.4};
		itemSize[] = {10,3};
		modes[] = {"SemiAuto"};
	};	
	class A6_SVD_Tiger_Base;
	class A6_SVD_Tiger: A6_SVD_Tiger_Base
	{	
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {0.37,0.37,0.37};
		itemSize[] = {9,3};
		modes[] = {"SemiAuto"};
	};
	class A6_T5000_Base;
	class A6_T5000: A6_T5000_Base
	{
		chamberableFrom[]={"Ammo_A6_338"};	
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.45,0.45,0.45};
		itemSize[] = {9,3};
		modes[] = {"Single"};
	};	
	class A6_TheFix_Base;
	class A6_TheFix: A6_TheFix_Base
	{
		chamberableFrom[]={"Ammo_A6_86BLK"};
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {1.5,1.5,1.2};
		aimSpeedModifier[] = {0.3,0.3,0.3};
		itemSize[]={7,3};
		modes[] = {"Single"};
	};	
	class A6_VSSK_Base;
	class A6_VSSK: A6_VSSK_Base
	{
		chamberableFrom[]={"Ammo_A6_127x55"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.0,1.9,1.1};
		aimSpeedModifier[]={0.42,0.42,0.42};
		itemSize[]={8,3};
		modes[] = {"SemiAuto"};
	};	
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Delta5_10Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_SV98_10Rnd: Magazine_Base
	{
		itemSize[] = {1,1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};	
	class A6_Mag_T5000_5Rnd: Magazine_Base 
	{
		itemSize[] = {2,1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_338"};
	};
	class A6_Mag_GM6Lynx_5Rnd: Magazine_Base 
	{
		itemSize[]={2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_127x99"};
	};
	class A6_Mag_AWM_5Rnd: Magazine_Base 
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_338"};
	};
	class A6_Mag_M82_10Rnd: Magazine_Base 
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_127x99"};
	};
	class A6_Mag_MK18_Mjolnir_10Rnd: Magazine_Base
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_338"};
	};	
	class A6_Mag_AX_7Rnd: Magazine_Base 
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_338"};
	};
	class A6_Mag_M200_7Rnd: Magazine_Base 
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_408"};
	};
	class A6_Mag_M200_Tan_7Rnd: Magazine_Base
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_408"};
	};
	class A6_Mag_M24_5Rnd: Magazine_Base 
	{
		itemSize[] = {1,1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_AX50_5Rnd: Magazine_Base 
	{
		itemSize[]={2,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_127x99"};
	};
	class A6_Mag_VSSK_5Rnd: Magazine_Base 
	{
		itemSize[]={2,1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]= {"Ammo_A6_127x55"};
	};
	class A6_Mag_SRSA2_8Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_338"};
	};
	class A6_Mag_R700_5Rnd: Magazine_Base 
	{
		itemSize[] = {1,1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class A6_Mag_TheFix_10Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_86BLK"};
	};
	class A6_Mag_DVL10_5Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		mmoItems[]={"Ammo_A6_338"};
	};
	class A6_Mag_SVD_10Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
	class A6_Mag_Alligator_Snipex_5Rnd: Magazine_Base 
	{
		itemSize[] = {3,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_145x114"};
	};
};	
