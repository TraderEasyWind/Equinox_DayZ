class CfgPatches
{
	class SH_Gear_Melee
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Consumables"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class AK_Bayonet: Inventory_Base
	{
		repairableWithKits[]={4};
		repairCosts[]={10};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		repairableWithKits[]={4};
		repairCosts[]={10};
	};
	class Mosin_Bayonet: Inventory_Base
	{
		repairableWithKits[]={4};
		repairCosts[]={10};
	};
	class SKS_Bayonet: Inventory_Base
	{
		repairableWithKits[]={4};
		repairCosts[]={10};
	};
};