class CfgPatches
{
	class A6_Ammunition_9x19
	{
		units[] = {"A6_AmmoBox_9x19AP_25rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"Ammo_9x19AP63"};
		ammo[] = {"Bullet_9x19AP63","Bullet_9x19AP63"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_9x19AP63
	{
		name="Bullet_9x19AP63";
	};
};
class cfgAmmo
{
    class Bullet_Base;
	class Bullet_9x19AP63: Bullet_Base
    {
		scope = 1;
		casing = "FxCartridge_9mm";
		round = "FxRound_9mm";
		spawnPileType = "Ammo_9x19AP63";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 1.2;
		deflecting = 30;
		initSpeed = 450;
		typicalSpeed = 500;
		airFriction = -0.0023;
		damageBarrel = 200;
		damageBarrelDestroyed = 200;
		weight = 0.009;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 6;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 70;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_9x19AP63: Ammunition_Base
	{
		scope = 2;
		displayName = "9x19mm AP 6.3";
		descriptionShort = "9x19 mm Parabellum AP 6.3 cartridge. With a two-part controlled fragmenting projectile, an armor-piercing bullet that features a brass sabot and a hardened steel penetrator of 6.3mm. Thanks to the design of the AP bullet (Armor-Piercing) and despite having an average muzzle velocity relative to other cartridges of the same caliber, it has capabilities of piercing basic ballistic body protection along with some intermediate models.";
		model="A6_Weapons\Ammo\9x19\9x19AP.p3d";
		iconCartridge = 1;
		weight = 12;
		count = 50;
		ammo = "Bullet_9x19AP63";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
	};
};
class cfgVehicles
{
	class Box_Base;
	class A6_AmmoBox_9x19AP_25rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 9x19mm AP 6.3 Rounds";
		descriptionShort = "9x19mm AP 6.3 boxed ammunition, 25 Rounds.";
		model = "dz\weapons\ammunition\45acp_25rnd_box.p3d";
		debug_ItemCategory = 5;
		rotationFlags = 17;
		weight = 305;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\9x19\data\camo_9x19ap_ammobox_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\ammunition\data\45cal_box.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\45cal_box.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_9x19AP63
			{
				value = 25;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
};