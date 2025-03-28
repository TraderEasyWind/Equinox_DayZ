class CfgPatches
{
	class SH_Gear_Tools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical","DZ_Gear_Consumables","DZ_Gear_Tools"};
	};
};
class CfgVehicles
{
	//test
	class Inventory_Base;
	class HandSaw: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\handsaw.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\handsaw.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\handsaw_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\handsaw_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\handsaw_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Hacksaw: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\hacksaw.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\hacksaw.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\hacksaw_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\hacksaw_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\hacksaw_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};