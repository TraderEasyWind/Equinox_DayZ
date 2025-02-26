class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_Kamaz
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MDZ_Kamaz_data","nm_Flagextension"};
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
	class Kamaz_base;
	class KamazWheel: CarWheel
	{
		inventorySlot[]+=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
	class KamazWheel_Ruined: KamazWheel
	{
		inventorySlot[]+=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
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

//	class H4_Zil131_FuelTank_Green: H4_Zil131_Green
//  class Kamaz: Kamaz_base	
//	class KamazCovered: Kamaz
//	class KamazFuel: Kamaz_base