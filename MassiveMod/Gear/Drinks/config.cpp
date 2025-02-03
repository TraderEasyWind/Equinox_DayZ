class CfgPatches
{
	class MassiveMod_Gear_Drinks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Drinks"};
	};
};
class CfgVehicles
{
	class Bottle_Base;
	class FilteringBottle: Bottle_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};