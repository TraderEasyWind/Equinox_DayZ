class CfgPatches
{
	class SH_Weapons_Ammunition_762x54_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Firearms_SVD",
			"DZ_Weapons_Firearms_MosinNagant",
			"MassGuns_Weapons_PKM",
			"MassGuns_Weapons_SVT40",
			"MassGuns_Weapons_SVU",
			"MassGuns_Magazines",
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class SVD_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class BoltActionRifle_InnerMagazine_Base;
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class Mass_PKM_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class MassSVT40_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class Mass_SVU_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x54Old"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_AKM_Drum75Rnd;
	class Mag_CLIP762x54_5Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class Mag_762x54Snaploader_2Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class Mag_SVD_10Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class Mass_Mag_PKM_100Rnd: Mag_AKM_Drum75Rnd
	{
		ammoItems[]+=
		{
			"Ammo_762x54Old"
		};
	};
	class Mass_Mag_SVT_10Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x54Old"
		};
	};
};
