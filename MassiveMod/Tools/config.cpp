class CfgPatches
{
	class MassiveModTools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};//meow
class CfgVehicles
{
	class FieldShovel;
	class MassiveMod_FieldShovel: FieldShovel
	{
	    scope = 2;
		displayName = "Field Shovel";
		descriptionShort = "A Military Field Shovel Multi-Tool. Can be used as a Shovel, And an Axe!";
		model = "\dz\gear\tools\CSLA_Field_Shovel.p3d";
		rotationFlags = 17;
		suicideAnim = "woodaxe";
		weight = 1147;
		itemSize[] = {2,5};
		fragility = 0.008;
		build_action_type = 4;
		dismantle_action_type = 4;
		openItemSpillRange[] = {30,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\CSLA_Field_Shovel.rvmat"}},{0.7,{"DZ\gear\tools\data\CSLA_Field_Shovel.rvmat"}},{0.5,{"DZ\gear\tools\data\CSLA_Field_Shovel_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\CSLA_Field_Shovel_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\CSLA_Field_Shovel_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFieldShovel";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeFieldShovel_Heavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeFieldShovel_Heavy";
				range = 3.3;
			};
		};
		class Horticulture
		{
			ToolAnim = "DIGGINGSHOVEL";
			DiggingTimeToComplete = 5.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet = "pickUpShovelLight_SoundSet";
					id = 796;
				};
				class pickUpShovel
				{
					soundSet = "pickUpShovel_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "shovel_drop_SoundSet";
					id = 898;
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
