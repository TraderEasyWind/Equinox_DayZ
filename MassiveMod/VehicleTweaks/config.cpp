class CfgPatches
{
	class MassiveMod_VehicleTweaks
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts"
        };
	};
};//meow
//class CfgVehicles
//{
//	class Inventory_Base;
//	class SparkPlug: Inventory_Base
//	{
//		inventorySlot[]+=
//		{
//			"SparkPlug2",
//			"SparkPlug3",
//			"SparkPlug4",
//			"SparkPlug5",
//			"SparkPlug6"
//		};
//	};
//	class CarScript;
//	class OffroadHatchback: CarScript
//	{
//		scope=2;
//		attachmentSlots[]+=
//		{
//			"SparkPlug2",
//			"SparkPlug3",
//			"SparkPlug4"
//		};
//		class DamageSystem
//		{
//			class DamageZones
//			{
//				class Engine
//				{
//					inventorySlots[]+=
//					{
//						"SparkPlug2",
//					    "SparkPlug3",
//					    "SparkPlug4"
//					};
//				};
//			};
//		};
//		class GUIInventoryAttachmentsProps
//		{
//			class Engine
//			{
//				attachmentSlots[]+=
//				{
//					"SparkPlug2",
//					"SparkPlug3",
//					"SparkPlug4"
//				};
//			};
//		};
//	};
//};
