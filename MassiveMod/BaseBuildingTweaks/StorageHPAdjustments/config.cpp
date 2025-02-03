class CfgPatches
{
	class MassiveModBaseBuildingTweaks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping","DZ_Gear_Consumables","DZ_Gear_Containers"};
	};
};//meow
class CfgVehicles
{
	class TentBase;
	class Container_Base;
	class WoodenCrate: Container_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class Barrel_ColorBase: Container_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class CamoNetShelter: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class PartyTent: TentBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class LargeTent: TentBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class MediumTent: TentBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class SeaChest: Container_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
};