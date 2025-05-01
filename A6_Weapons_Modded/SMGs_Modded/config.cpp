class CfgPatches
{
	class A6_SMGs_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_SMGs_Modded
	{
		dir="A6_SMGs_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_SMGs_Modded";
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
	class A6_9A91_Base;
	class A6_9A91: A6_9A91_Base
	{
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.22,0.22,0.22};
		itemSize[] = {7,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AKS74U_Base;
	class A6_AKS74U: A6_AKS74U_Base
	{
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.7,1.7,1};
		aimSpeedModifier[]={0.27,0.27,0.27};
		itemSize[]={6,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_AugPara_Base;
	class A6_AugPara: A6_AugPara_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.2,0.2,0.2};
		itemSize[] = {6,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
	class A6_HoneyBadger_Base;
	class A6_HoneyBadger: A6_HoneyBadger_Base
	{	
		chamberableFrom[]={"Ammo_A6_300"};
		recoilModifier[]={0.8,0.8,0.8};
		swayModifier[]={1.6,1.2,1};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[]={6,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_MP5k_Base;
	class A6_MP5k: A6_MP5k_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,1};
		aimSpeedModifier[]={0.18,0.18,0.18};
		itemSize[] = {5,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_MP5_Base;
	class A6_MP5: A6_MP5_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[] = {6,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};	
	class A6_MP5SD_Base;
	class A6_MP5SD: A6_MP5SD_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={0.32,0.32,0.32};
		itemSize[] = {6,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
	class A6_MP7A2_Base;
	class A6_MP7A2: A6_MP7A2_Base
	{
		chamberableFrom[]={"Ammo_A6_46x30"};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,0.9,0.8};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[]={5,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_P90_Base;
	class A6_P90: A6_P90_Base
	{
		chamberableFrom[]={"Ammo_A6_57x28"};
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,0.9,0.7};
		aimSpeedModifier[]={0.2,0.2,0.2};
		itemSize[]={6,2};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_PP19Bizon_Base;
	class A6_PP19Bizon: A6_PP19Bizon_Base
	{	
		chamberableFrom[]={"Ammo_380"};
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,1};
		aimSpeedModifier[]={0.26,0.26,0.26};
		itemSize[]={6,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_PP19_Base;	
	class A6_PP19: A6_PP19_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.22,0.22,0.22};
		itemSize[]={6,3};
		modes[] = {"SemiAuto","FullAuto"};
	};
	class A6_Scorpion_Evo_Base;
	class A6_Scorpion_Evo: A6_Scorpion_Evo_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {1.6,1.6,1.3};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[]={6,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
	class A6_UMP45_Base;
	class A6_UMP45: A6_UMP45_Base
	{	
		chamberableFrom[]={"Ammo_45ACP"};
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {1.6,1.6,1.3};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[] = {6,3};
		modes[] = {"SemiAuto","FullAuto"};
	};	
	class A6_Vector_Base;
	class A6_Vector: A6_Vector_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		recoilModifier[]={1.4,1.1,1};
		swayModifier[]={1.4,1.1,1};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[]={5,3};
		modes[] = {"SemiAuto","Burst","FullAuto"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_MP5_15Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.03,1.03,1.03};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_MP5_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_MP5_Waffle_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.08,1.08,1.08};
		recoilModifier[]={0.88,0.88,0.88};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_MP5_100Rnd: Magazine_Base 
	{
		itemSize[]={4,2};
		aimSpeedModifier[]={1.8,1.8,1.8};
		recoilModifier[]={0.77,0.77,0.77};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_UMP45_25Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_45ACP"};
	};
	class A6_Mag_AugPara_32Rnd: Magazine_Base 
	{
		itemSize[] = {1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_PP19_30Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_PP19Bizon_64Rnd: Magazine_Base
 	{
		itemSize[]={1,4};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_380"};
	};	
	class A6_Mag_Gripped_PP19Bizon_64Rnd: Magazine_Base
 	{
		itemSize[]={1,4};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.69,0.69,0.69};
		ammoItems[]={"Ammo_380"};
	};	
	class A6_Mag_Vector_33Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.15,1.15,1.15};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_Vector_50Rnd: Magazine_Base 
	{
		itemSize[]={2,3};
		aimSpeedModifier[]={1.35,1.35,1.35};
		recoilModifier[]={0.8,0.8,0.8};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_MP7A2_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		ammoItems[]={"Ammo_A6_46x30"};
	};
	class A6_Mag_MP7A2_40Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_A6_46x30"};
	};
	class A6_Mag_P90_50Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.2,1.2,1.2};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_A6_57x28"};
	};
	class A6_Mag_Scorpion_Evo_30Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_Scorpion_Evo_40Rnd: Magazine_Base 
	{
		itemSize[]={1,3};
		aimSpeedModifier[]={1.07,1.07,1.07};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class A6_Mag_9A91_20Rnd: Magazine_Base 
	{
		itemSize[]={1,2};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
};	
