class CfgPatches
{
	class MassiveMod_Test
	{
		units[] = {"Rifle_Base"};
		weapons[] = {"Rifle_Base"};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"DZ_Weapons_Firearms"
        };
	};
};//meow
class CfgVehicles
{
	class Container_Base;
	class PlateCarrierPouches: Container_Base
	{
		inventorySlot[]+={"VestHolster"};
		class InventorySlotsOffsets
		{
			class VestHolster
			{
				// Left/Right,Forward/Back,Up/Down?
				position[] = {0,-0.025,-0.06};
				orientation[] = {0,0,0};
			};
		};
	};
	class FirstAidKit: Container_Base
	{
		inventorySlot[]+={"Belt_Left","VestHolster"};
		class InventorySlotsOffsets
		{
			class Belt_Left
			{
				position[] = {-0.05,0,0};
				orientation[] = {180,0,180};
			};
			class VestHolster
			{
				// Left/Right,Forward/Back,Up/Down?
				position[] = {0,0.04,0};
				orientation[] = {180,90,0};
			};
		};
	};
};