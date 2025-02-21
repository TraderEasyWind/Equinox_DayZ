class CfgPatches
{
	class MassiveMod_ModTweaks_MMIO_MassMisc
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"MMIO_Clothing"
        };
	};
};//meow
class cfgVehicles
{
	class Container_Base;
	class Mass_THICCWeaponCase: Container_Base
	{
		descriptionShort = "Used for enhancing the storage space of tents and backpacks. Not meant to be placed on the ground. 'Mass'";
	};
	class Mass_WeaponCase: Container_Base
	{
		descriptionShort = "Used for enhancing the storage space of tents and backpacks. Not meant to be placed on the ground. 'Mass'";
	};
};