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
 // class TF_UAZ3151_Wheel;
//	class H4_UAZ452A_Wheel;
//	class MassiveMod_UAZ_Wheel: H4_UAZ452A_Wheel
//	{
//	  displayName = "UAZ Wheel";
//	  descriptionShort = "Massive Mod UAZ Wheel";
//	  inventorySlot[] = {"H4_UAZ452A_Wheel_1_1","H4_UAZ452A_Wheel_1_2","H4_UAZ452A_Wheel_2_1","H4_UAZ452A_Wheel_2_2","H4_UAZ452A_Wheel_spare_1","TF_UAZ3151_Wheel_1_1","TF_UAZ3151_Wheel_1_2","TF_UAZ3151_Wheel_2_1","TF_UAZ3151_Wheel_2_2"};
//	};
//	class H4_UAZ452A_Medical: CarScript
//	{
//		attachments[] += {"Material_FPole_Flag"};
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
};

//	class H4_Zil131_FuelTank_Green: H4_Zil131_Green
//  class Kamaz: Kamaz_base	
//	class KamazCovered: Kamaz
//	class KamazFuel: Kamaz_base