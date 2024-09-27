class CfgPatches
{
	class SH_Gear_Consumables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Consumables"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
    class Battery9V: Inventory_Base
	{
		varQuantityInit = 100;
		varQuantityMin = 0.0;
		varQuantityMax = 100;
		varQuantityDestroyOnMin = 0;
		inventorySlot[] = {"BatteryD"};
		rotationFlags = 17;
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 100;
			energyAtSpawn = 100;
			convertEnergyToQuantity = 1;
			reduceMaxEnergyByDamageCoef = 1;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {1};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\9v.rvmat"}},{0.7,{"DZ\gear\consumables\data\9v.rvmat"}},{0.5,{"DZ\gear\consumables\data\9v_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\9v_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\9v_destruct.rvmat"}}};
				};
			};
		};
	};
};