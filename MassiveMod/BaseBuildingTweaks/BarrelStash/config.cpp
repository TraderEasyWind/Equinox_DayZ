class CfgPatches
{
	class MassiveModBarrelStash
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping","DZ_Gear_Containers"};
	};
};//meow
class CfgVehicles
{
	class Barrel_ColorBase;
	class MassiveMod_BarrelStash_ColorBase: Barrel_ColorBase
	{
		displayName = "$STR_CfgVehicles_Barrel_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Barrel_ColorBase1";
		model = "MassiveMod\BaseBuildingTweaks\BarrelStash\BarelStash.p3d";
		overrideDrawArea = "8.0";
		forceFarBubble = "true";
		slopeTolerance = 0.2;
		yawPitchRollLimit[] = {45,45,45};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		quantityBar = 1;
		carveNavmesh = 1;
		canBeDigged = 0;
		heavyItem = 1;
		inventorySlot[] = {""};
		weight = 10000;
		itemSize[] = {10,15};
		itemBehaviour = 0;
		stackedUnit = "ml";
		randomQuantity = 2;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 200000.0;
		absorbency = 0.1;
		physLayer = "item_large";
		allowOwnedCargoManipulation = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
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
			itemsCargoSize[] = {10,15};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class AnimationSources
		{
			class Lid
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.01;
			};
			class Lid2
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "barrel_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpBarrelLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBarrel_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "barrel_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MassiveMod_BarrelStash_Green: MassiveMod_BarrelStash_ColorBase
	{
		scope = 2;
		color = "Green";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_green_co.paa"};
		hologramMaterial = "barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class MassiveMod_BarrelStash_Blue: MassiveMod_BarrelStash_ColorBase
	{
		scope = 2;
		color = "Blue";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_blue_co.paa"};
		hologramMaterial = "barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\barrel_blue.rvmat"}},{0.7,{"DZ\gear\containers\data\barrel_blue.rvmat"}},{0.5,{"DZ\gear\containers\data\barrel_blue_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\barrel_blue_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\barrel_blue_destruct.rvmat"}}};
				};
			};
		};
	};
	class MassiveMod_BarrelStash_Red: MassiveMod_BarrelStash_ColorBase
	{
		scope = 2;
		color = "Red";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_red_co.paa"};
		hologramMaterial = "barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\barrel_red.rvmat"}},{0.7,{"DZ\gear\containers\data\barrel_red.rvmat"}},{0.5,{"DZ\gear\containers\data\barrel_red_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\barrel_red_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\barrel_red_destruct.rvmat"}}};
				};
			};
		};
	};
	class MassiveMod_BarrelStash_Yellow: MassiveMod_BarrelStash_ColorBase
	{
		scope = 2;
		color = "Yellow";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_yellow_co.paa"};
		hologramMaterial = "barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\barrel_yellow.rvmat"}},{0.7,{"DZ\gear\containers\data\barrel_yellow.rvmat"}},{0.5,{"DZ\gear\containers\data\barrel_yellow_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\barrel_yellow_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\barrel_yellow_destruct.rvmat"}}};
				};
			};
		};
	};
};
