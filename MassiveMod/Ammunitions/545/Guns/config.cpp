class CfgPatches
{
	class SH_Weapons_Ammunition_545_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms_AK74",
			"MassGuns_Weapons_AN94",
			"MassGuns_Weapons_RPK",
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class AK74;
	class AK74_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mass_AN94_Base: Rifle_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mass_RPK74_Base: AK74
	{
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_AK74_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
};
