class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_Zill
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Gerph_Zil130","nm_Flagextension"};
	};
};
class CfgSlots
{
	class Slot_Zil130Wheel_1_2
	{
		name="Zil130Wheel_1_2";
		displayName="#STR_CfgWheel0";
		selection="wheel_1_2";
		ghostIcon="set:dayz_inventory image:doublewheel";
	};
	class Slot_Zil130Wheel_2_2
	{
		name="Zil130Wheel_2_2";
		displayName="#STR_CfgWheel0";
		selection="wheel_2_2";
		ghostIcon="set:dayz_inventory image:doublewheel";
	};
};
class CfgVehicles
{
	class CarScript;
	class SimulationModule;
	class Gerph_Zil130: CarScript
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
			drive = "DRIVE_AWD";
			class Steering
			{
				maxSteeringAngle = 35;
				increaseSpeed[] = {0,50,30,30};
				decreaseSpeed[] = {0,60,50,50};
				centeringSpeed[] = {0,0,15,30};
			};
			class Throttle
			{
				reactionTime = 0.6;
				defaultThrust = 0.85;
				gentleThrust = 0.6;
				turboCoef = 2;
				gentleCoef = 0.75;
			};
			class Brake
			{
				pressureBySpeed[] = {0,0.85,10,0.7,20,0.5,40,0.4,60,0.43,80,0.46,100,0.52,120,0.7};
				reactionTime = 0.3;
				driverless = 0.1;
			};
			class Aerodynamics
			{
				frontalArea = 4.18;
				dragCoefficient = 0.56;
			};
			class Engine
			{
				torqueCurve[] = {580,0,1000,300,1300,330,2500,370,3500,340,5220,0};
				inertia = 3.6;
				frictionTorque = 90;
				rollingFriction = 2.8;
				viscousFriction = 1.5;
				rpmIdle = 750;
				rpmMin = 900;
				rpmClutch = 1250;
				rpmRedline = 4650;
			};
			class Clutch
			{
				maxTorqueTransfer = 520;
				uncoupleTime = 0.2;
				coupleTime = 0.8;
			};
		};	
	};
};
