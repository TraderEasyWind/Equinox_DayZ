class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_TFUAZ
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"TF_UAZ5131","H4_UAZ452A","nm_Flagextension"};
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
	class Back;
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
	class CfgSlots;
	class TF_UAZ5131;
	class TF_UAZ3151_Green: CarScript
	{
		attachmentSlots[] -= {"TF_UAZ3151_Wheel_spare_1"};
		class GUIInventoryAttachmentsProps
		{
			class Chassis
			{
				
				attachmentSlots[] -= {"TF_UAZ3151_Wheel_spare_1"};
			
			};
		};
	};
};	



