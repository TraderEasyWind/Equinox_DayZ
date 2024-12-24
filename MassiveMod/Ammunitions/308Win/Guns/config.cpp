class CfgPatches
{
	class SH_Weapons_Ammunition_308_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms",
			"SH_Weapons_Ammunition_308",
			"DZ_Weapons_Firearms_B95",
			"DZ_Weapons_Firearms_CZ527",
			"DZ_Weapons_Firearms_FAL",
			"DZ_Weapons_Firearms_Winchester70",
			"MassGuns_Weapons_M417",
			"MassGuns_Weapons_RugerPrecision",
			"MassGuns_Magazines",
			"DZ_Pistols_Encore"
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class BoltActionRifle_ExternalMagazine_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class Scout;
	class Pistol_Base;
	class LongHorn_Base: Pistol_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class B95_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class MassM417_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Mass_RugerPrecision_Base: Scout
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Snafu_ScarH_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class GCGN_M110_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_SR25_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFUDSASA58_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_Saint308_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_G3A3_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_M60_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFUM1A_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_M48_Base: BoltActionRifle_InnerMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_M14_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_308WinOld"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_SVD_10Rnd;
	class Mag_308WinSnaploader_2Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Mag_CZ550_4rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Mag_CZ550_10rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Mass_Mag_M417_20Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Mass_Mag_RugerPrecision_10Rnd: Mag_SVD_10Rnd
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class Snafu_ScarH_Mag_Base: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class GCGN_M110_Mag_Base: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_SR25_Mag_Base: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_Saint_Mag_Base: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_G3A3_20rdMag: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_M60_100rdMag: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFUM1A_20rdMag: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
	class SNAFU_M14_Mag_Base: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_308WinOld"
		};
	};
};
