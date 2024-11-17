class CfgPatches
{
	class MassiveModCaches
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};//meow
class CfgVehicles
{
	class Container_Base;
	class Item_Base;
	class CombatKnife;
	class MassiveMod_KeyBase: CombatKnife
	{
		scope=0;
		weight = 15;
		model = "MassiveMod\Caches\Keys\Key.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier1\Tier1Key_Co.paa"};
		itemSize[] = {1,1};
	};
	class MassiveMod_Tier1Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 1 Cache Key";
		descriptionShort = "A Green Skeleton Key, Used for Unlocking Tier 1 Caches found in Tier 1 zones.";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier1\Tier1Key_Co.paa"};
	};
	class MassiveMod_Tier2Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 2 Cache Key";
		descriptionShort = "A Blue Skeleton Key, Used for Unlocking Tier 2 Caches found in Tier 2 zones.";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier2\Tier2Key_co.paa"};
	};
	class MassiveMod_Tier3Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 3 Cache Key";
		descriptionShort = "A Red Skeleton Key, Used for Unlocking Tier 3 Caches found in Tier 3 zones.";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier3\Tier3Key_co.paa"};
	};
	class MassiveMod_Tier4Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 4 Cache Key";
		descriptionShort = "A Gold Skeleton Key, Used for Unlocking Tier 4 Caches found in Tier 4 zones.";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier4\Tier4Key_Co.paa"};
	};
	class MassiveMod_Tier5Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 5 Cache Key";
		descriptionShort = "A Black Skeleton Key, Used for Unlocking Tier 5 Caches";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier5\Tier5Key_Co.paa"};
	};
	class MassiveModCrate_Base: Container_Base
	{
		scope=0;
		weight = 50000;
		itemBehaviour = 0;
		itemSize[] = {100,100};
		carveNavmesh = 1;
		physLayer="item_large";
		canBeDigged = 0;
		rotationFlags = 2;
		openable = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\sea_chest.rvmat"}},{0.7,{"DZ\gear\camping\data\sea_chest.rvmat"}},{0.5,{"DZ\gear\camping\data\sea_chest_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\sea_chest_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\sea_chest_destruct.rvmat"}}};
				};
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
	class MassiveMod_CrateTier1: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 1 Cache";
		descriptionShort = "A wooden Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier1\Tier1Crate.p3d";
		attachments[]={"Vest","Case","ClothingPackage"};
		itemsCargoSize[] = {10,30};
	};
	class MassiveMod_CrateTier1_2: MassiveMod_CrateTier1{};
	class MassiveMod_CrateTier1_3: MassiveMod_CrateTier1{};
	class MassiveMod_CrateTier1_4: MassiveMod_CrateTier1{};
	class MassiveMod_CrateTier2: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 2 Cache";
		descriptionShort = "A Large wooden Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier2\Tier2Crate.p3d";
		attachments[]={"Vest","Case"};
		itemsCargoSize[] = {10,30};
	};
	class MassiveMod_CrateTier2_2: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_3: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_4: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_5: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_6: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier3: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 3 Cache";
		descriptionShort = "A Military Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier3\Tier3Crate.p3d";
		attachments[]={"Vest","Headgear","Case","ClothingPackage"};
		itemsCargoSize[] = {10,30};
	};
	class MassiveMod_CrateTier3_2: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_3: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_4: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_5: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_6: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_7: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_8: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier4: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 4 Cache";
		descriptionShort = "A Large Military Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier4\Tier4Crate.p3d";
		attachments[]={"Vest","Back","Case","ClothingPackage"};
		itemsCargoSize[] = {10,30};
	};
	class MassiveMod_CrateTier4_2: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_3: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_4: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_5: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_6: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_7: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_8: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_9: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier5: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 5 Cache";
		descriptionShort = "A Large Military Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier5\Tier5Crate.p3d";
		attachments[]={"Vest","Back","Case","ClothingPackage","Slot_Melee"};
		itemsCargoSize[] = {10,40};
	};
	class MassiveMod_CrateTier5_2: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_3: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_4: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_5: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_6: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_7: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_8: MassiveMod_CrateTier5{};
};