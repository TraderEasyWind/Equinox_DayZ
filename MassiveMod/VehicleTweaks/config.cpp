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
};
class CfgVehicles
{
	class Truck_01_Wheel;
	class Truck_01_WheelDouble;
	class Offroad_02_Wheel;
	class CarWheel;
	class Offroad_02_Wheel_Ruined;
	class Truck_01_Wheel_Ruined;
	class Truck_01_WheelDouble_Ruined;
	class MassiveMod_Offroad_02_Wheel: Offroad_02_Wheel
	{
		displayName="Western Offroad Wheel";
		descriptionShort="Rugged steel wheel and tire that fit to a variety of NATO 4WD vehicles. The increased ground clearance will assist in overlanding.";
		inventorySlot[]=
		{
			"Offroad_02_Wheel_1_1",
			"Offroad_02_Wheel_1_2",
			"Offroad_02_Wheel_2_1",
			"Offroad_02_Wheel_2_2",
			"Offroad_02_Wheel_Spare_1",
			"Defender110_koleso_1_1",
			"Defender110_koleso_1_2",
			"Defender110_koleso_2_1",
			"Defender110_koleso_2_2",
			"Defender110_koleso_spare_1"
		};
	};
	class MassiveMod_Offroad_02_Wheel_Ruined: Offroad_02_Wheel_Ruined
	{
		displayName="Western Offroad Wheel";
		descriptionShort="Rugged steel wheel and tire that fit to a variety of NATO 4WD vehicles. The increased ground clearance will assist in overlanding.";
		inventorySlot[]=
		{
			"Offroad_02_Wheel_1_1",
			"Offroad_02_Wheel_1_2",
			"Offroad_02_Wheel_2_1",
			"Offroad_02_Wheel_2_2",
			"Offroad_02_Wheel_Spare_1",
			"Defender110_koleso_1_1",
			"Defender110_koleso_1_2",
			"Defender110_koleso_2_1",
			"Defender110_koleso_2_2",
			"Defender110_koleso_spare_1"
		};
	};
	class MassiveMod_Med_TruckWheel: Truck_01_Wheel
	{
		scope=2;
		displayName="Truck Wheel";
		descriptionShort="This medium duty wheel fits all trucks with a curb weight of up to 8000 kg";
		inventorySlot[]=
		{
			"Zil130Wheel_1_1",
			"Zil130Wheel_2_1",
			"Truck_01_Wheel_1_1",
			"Truck_01_Wheel_2_1",
			"Truck_01_Wheel_Spare_1",
			"Truck_01_Wheel_Spare_2"
		};
	};
	class MassiveMod_Med_TruckWheel_Ruined: Truck_01_Wheel_Ruined
	{
		scope=2;
		displayName="Truck Wheel";
		descriptionShort="This medium duty wheel fits all trucks with a curb weight of up to 8000 kg";
		inventorySlot[]=
		{
			"Zil130Wheel_1_1",
			"Zil130Wheel_2_1",
			"Truck_01_Wheel_1_1",
			"Truck_01_Wheel_2_1",
			"Truck_01_Wheel_Spare_1",
			"Truck_01_Wheel_Spare_2"
		};
	};
	class MassiveMod_Med_TruckWheel_Double: Truck_01_WheelDouble
	{
		displayName="Tandem Truck Wheel";
		descriptionShort="Two truck wheels in tandem, meant for the rear axle of most medium duty vehicles.";
		model="\DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_WheelDouble.p3d";
		inventorySlot[]=
		{
			"Truck_01_Wheel_1_2",
			"Truck_01_Wheel_1_3",
			"Truck_01_Wheel_2_2",
			"Truck_01_Wheel_2_3",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_2"
		};
	};
	class MassiveMod_Med_TruckWheel_Double_Ruined: Truck_01_WheelDouble_Ruined
	{
		displayName="Tandem Truck Wheel";
		descriptionShort="Two truck wheels in tandem, meant for the rear axle of most medium duty vehicles.";
		model="\DZ\vehicles\wheeled\Truck_01\proxy\Truck_01_WheelDouble.p3d";
		inventorySlot[]=
		{
			"Truck_01_Wheel_1_2",
			"Truck_01_Wheel_1_3",
			"Truck_01_Wheel_2_2",
			"Truck_01_Wheel_2_3",
			"Zil130Wheel_1_2",
			"Zil130Wheel_2_2"
		};
	};
};
class CarScript;
class SimulationModule;
class Offroad_02: Carscript
{			
	class SimulationModule: SimulationModule
	{
		class Gearbox
		{
			type = "GEARBOX_MANUAL";
		};
	};
};
class Truck_01_Base: CarScript
{
	attachments[] += {"Material_FPole_Flag"};
	class GUIInventoryAttachmentsProps
	{
		class Body
		{
			
			attachmentSlots[] += {"Material_FPole_Flag"};
		
		};
	};			
	class SimulationModule: SimulationModule
	{
		drive = "DRIVE_642";
		class Engine
		{	
			torqueCurve[] = {650,300,800,450,1250,600,2000,550,3500,500,4500,300};
			inertia = 0.85;
			frictionTorque = 90;
			rollingFriction = 2.5;
			viscousFriction = 1;
			rpmIdle = 750;
			rpmMin = 900;
			rpmClutch = 1000;
			rpmRedline = 4000;
		};
		class Clutch
		{
			maxTorqueTransfer = 520;
			uncoupleTime = 0.2;
			coupleTime = 0.8;
		};
		class Gearbox
		{
			type = "GEARBOX_MANUAL";
			reverse = 5.485;
			ratios[] = {7.44,4.20,2.37,1.42,1,0.79};
			// ratios[] = {4.69,2.8300002,1.8999999,1.37,0.9778};	
			// ratios[] = {9.00,6.00,4.20,3.10,2.30,1.60,1.00,0.75};
			// ratios[] = {6.19,3.13,2.1,1.67,1.28,1,0.84,0.67};
		};
		class CentralDifferential
		{
			ratio = 0.75;
			type = "DIFFERENTIAL_LOCKED";
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
