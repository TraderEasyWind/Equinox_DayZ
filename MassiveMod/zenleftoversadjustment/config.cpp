class CfgPatches
{
	class MM_ZenLeftovers
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Gear_Drinks"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class SpaghettiCan;
	class BakedBeansCan;
	class PeachesCan;
	class Pajka;
	class Pate;
	class BrisketSpread;
	class PorkCan;
	class SodaCan_Pipsi;
	class SodaCan_Cola;
	class SodaCan_Spite;
	class SodaCan_Kvass;
	class MM_Store_SpaghettiCan: SpaghettiCan{};
	class MM_Store_BakedBeansCan: BakedBeansCan{};
	class MM_Store_PeachesCan: PeachesCan{};
	class MM_Store_Pajka : Pajka{};
	class MM_Store_Pate: Pate{};
	class MM_Store_BrisketSpread: BrisketSpread{};
	class MM_Store_PorkCan: PorkCan{};
	class MM_Store_SodaCan_Pipsi: SodaCan_Pipsi{};
	class MM_Store_SodaCan_Cola: SodaCan_Cola{};
	class MM_Store_SodaCan_Spite: SodaCan_Spite{};
	class MM_Store_SodaCan_Kvass: SodaCan_Kvass{};
	class MM_EmptyFoodCan: Inventory_Base
	{
		scope = 0;
		displayName = "Empty Can";
		descriptionShort = "$STR_BakedBeansCan1";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = {2,2};
		weight = 40;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class MM_EmptyFoodCan_Beans: MM_EmptyFoodCan
	{
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"MassiveMod\zenleftoversadjustment\Data\deez_beans_empty_co.paa"
		};
	};
	class MM_EmptyFoodCan_Peaches: MM_EmptyFoodCan
	{
		scope=2;
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\canned_peaches_empty_co.paa"};
	};
	class MM_EmptyFoodCan_Spaghetti: MM_EmptyFoodCan
	{
		scope=2;
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\canned_spaghetti_empty_co.paa"};
	};
	class MM_EmptyFoodCan_Bacon: MM_EmptyFoodCan
	{
		scope=2;
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\tactical_bacon_empty_co.paa"};
	};
	class MM_EmptyFoodCan_Unknown: MM_EmptyFoodCan
	{
		scope=2;
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\unknownfoodcan_empty_co.paa"};
	};
	class MM_FoodCan_100g_Opened_ColorBase: Inventory_Base
	{
		debug_ItemCategory = 6;
		model = "\dz\gear\food\FoodCan_100g_open.p3d";
		itemSize[] = {1,1};
		weight = 15;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_white.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.7,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_white.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.5,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_white_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0.3,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_white_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0.0,{"DZ\gear\food\data\FoodCan_100g_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_white_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"}}};
				};
			};
		};
	};
	class MM_Pajka_Empty: MM_FoodCan_100g_Opened_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\foodcan_100g_pajka_empty_co.paa"};
		displayName = "Empty Can";
		descriptionShort="$STR_Pajka1";
	};
	class MM_Pate_Empty: MM_FoodCan_100g_Opened_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\foodcan_100g_liver_empty_co.paa"};
		displayName = "Empty Can";
		descriptionShort="$STR_Pate1";
	};
	class MM_Brisket_Empty: MM_FoodCan_100g_Opened_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\foodcan_100g_brisket_empty_co.paa"};
		displayName = "Empty Can";
		descriptionShort="$STR_BrisketSpread1";
	};
	class MM_FoodCan_250g_Opened_ColorBase: Inventory_Base
	{
		displayName = "Empty Can";
		descriptionShort="$STR_Lunchmeat1";
		debug_ItemCategory = 6;
		model = "\dz\gear\food\FoodCan_250g_open.p3d";
		itemSize[] = {2,1};
		weight = 15;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1.0,{"DZ\gear\food\data\FoodCan_250g.rvmat"}},{0.7,{"DZ\gear\food\data\FoodCan_250g.rvmat"}},{0.5,{"DZ\gear\food\data\FoodCan_250g_damage.rvmat"}},{0.3,{"DZ\gear\food\data\FoodCan_250g_damage.rvmat"}},{0.0,{"DZ\gear\food\data\FoodCan_250g_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class MM_FoodCan_250g_CatEmpty: MM_FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\foodcan_250g_cat_empty_co.paa"};
		displayName = "Empty Can";
		descriptionShort="$STR_CatFoodCan1";
	};
	class MM_FoodCan_250g_DogEmpty: MM_FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\foodcan_250g_dog_empty_co.paa"};
		displayName = "Empty Can";
		descriptionShort="$STR_DogFoodCan1";
	};
	class MM_FoodCan_250g_PorkEmpty: MM_FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"MassiveMod\zenleftoversadjustment\Data\foodcan_250g_pork_empty_co.paa"};
		displayName = "Empty Can";
		descriptionShort="$STR_PorkCan1";
	};
};