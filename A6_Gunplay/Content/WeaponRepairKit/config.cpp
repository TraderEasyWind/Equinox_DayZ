class CfgPatches
{
	class A6_WeaponRepairKit
	{
		units[] = {"A6_WeaponRepairKit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class A6_WeaponRepairKit: Inventory_Base
	{
		scope = 2;
		displayName = "Weapon Repair Kit";
		descriptionShort = "Supplies all necessary parts to fully repair weapons or suppressors to pristine from a ruined state.";
		model = "A6_Gunplay\Content\WeaponRepairKit\WeaponRepairKit.p3d";
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 17;
		stackedUnit = "ammo";
		quantityBar = 0;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		varQuantityDestroyOnMin = 1;
		weight = 4000;
		weightPerQuantityUnit = 0.0;
		itemSize[] = {4,3};
		fragility = 0.01;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = 
					{
						{1.0,{"A6_Gunplay\Content\WeaponRepairKit\data\weaponrepairkit.rvmat"}},
						{0.7,{"A6_Gunplay\Content\WeaponRepairKit\data\weaponrepairkit.rvmat"}},
						{0.5,{"A6_Gunplay\Content\WeaponRepairKit\data\weaponrepairkit_damage.rvmat"}},
						{0.3,{"A6_Gunplay\Content\WeaponRepairKit\data\weaponrepairkit_damage.rvmat"}},
						{0.0,{"A6_Gunplay\Content\WeaponRepairKit\data\weaponrepairkit_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFistLight";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFistHeavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFistHeavy";
				range = 2.8;
			};
		};
		soundImpactType = "wood";
	};	
};	