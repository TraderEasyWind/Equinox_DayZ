class CfgPatches
{
	class SH_Gear_Containers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Containers"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class AmmoBox;
	class Container_Base;
	class WoodenCrate: Container_Base
	{
		itemIsOpenable=1;
	};
	class SeaChest: Container_Base
	{
		itemIsOpenable=1;
	};
};