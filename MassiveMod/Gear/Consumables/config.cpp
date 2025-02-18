class CfgPatches
{
	class MassiveMod_Gear_Consumables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Navigation"};
	};
};
class CfgVehicles
{
	class ItemMap;
	class ChernarusMap: ItemMap
	{
		inventorySlot[]=
		{
			"Paper"
		};
	};
};