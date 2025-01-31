class CfgPatches
{
	class SH_Weapons_Ammunition_762x39_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"SH_Weapons_Ammunition_762x39",
			"DZ_Weapons_Firearms_AKM",
			"DZ_Weapons_Firearms_IZH18",
			"DZ_Weapons_Firearms_SKS",
			"MassGuns_Weapons_B52",
			"MassGuns_Weapons_Type81",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms_CZ527",
			"DaysBefore_Weapons_AutomaticRifles_Groza"
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class FAL;
	class BoltActionRifle_ExternalMagazine_Base;
	class JD_Groza_762_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class AKM_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class Izh18_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class SKS_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class MassB52_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class MassPPSKN_Base: FAL
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class MassType81_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_CLIP762x39_10Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
	class Mag_CZ527_5rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
	};
};
