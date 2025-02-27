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
	class Clothing;
	class Container_Base;
	class PlateCarrierHolster: Clothing
	{
		inventorySlot[]+={"VestPouch"};
		class InventorySlotsOffsets
		{
			class VestPouch
			{
				// Left/Right,Forward/Back,Up/Down?
				position[] = {0.02,0.01,0.06};
				orientation[] = {0,0,0};
			};
		};
	};
	class PlateCarrierPouches: Container_Base
	{
		inventorySlot[]+={"VestHolster"};
		class InventorySlotsOffsets
		{
			class VestHolster
			{
				// Left/Right,Forward/Back,Up/Down?
				position[] = {0,-0.015,-0.06};
				orientation[] = {0,0,0};
			};
		};
	};
	class MassTacticalBag: Container_Base
	{
		inventorySlot[]+={"VestPouch"};
		class InventorySlotsOffsets
		{
			class VestPouch
			{
				position[] = {0,0.01,0.07};
				orientation[] = {0,0,0};
			};
		};
	};
	class FirstAidKit: Container_Base
	{
		inventorySlot[]+={"Belt_Left","VestHolster","VestPouch"};
		class InventorySlotsOffsets
		{
			class Belt_Left
			{
				position[] = {-0.05,0,0};
				orientation[] = {180,0,180};
			};
			class VestPouch
			{
				position[] = {0,0.05,0.07};
				orientation[] = {180,90,0};
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