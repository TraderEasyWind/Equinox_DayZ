class CfgPatches
{
	class MassiveModBaseCrates
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping"};
	};
};//meow
class CfgVehicles
{
	class Container_Base;
	class MassiveMod_WoodenCrateX2: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Wooden_Case0";
		descriptionShort = "$STR_CfgVehicles_Wooden_Case1";
		model = "MassiveMod\BaseBuildingTweaks\Storage\DoubleCrate.p3d";
		hologramMaterial = "wooden_case";
		hologramMaterialPath = "dz\gear\camping\data";
		slopeTolerance = 0.4;
		yawPitchRollLimit[] = {45,45,45};
		inventorySlot[] = {"Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		weight = 20000;
		itemSize[] = {10,10};
		itemBehaviour = 0;
		carveNavmesh = 1;
		canBeDigged = 1;
		rotationFlags = 2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\dz\gear\camping\data\wooden_case_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					transferToAttachmentsCoef = 0.06;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\wooden_case.rvmat"}},{0.7,{"DZ\gear\camping\data\wooden_case.rvmat"}},{0.5,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\wooden_case_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage = 8.0;
					};
					class Blood
					{
						damage = 8.0;
					};
					class Shock
					{
						damage = 8.0;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "seachest_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "seachest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MassiveMod_WoodenCrateX4: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Wooden_Case0";
		descriptionShort = "$STR_CfgVehicles_Wooden_Case1";
		model = "MassiveMod\BaseBuildingTweaks\Storage\QuadCrate.p3d";
		hologramMaterial = "wooden_case";
		hologramMaterialPath = "dz\gear\camping\data";
		slopeTolerance = 0.4;
		yawPitchRollLimit[] = {45,45,45};
		inventorySlot[] = {"Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		weight = 40000;
		itemSize[] = {10,20};
		itemBehaviour = 0;
		carveNavmesh = 1;
		canBeDigged = 1;
		rotationFlags = 2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\dz\gear\camping\data\wooden_case_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					transferToAttachmentsCoef = 0.06;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\wooden_case.rvmat"}},{0.7,{"DZ\gear\camping\data\wooden_case.rvmat"}},{0.5,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\wooden_case_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage = 8.0;
					};
					class Blood
					{
						damage = 8.0;
					};
					class Shock
					{
						damage = 8.0;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,20};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "seachest_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "seachest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MassiveMod_WoodenCrateX8: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Wooden_Case0";
		descriptionShort = "$STR_CfgVehicles_Wooden_Case1";
		model = "MassiveMod\BaseBuildingTweaks\Storage\OctoCrate.p3d";
		hologramMaterial = "wooden_case";
		hologramMaterialPath = "dz\gear\camping\data";
		slopeTolerance = 0.4;
		yawPitchRollLimit[] = {45,45,45};
		inventorySlot[] = {"Truck_01_WoodenCrate1","Truck_01_WoodenCrate2","Truck_01_WoodenCrate3","Truck_01_WoodenCrate4"};
		weight = 40000;
		itemSize[] = {10,40};
		itemBehaviour = 0;
		carveNavmesh = 1;
		canBeDigged = 1;
		rotationFlags = 2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\dz\gear\camping\data\wooden_case_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					transferToAttachmentsCoef = 0.06;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\wooden_case.rvmat"}},{0.7,{"DZ\gear\camping\data\wooden_case.rvmat"}},{0.5,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\wooden_case_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage = 8.0;
					};
					class Blood
					{
						damage = 8.0;
					};
					class Shock
					{
						damage = 8.0;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,40};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "seachest_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "seachest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};