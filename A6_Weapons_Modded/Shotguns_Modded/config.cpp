class CfgPatches
{
	class A6_Shotguns_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_Shotguns_Modded
	{
		dir="A6_Shotguns_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Shotguns_Modded";
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
	class Rifle_Base;
	class A6_AA12_Base;
	class A6_AA12: A6_AA12_Base
	{	
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		itemSize[]={7,3};
		modes[] = {"Single","FullAuto"};
	};	
	class A6_Benelli_Base;
	class A6_Benelli: A6_Benelli_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.25,0.25,0.25};
		itemSize[]={8,2};
		modes[] = {"SemiAuto"};
	};	
	class A6_KSG_Base;
	class A6_KSG: A6_KSG_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.2};
		aimSpeedModifier[]={0.2,0.2,0.2};
		itemSize[]={6,2};
		modes[]={"Single"};
	};	
	class A6_Mossberg_590_Base;
	class A6_Mossberg_590: A6_Mossberg_590_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.7,2.7,1.6};
		aimSpeedModifier[]={0.23,0.23,0.23};
		itemSize[] = {7,2};
		modes[]={"Single"};
	};	
	class A6_MP153_Base;
	class A6_MP153: A6_MP153_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.7,2.7,1.6};
		aimSpeedModifier[]={0.28,0.28,0.28};
		itemSize[]={8,2};
		modes[]={"SemiAuto"};
	};	
	class A6_Spas12_Base;
	class A6_Spas12: A6_Spas12_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		recoilModifier[] = {1.25,1.25,1.25};
		swayModifier[] = {2.5,2.5,1.5};
		aimSpeedModifier[]={0.28,0.28,0.28};
		itemSize[]={6,2};
		modes[]={"SemiAuto"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AA12_24Rnd: Magazine_Base 
	{
		itemSize[] = {2,2};
		aimSpeedModifier[]={1.3,1.3,1.3};
		recoilModifier[]={0.85,0.85,0.85};
		ammoItems[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
	};
};	
