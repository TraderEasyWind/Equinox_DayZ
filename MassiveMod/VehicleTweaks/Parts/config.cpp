class CfgPatches
{
	class MassiveMod_VehicleTweaks_Parts
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Parts"
        };
	};
};
//			"ZenTireIron",
//			"ZenTireRepair"
class CfgVehicles
{
	class Bottle_Base;
	class Inventory_Base;
	class SparkPlug;
	class CarBattery;
	class CarRadiator: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MassiveMod_CarRadiator: CarRadiator
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MassiveMod_SparkPlug: SparkPlug{};
	class MassiveMod_CarBattery: CarBattery{};
	class CanisterGasoline: Bottle_Base
	{
		inventorySlot[]+=
		{
			"ZenTireGasoline"
		};
	};
	class LugWrench: Inventory_Base
	{
		inventorySlot[]+=
		{
			"ZenTireIron"
		};
	};
};
	