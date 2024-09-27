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
	class MassiveMod_SledgeHammer: Inventory_Base
	{
		scope = 2;
		debug_ItemCategory = 2;
		displayName = "$STR_CfgVehicles_SledgeHammer0";
		descriptionShort = "$STR_CfgVehicles_SledgeHammer1";
		model = "\dz\gear\tools\Sledge_Hammer.p3d";
		itemInfo[] = {"SledgeHammer"};
		rotationFlags = 12;
		weight = 5000;
		itemSize[] = {2,6};
		itemBehaviour = 2;
		openItemSpillRange[] = {30,50};
		inventorySlot[] = {"Shoulder","Melee"};
		isMeleeWeapon = 1;
		build_action_type = 16;
		dismantle_action_type = 16;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\Sledge_Hammer.rvmat"}},{0.7,{"DZ\gear\tools\data\Sledge_Hammer.rvmat"}},{0.5,{"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\Sledge_Hammer_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSledgeHammer";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeSledgeHammer_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeSledgeHammer_Heavy";
				range = 3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet = "hatchet_pickup_light_SoundSet";
					id = 796;
				};
				class pickup
				{
					soundSet = "hatchet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "woodaxe_drop_SoundSet";
					id = 898;
				};
				class SledgeWoodHammer_loop
				{
					soundSet = "SledgeWoodHammer_loop_SoundSet";
					id = 1117;
				};
				class SledgeWoodHammer_end
				{
					soundSet = "SledgeWoodHammer_end_SoundSet";
					id = 1118;
				};
				class ShoulderR_Hide
				{
					soundset = "ShoulderR_Hide_SoundSet";
					id = 1210;
				};
				class ShoulderR_Show
				{
					soundset = "ShoulderR_Show_SoundSet";
					id = 1211;
				};
			};
		};
	};
};