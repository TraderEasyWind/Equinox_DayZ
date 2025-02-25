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
			"DZ_Scripts"
        };
	};
};//meow
class CfgVehicles
{
	class Container_Base;
	class FirstAidKit: Container_Base
	{
		inventorySlot[]+={"Belt_Left","VestHolster"};
		class InventorySlotsOffsets
		{
			class Belt_Left
			{
				position[] = {0.02,0.15,0};
				orientation[] = {130,0,0};
			};
			class VestHolster
			{
				position[] = {0.02,0.15,0};
				orientation[] = {130,0,0};
			};
		};
	};
};