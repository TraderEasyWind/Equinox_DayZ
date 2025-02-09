class CfgPatches
{
	class MassiveMod_ModTweaks_MMIO
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
class CfgVehicles
{
	class M4_OEBttstck;
	class MassAR15AdjBttstck: M4_OEBttstck
	{
	};
};