class CfgPatches
{
	class Real_Names
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class CarWheel: Inventory_Base
	{
	};
	class CarDoor: Inventory_Base
	{
	};
	class Car;
	class CarScript: Car
	{
	};
	class OffroadHatchback: CarScript
	{
		displayName="$STR_real_OffroadHatchback0";
	};
	class HatchbackWheel: CarWheel
	{
		//displayName="$STR_real_HatchbackWheel0";
		//descriptionShort="$STR_real_hatchbackwheel1";
		displayName="Eastern Offroad Wheel";
		descriptionShort="Durable steel wheel and tire that fit a variety of compact, utilitarian pickups and SUV's. The rugged tread allows for greater traction delivery on all surfaces.";
	};
	class HatchbackWheel_Ruined: CarWheel
	{
		displayName="Eastern Offroad Wheel";
		descriptionShort="Durable steel wheel and tire that fit a variety of compact, utilitarian pickups and SUV's. The rugged tread allows for greater traction delivery on all surfaces.";
	};
	class HatchbackDoors_Driver: CarDoor
	{
		displayName="$STR_real_HatchbackDoors_Driver0";
		descriptionShort="$STR_real_HatchbackDoors_Driver1";
	};
	class HatchbackDoors_CoDriver: HatchbackDoors_Driver
	{
		displayName="$STR_real_HatchbackDoors_CoDriver0";
		descriptionShort="$STR_real_HatchbackDoors_CoDriver1";
	};
	class HatchbackHood: CarDoor
	{
		displayName="$STR_real_HatchbackHood0";
		descriptionShort="$STR_real_HatchbackHood1";
	};
	class HatchbackTrunk: CarDoor
	{
		displayName="$STR_real_HatchbackTrunk0";
		descriptionShort="$STR_real_HatchbackTrunk1";
	};
	class CivilianSedan: CarScript
	{
		displayName="$STR_real_CivilianSedan0";
	};
	class CivSedanWheel: CarWheel
	{
		displayName="$STR_real_CivSedanWheel0";
		descriptionShort="$STR_real_CivSedanWheel1";
	};
	class CivSedanWheel_Ruined: CivSedanWheel
	{
		displayName="$STR_real_CivSedanWheel0";
		descriptionShort="$STR_real_CivSedanWheel1";
	};
	class CivSedanDoors_Driver: CarDoor
	{
		displayName="$STR_real_CivSedanDoors_Driver0";
		descriptionShort="$STR_real_CivSedanDoors_Driver1";
	};
	class CivSedanDoors_CoDriver: CivSedanDoors_Driver
	{
		displayName="$STR_real_CivSedanDoors_CoDriver0";
		descriptionShort="$STR_real_CivSedanDoors_CoDriver1";
	};
	class CivSedanDoors_BackLeft: CivSedanDoors_Driver
	{
		displayName="$STR_real_CivSedanDoors_BackLeft0";
		descriptionShort="$STR_real_CivSedanDoors_BackLeft1";
	};
	class CivSedanDoors_BackRight: CivSedanDoors_Driver
	{
		displayName="$STR_real_CivSedanDoors_BackRight0";
		descriptionShort="$STR_real_CivSedanDoors_BackRight1";
	};
	class CivSedanHood: CarDoor
	{
		displayName="$STR_real_CivSedanHood0";
		descriptionShort="$STR_real_CivSedanHood1";
	};
	class CivSedanTrunk: CarDoor
	{
		displayName="$STR_real_CivSedanTrunk0";
		descriptionShort="$STR_real_CivSedanTrunk1";
	};
	class Hatchback_02: CarScript
	{
		displayName="$STR_real_CivHatchback0";
	};
	class Hatchback_02_Wheel: CarWheel
	{
		displayName="$STR_real_CivHatchbackWheel0";
		descriptionShort="$STR_real_CivHatchbackWheel1";
	};
	class Hatchback_02_Wheel_Ruined: Hatchback_02_Wheel
	{
		displayName="$STR_real_CivHatchbackWheel0";
		descriptionShort="$STR_real_CivHatchbackWheel1";
	};
	class Hatchback_02_Door_1_1: CarDoor
	{
		displayName="$STR_real_CivHatchbackDoors_Driver0";
		descriptionShort="$STR_real_CivHatchbackDoors_Driver1";
	};
	class Hatchback_02_Door_2_1: Hatchback_02_Door_1_1
	{
		displayName="$STR_real_CivHatchbackDoors_CoDriver0";
		descriptionShort="$STR_real_CivHatchbackDoors_CoDriver1";
	};
	class Hatchback_02_Door_1_2: Hatchback_02_Door_1_1
	{
		displayName="$STR_real_CivHatchbackDoors_RearLeft0";
		descriptionShort="$STR_real_CivHatchbackDoors_RearLeft1";
	};
	class Hatchback_02_Door_2_2: Hatchback_02_Door_1_2
	{
		displayName="$STR_real_CivHatchbackDoors_RearRight0";
		descriptionShort="$STR_real_CivHatchbackDoors_RearRight1";
	};
	class Hatchback_02_Hood: Hatchback_02_Door_1_1
	{
		displayName="$STR_real_CivHatchbackDoors_Hood0";
		descriptionShort="$STR_real_CivHatchbackDoors_Hood1";
	};
	class Hatchback_02_Trunk: Hatchback_02_Door_1_1
	{
		displayName="$STR_real_CivHatchbackDoors_Trunk0";
		descriptionShort="$STR_real_CivHatchbackDoors_Trunk1";
	};
	class Sedan_02: CarScript
	{
		displayName="$STR_real_Sedan_020";
	};
	class Sedan_02_Wheel: CarWheel
	{
		displayName="$STR_real_Sedan_02_Wheel0";
		descriptionShort="$STR_real_Sedan_02_Wheel1";
	};
	class Sedan_02_Wheel_Ruined: Sedan_02_Wheel
	{
		displayName="$STR_real_Sedan_02_Wheel0";
		descriptionShort="$STR_real_Sedan_02_Wheel1";
	};
	class Sedan_02_Door_1_1: CarDoor
	{
		displayName="$STR_real_Sedan_02_Door_1_10";
		descriptionShort="$STR_real_Sedan_02_Door_1_11";
	};
	class Sedan_02_Door_2_1: Sedan_02_Door_1_1
	{
		displayName="$STR_real_Sedan_02_Door_2_10";
		descriptionShort="$STR_real_Sedan_02_Door_2_11";
	};
	class Sedan_02_Door_1_2: Sedan_02_Door_1_1
	{
		displayName="$STR_real_Sedan_02_Door_1_20";
		descriptionShort="$STR_real_Sedan_02_Door_1_21";
	};
	class Sedan_02_Door_2_2: Sedan_02_Door_1_1
	{
		displayName="$STR_real_Sedan_02_Door_2_20";
		descriptionShort="$STR_real_Sedan_02_Door_2_21";
	};
	class Sedan_02_Hood: CarDoor
	{
		displayName="$STR_real_Sedan_02_Hood0";
		descriptionShort="$STR_real_Sedan_02_Hood1";
	};
	class Sedan_02_Trunk: CarDoor
	{
		displayName="$STR_real_Sedan_02_Trunk0";
		descriptionShort="$STR_real_Sedan_02_Trunk1";
	};
	class Truck_01_Base: CarScript
	{
	};
	class Truck_01_Covered: Truck_01_Base
	{
		displayName="$STR_real_V3S_Covered0";
	};
	class Truck_01_Wheel: CarWheel
	{
		displayName="$STR_real_V3SWheel0";
		descriptionShort="$STR_real_V3SWheel1";
	};
	class Truck_01_Wheel_Ruined: Truck_01_Wheel
	{
		displayName="$STR_real_V3SWheel0";
		descriptionShort="$STR_real_V3SWheel1";
	};
	class Truck_01_WheelDouble: Truck_01_Wheel
	{
		displayName="$STR_real_V3SWheelDouble0";
		descriptionShort="$STR_real_V3SWheelDouble1";
	};
	class Truck_01_WheelDouble_Ruined: Truck_01_WheelDouble
	{
		displayName="$STR_real_V3SWheelDouble0";
		descriptionShort="$STR_real_V3SWheelDouble1";
	};
	class Truck_01_Door_1_1: CarDoor
	{
		displayName="$STR_real_V3SDoors_Driver0";
		descriptionShort="$STR_real_V3SDoors_Driver1";
	};
	class Truck_01_Door_2_1: Truck_01_Door_1_1
	{
		displayName="$STR_real_V3SDoors_CoDriver0";
		descriptionShort="$STR_real_V3SDoors_CoDriver1";
	};
	class Truck_01_Hood: CarDoor
	{
		displayName="$STR_real_V3SHood0";
		descriptionShort="$STR_real_V3SHood1";
	};
	class Offroad_02: CarScript
	{
		displayName="$STR_real_Offroad_020";
	};
	class Offroad_02_Wheel: CarWheel
	{
		displayName="$STR_real_Offroad_02_Wheel0";
		descriptionShort="$STR_real_Offroad_02_Wheel1";
	};
	class Offroad_02_Wheel_Ruined: Offroad_02_Wheel
	{
		displayName="$STR_real_Offroad_02_Wheel0";
		descriptionShort="$STR_real_Offroad_02_Wheel1";
	};
	class Offroad_02_Door_1_1: CarDoor
	{
		displayName="$STR_real_Offroad_02_Door_1_10";
		descriptionShort="$STR_real_Offroad_02_Door_1_11";
	};
	class Offroad_02_Door_2_1: Offroad_02_Door_1_1
	{
		displayName="$STR_real_Offroad_02_Door_2_10";
		descriptionShort="$STR_real_Offroad_02_Door_2_11";
	};
	class Offroad_02_Door_1_2: Offroad_02_Door_1_1
	{
		displayName="$STR_real_Offroad_02_Door_1_20";
		descriptionShort="$STR_real_Offroad_02_Door_1_21";
	};
	class Offroad_02_Door_2_2: Offroad_02_Door_1_1
	{
		displayName="$STR_real_Offroad_02_Door_2_20";
		descriptionShort="$STR_real_Offroad_02_Door_2_21";
	};
	class Offroad_02_Hood: CarDoor
	{
		displayName="$STR_real_Offroad_02_Hood0";
		descriptionShort="$STR_real_Offroad_02_Hood1";
	};
	class Offroad_02_Trunk: CarDoor
	{
		displayName="$STR_real_Offroad_02_Trunk0";
		descriptionShort="$STR_real_Offroad_02_Trunk1";
	};
};
