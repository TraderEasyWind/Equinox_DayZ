class CfgPatches
{
	class A6_OpticModded
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class ItemOptics_Base;
	class M68Optic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOpticsMarkIV"};
	};
	class M4_T3NRDSOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOpticsMarkIV"};
	};
	class ReflexOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOpticsMarkIV"};
	};
	class HuntingOptic: ItemOptics_Base
	{
		inventorySlot[] += {"weaponOptics"};
	};
};	
class CfgSlots
{	
	class Slot_weaponOpticsMarkIV
	{
		name = "weaponOpticsMarkIV";
		displayName = "Small Optics";
		ghostIcon = "set:dayz_inventory image:weaponoptics";
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoShotgun;
class OpticsInfoRifle;
class OpticsInfoPistol;
class CfgWeapons
{
	class Pistol_Base;
	class Shotgun_Base;
	class Rifle_Base;
	class BoltActionRifle_ExternalMagazine_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class B95_Base: Rifle_Base
	{
		canReceiveHuntingOptic = 1;
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
		canReceiveHuntingOptic = 1;	
	};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
		canReceiveHuntingOptic = 1;
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		canReceiveHuntingOptic = 1;
	};
};		