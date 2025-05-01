class CfgPatches
{
	class A6_Pistols_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_Pistols_Modded
	{
		dir="A6_Pistols_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Pistols_Modded";
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
	class A6_500SW_Base;	
	class A6_500SW: A6_500SW_Base
	{
		chamberableFrom[]={"Ammo_A6_500SW"};
		itemSize[]={4,2};
		recoilModifier[]={2.5,2.5,2.5};
		swayModifier[]={1.2,0.9,0.7};
		aimSpeedModifier[]={0.38,0.38,0.38};
	};
	class A6_M9_Base;
	class A6_M9: A6_M9_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[]={3,2};
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,0.9,0.7};
		aimSpeedModifier[]={0.18,0.18,0.18};
		modes[]={"SemiAuto","Burst"};
	};
	class A6_DesertEagle_Base;
	class A6_DesertEagle: A6_DesertEagle_Base
	{
		chamberableFrom[]={"Ammo_A6_50AE"};
		itemSize[]={4,2};
		recoilModifier[] = {1.35,1.35,1.35};
		swayModifier[] = {1.3,1.3,0.9};
		aimSpeedModifier[]={0.34,0.34,0.34};
		modes[]={"SemiAuto"};
	};	
	class A6_FiveSeven_Base;
	class A6_FiveSeven: A6_FiveSeven_Base
	{
		chamberableFrom[]={"Ammo_A6_57x28"};
		itemSize[]={3,2};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		aimSpeedModifier[]={0.2,0.2,0.2};
		modes[]={"Single"};
	};
	class A6_Glock19_Base;
	class A6_Glock19: A6_Glock19_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[]={3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,0.8};
		aimSpeedModifier[]={0.18,0.18,0.18};
		modes[]={"SemiAuto"};		
	};		
	class A6_M1911_Base;
	class A6_M1911: A6_M1911_Base
	{
		chamberableFrom[] = {"Ammo_45ACP"};
		itemSize[]={3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,0.8};
		aimSpeedModifier[]={0.16,0.16,0.16};
		modes[]={"SemiAuto"};
	};	
	class A6_M1911_Kimber: A6_M1911_Base
	{
		chamberableFrom[] = {"Ammo_45ACP"};
		itemSize[]={3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,0.8};
		aimSpeedModifier[]={0.16,0.16,0.16};
		modes[]={"SemiAuto"};
	};
	class A6_M1911_Compact_Base;
	class A6_M1911_Compact: A6_M1911_Compact_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[] = {2,2};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,0.6};
		aimSpeedModifier[]={0.15,0.15,0.15};
	};
	class A6_MP9Pro_Base;
	class A6_MP9Pro_Black: A6_MP9Pro_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[]={3,2};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		aimSpeedModifier[]={0.17,0.17,0.17};
		modes[]={"Single"};
	};
	class A6_MPShield_Base;
	class A6_MPShield: A6_MPShield_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[]={2,2};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		aimSpeedModifier[]={0.13,0.13,0.13};
		modes[]={"Single"};
	};	
	class A6_P320_Base;
	class A6_P320: A6_P320_Base
	{	
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,0.8};
		aimSpeedModifier[]={0.16,0.16,0.16};
		modes[]={"SemiAuto"};
	};	
	class A6_PX4_Base;
	class A6_PX4: A6_PX4_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		itemSize[]={2,2};
		recoilModifier[] = {1.1,1.1,1};
		swayModifier[] = {1,1,0.7};
		aimSpeedModifier[]={0.18,0.18,0.18};
		modes[]={"SemiAuto"};
	};	
	class A6_RugerMarkIV_Base;
	class A6_RugerMarkIV: A6_RugerMarkIV_Base
	{
		chamberableFrom[] = {"Ammo_22"};
		itemSize[] = {3,2};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,0.7};
		aimSpeedModifier[]={0.15,0.15,0.15};
		modes[]={"SemiAuto"};
	};	
};
class CfgMagazines
{
	// resize as you please, everything here is resized to feel more like tarkov already
	// Add other ammo compatibilities, also.  
	class Magazine_Base;
	class A6_Mag_M1911_7Rnd: Magazine_Base 
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[] = {"Ammo_45ACP"};
	};
	class A6_Mag_M1911_Compact_9Rnd: Magazine_Base
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_DesertEagle_9Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_50AE"};
	};
	class A6_Mag_FiveSeven_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_57x28"};
	};
	class A6_Mag_Glock19_15Rnd: Magazine_Base
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};	
	class A6_Mag_M9_15Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_PX4_14Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_RugerMarkIV_10Rnd: Magazine_Base
	{
		itemSize[] = {1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[] = {"Ammo_22"};
	};
	class A6_Mag_MP9Pro_17Rnd: Magazine_Base
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_MPShield_13Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_P320_17Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_P320_Tan_17Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
};	
