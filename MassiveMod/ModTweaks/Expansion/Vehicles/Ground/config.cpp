class CfgPatches
{
	class MassiveMod_ModTweaks_Expansion_Vehicles_Ground
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DayZExpansion_Vehicles_Ground_UAZ","DayZExpansion_Vehicles_Ground_LandRover","DayZExpansion_Vehicles_Ground_Ikarus","DayZExpansion_Vehicles_Ground_Vodnik","DayZExpansion_Vehicles_Ground_TT650","DayZExpansion_Vehicles_Ground_250N","DayZExpansion_Vehicles_Ground_oldbike","DayZExpansion_Vehicles_Ground_Tractor",};
	};
};
class CfgVehicles
{
	class CarScript;
    class ExpansionUAZBase;
	class ExpansionUAZ: ExpansionUAZBase
	{
		attachments[] += {"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};			
	};	
	class Expansion_Landrover_Base: CarScript
	{
		attachments[] += {"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};
	};
	class ExpansionUAZCargoRoofless
	{
		attachments[] += {"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};			
	};	
	class ExpansionTractor: CarScript
	{
		attachments[] +={"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};
	};
	class ExpansionBoatScript;
	class ExpansionVodnik: ExpansionBoatScript
	{
		attachments[] +={"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};
	};
	class ExpansionBus: CarScript
	{
		attachments[] +={"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};
	};
};	


//	class ExpansionVehicleBikeBase;
//	class Vehicle_ExpansionOldBike: ExpansionVehicleBikeBase
//	{
//		attachments[] +={"Material_FPole_Flag"};
//		class GUIInventoryAttachmentsProps
//		{
//			class Chassis
//			{
//				
//				attachmentSlots[] += {"Material_FPole_Flag"};
//			
//			};
//		};
//	};
//	class Vehicle_Expansion250N: ExpansionVehicleBikeBase
//	{
//		attachments[] +={"Material_FPole_Flag"};
//		class GUIInventoryAttachmentsProps
//		{
//			class Body
//			{
//				
//				attachmentSlots[] += {"Material_FPole_Flag"};
//			
//			};
//		};
//	};
//	class Vehicle_ExpansionTT650: ExpansionVehicleBikeBase
//	{
//		attachments[] +={"Material_FPole_Flag"};
//		class GUIInventoryAttachmentsProps
//		{
//			class Body
//			{
//				
//				attachmentSlots[] += {"Material_FPole_Flag"};
//			
//			};
//		};
//	};