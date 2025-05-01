class CfgPatches
{
	class A6_LMGs_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_LMGs_Modded
	{
		dir="A6_LMGs_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_LMGs_Modded";
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
	class A6_FNEvolys_Base;
	class A6_FNEvolys: A6_FNEvolys_Base
	{
		chamberableFrom[]={"Ammo_A6_68SPC"};
		itemSize[]={9,4};
		recoilModifier[] = {1.4,1.4,1.4};
		swayModifier[] = {2,1.8,1.5};
		aimSpeedModifier[]={0.45,0.45,0.45};
		modes[]={"FullAuto"};
	};	
	class A6_M249_Base;
	class A6_M249: A6_M249_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		itemSize[]={9,3};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {2.5,2.5,1.5};
		aimSpeedModifier[]={0.42,0.42,0.42};
		modes[]={"FullAuto"};
	};	
	class A6_M60E4_Base;
	class A6_M60E4: A6_M60E4_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		itemSize[]={10,4};
		recoilModifier[]={1.25,1.25,1.25};
		swayModifier[]={2,2,1.1};
		aimSpeedModifier[]={0.5,0.5,0.5};
		modes[]={"FullAuto"};
	};	
	class A6_PKM_Base;
	class A6_PKM: A6_PKM_Base
	{
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		itemSize[]={10,4};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2,1.8,1.5};
		aimSpeedModifier[]={0.5,0.5,0.5};
		modes[]={"FullAuto"};
	};	
	class A6_RPK_Base;
	class A6_RPK: A6_RPK_Base
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		itemSize[]={10,3};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.4};
		aimSpeedModifier[]={0.43,0.43,0.43};
		modes[]={"SemiAuto","FullAuto"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_FNEvolys_100Rnd: Magazine_Base 
	{
		itemSize[]={3,3};
		ammoItems[]={"Ammo_A6_68SPC"};
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
	};
	class A6_Mag_M249_200Rnd: Magazine_Base 
	{
		itemSize[]={3,3};
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
	};
	class A6_Mag_PKM_100Rnd: Magazine_Base 
	{
		itemSize[]={3,3};
		ammoItems[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
	};
	class A6_Mag_RPK_75Rnd: Magazine_Base 
	{
		itemSize[]={3,3};
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		aimSpeedModifier[]={1.25,1.25,1.25};
		recoilModifier[]={0.85,0.85,0.85};
	};
	class A6_Mag_M60E4_100Rnd: Magazine_Base 
	{
		itemSize[]={3,3};
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
	};
};	
