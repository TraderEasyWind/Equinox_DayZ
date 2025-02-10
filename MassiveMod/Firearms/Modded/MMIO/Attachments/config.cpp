class CfgPatches
{
	class MassiveMod_Firearms_Modded_MMIO_Attachments
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"MassBuildings",
			"DZ_Scripts"
        };
	};
};//meow
class cfgVehicles
{
	class M4_OEBttstck;
	class AK_PlasticHndgrd;
	class Inventory_Base;
	class MassAR15AdjBttstck: M4_OEBttstck
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class Mass_AK_PolymerHandGuard: AK_PlasticHndgrd
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class Mass_HK416Bttstck: M4_OEBttstck
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MassM417Stock: M4_OEBttstck
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MassSPAS12Stock: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MassSVTMount: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
};