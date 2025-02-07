class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MDZ_Kamaz_data","CivilianVaz_2126","TF_UAZ5131","nd_datsun","nm_Flagextension"};
	};
};
class CfgVehicles
{
	class CarScript;
	class Crew;
	class Driver;
	class CoDriver;
	class CarDoor;
	class Front;
	class Rear;
	class Left;
	class Right;
	class AnimationSources;
	class SimulationModule;
	class Axles;
	class Wheels;
	class DamageSystem;
	class GlobalHealth;
	class DamageZones;
	class Window;
	class Health;
	class Doors;
	class CarWheel;
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
	};
	class nd_datsun_base;
	class nd_datsun : nd_datsun_base
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
	class CivilianVaz_2126: CarScript
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
	class Slot_TF_UAZ3151_Wheel_Spare_1
	{
		name = "TF_UAZ3151_Wheel_spare_1";
		displayName = "$STR_WheelUAZ3151";
		selection = "wheel_spare_1";
		ghostIcon = "wheel";
	};
	class TF_UAZ3151_Green: CarScript
	{
		attachments[] += {"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
			class Chassis
			{
				
				attachmentSlots[] += {"TF_UAZ3151_Wheel_spare_1"};
			
			};
		};
	};
	class CrSk_Land_Rover_Defender_110_base;
	class CrSk_Land_Rover_Defender_110: CrSk_Land_Rover_Defender_110_base
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
	class Kamaz_base;
	class Kamaz: Kamaz_base
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
	class KamazFuel: Kamaz_base
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
	class KamazCovered: Kamaz_base
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
	class KamazCargo: Kamaz_base
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
};

//  class Kamaz: Kamaz_base	
//	class KamazCovered: Kamaz
//	class KamazFuel: Kamaz_base