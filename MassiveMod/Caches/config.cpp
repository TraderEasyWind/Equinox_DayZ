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
		descriptionShort = "A Green Skeleton Key, Used for Unlocking Tier 1 Caches found in Tier 1 zones. 'Spearhead'";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier1\Tier1Key_Co.paa"};
	};
	class MassiveMod_Tier2Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 2 Cache Key";
		descriptionShort = "A Blue Skeleton Key, Used for Unlocking Tier 2 Caches found in Tier 2 zones.'Spearhead'";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier2\Tier2Key_co.paa"};
	};
	class MassiveMod_Tier3Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 3 Cache Key";
		descriptionShort = "A Red Skeleton Key, Used for Unlocking Tier 3 Caches found in Tier 3 zones.'Spearhead'";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier3\Tier3Key_co.paa"};
	};
	class MassiveMod_Tier4Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 4 Cache Key";
		descriptionShort = "A Gold Skeleton Key, Used for Unlocking Tier 4 Caches found in Tier 4 zones.'Spearhead'";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier4\Tier4Key_Co.paa"};
	};
	class MassiveMod_Tier5Key: MassiveMod_KeyBase
	{
		scope=2;
		displayName = "Tier 5 Cache Key";
		descriptionShort = "A Black Skeleton Key, Used for Unlocking Tier 5 Caches found in special Admin Placed Events'Spearhead'";
		hiddenSelectionsMaterials[]={"MassiveMod\Caches\Keys\Tier1\Key.rvmat"};
		hiddenSelectionsTextures[]={"MassiveMod\Caches\Keys\Tier5\Tier5Key_Co.paa"};
	};
	class MassiveModCrate_Base: Container_Base
	{
		scope=0;
		weight = 10000;
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
		attachments[]={"Vest","Shoulder","Case","ClothingPackage"};
		itemsCargoSize[] = {10,6};
	};
	class MassiveMod_CrateTier1_Food_Meds: MassiveMod_CrateTier1{};
	class MassiveMod_CrateTier1_Tools: MassiveMod_CrateTier1{};
	class MassiveMod_CrateTier1_Guns: MassiveMod_CrateTier1{};
	class MassiveMod_CrateTier2: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 2 Cache";
		descriptionShort = "A Large wooden Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier2\Tier2Crate.p3d";
		attachments[]={"Vest","Shoulder","Case"};
		itemsCargoSize[] = {10,8};
	};
	class MassiveMod_CrateTier2_Mosin: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_SKS: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_SVT: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_PPSH: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier2_MP153: MassiveMod_CrateTier2{};
	class MassiveMod_CrateTier3: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 3 Cache";
		descriptionShort = "A Military Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier3\Tier3Crate.p3d";
		attachments[]={"Vest","Headgear","Shoulder","Case","ClothingPackage"};
		itemsCargoSize[] = {10,9};
	};
	class MassiveMod_CrateTier3_AKM: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_AK74: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_AK101: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_M4A1: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_TacticalMP153: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_VSS: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier3_AVS: MassiveMod_CrateTier3{};
	class MassiveMod_CrateTier4: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 4 Cache";
		descriptionShort = "A Large Military Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier4\Tier4Crate.p3d";
		attachments[]={"Vest","Back","Shoulder","Case","ClothingPackage"};
		itemsCargoSize[] = {10,13};
		class Cargo
		{
			itemsCargoSize[] = {10,13};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class MassiveMod_CrateTier4_SVD: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_FAL: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_M417: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_M24A3: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_AWM: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_WolfAR15: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_Vaiga: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier4_M4A1: MassiveMod_CrateTier4{};
	class MassiveMod_CrateTier5: MassiveModCrate_Base
	{
		scope = 2;
		displayName = "Tier 5 Cache";
		descriptionShort = "A Large Military Cache Containing Valuable Goodies, Weapons, Clothing. Equipment to help you further survive in the apocalypse. To Open this Item you'll need to FIND some sort of Key.";
		model = "MassiveMod\Caches\Tier5\Tier5Crate.p3d";
		attachments[]={"Vest","Back","Shoulder","Case","ClothingPackage","Slot_Melee"};
		itemsCargoSize[] = {10,15};
	};
	class MassiveMod_CrateTier5_M300: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_M24A3: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_Kivaari: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_AWM: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_M98B: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_PKM: MassiveMod_CrateTier5{};
	class MassiveMod_CrateTier5_338: MassiveMod_CrateTier5{};
};