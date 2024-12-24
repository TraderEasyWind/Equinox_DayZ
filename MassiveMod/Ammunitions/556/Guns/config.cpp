class CfgPatches
{
	class SH_Weapons_Ammunition_556_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms_AK101",
			"DZ_Weapons_Firearms_aug",
			"DZ_Weapons_Firearms_Famas",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_M249Para",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms_Scout",
			"MassGuns_Weapons_HK416",
			"MassGuns_Weapons_M16",
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class Rifle_Base;
	class M4A1_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class AK101_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Aug_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Famas_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class M16A2_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class M249_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class AK101;
	class M4A1;
	class M16A2;
	class Mass_ACR_Base: M4A1
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mass_HK416_Base: M16A2
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class MassM16_Base: M4A1
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class MassMini14_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class MassAR15DMR_Base: M4A1
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mass_SLR106: AK101
	{
		chamberableFrom[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_FAMAS_25Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_CMAG_10Rnd_Black: Mag_CMAG_10Rnd
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_Aug_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_Scout_5Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class Mag_M249_Box200Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
};
