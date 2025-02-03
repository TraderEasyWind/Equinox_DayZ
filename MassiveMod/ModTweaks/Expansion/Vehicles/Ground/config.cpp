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
	class Expansion_Landrover_Base: CarScript
	{
		attachments[] += {"Material_FPole_Flag"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
			class DamageZones
			{
				class Chassis
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					memoryPoints[] = {"dmgzone_chassis"};
					componentNames[] = {"dmgzone_chassis"};
					transferTozonesNames[] = {"Engine"};
					transferTozonesThreshold[] = {0.4};
					transferTozonesCoefs[] = {0.3};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 800;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					componentNames[] = {"dmgzone_interior"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Front
				{
					class Health
					{
						hitpoints = 800;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					transferTozonesNames[] = {"Reflector_1_1","Reflector_2_1","WindowFront","Engine","Radiator","Battery"};
					transferTozonesThreshold[] = {0.5,0.8,0.8,0.8};
					transferTozonesCoefs[] = {0.8,0.6,0.6,0.6};
					memoryPoints[] = {"dmgzone_front"};
					componentNames[] = {"dmgzone_front"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"CarRadiator","expansion_landrover_wheel_1_1","expansion_landrover_wheel_2_1","expansion_landrover_hood"};
				};
				class Back
				{
					class Health
					{
						hitpoints = 800;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					transferTozonesNames[] = {"Fender_1_2","Fender_2_2","WindowBL","WindowBR"};
					transferTozonesCoefs[] = {0.2,0.2,0.2,0.2};
					memoryPoints[] = {"dmgzone_back"};
					componentNames[] = {"dmgzone_back"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Roof
				{
					class Health
					{
						hitpoints = 600;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					memoryPoints[] = {"dmgzone_roof"};
					componentNames[] = {"dmgzone_roof"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class FrameL
				{
					class Health
					{
						hitpoints = 900;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					memoryPoints[] = {"dmgzone_w_frameL"};
					componentNames[] = {"dmgzone_w_frameL"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class FrameR: FrameL
				{
					memoryPoints[] = {"dmgzone_w_frameR"};
					componentNames[] = {"dmgzone_w_frameR"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				class Fender_1_1
				{
					class Health
					{
						hitpoints = 600;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					transferToZonesNames[] = {"Front","Reflector_1_1","Engine","Radiator","WindowFront","Battery"};
					transferToZonesCoefs[] = {0.3,0.3,0.6,0.5,0.4,0.7};
					memoryPoints[] = {"dmgzone_fender_1_1"};
					componentNames[] = {"dmgzone_fender_1_1"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"expansion_landrover_wheel_1_1"};
					inventorySlotsCoefs[] = {0.5};
				};
				class Engine
				{
					class Health
					{
						hitpoints = 800;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					fatalInjuryCoef = 0.001;
					inventorySlots[] = {"CarBattery","SparkPlug","Radiator"};
					inventorySlotsCoefs[] = {0.2,0.1,0.2};
				};
				class Radiator
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0;
					};
					memoryPoints[] = {};
					componentNames[] = {};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"CarRadiator"};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
					};
					fatalInjuryCoef = -1;
					inventorySlots[] = {};
				};
				
			};
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