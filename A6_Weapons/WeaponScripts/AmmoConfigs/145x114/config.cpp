class CfgPatches
{
	class A6_Ammunition_145x114
	{
		units[]={"A6_AmmoBox_145x114_10rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_145x114"};
		ammo[]={"Bullet_A6_145x114","Bullet_A6_145x114"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_145x114
	{
		name="Bullet_A6_145x114";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_A6_145x114: Bullet_Base
	{
		scope = 1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType = "Ammo_A6_145x114";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1200;
		typicalSpeed = 1200;
		airFriction = -0.00035;
		caliber = 4;
		deflecting = 5;
		damageBarrel = 800;
		damageBarrelDestroyed = 800;
		weight=0.0225;
		impactBehaviour=1;
		hitAnimation = 1;
		unconRefillModifier = 15;
		model = "dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 8;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 1000;
				armorDamage = 10;
			};
			class Blood
			{
				damage = 1000;
			};
			class Shock
			{
				damage = 1000;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
};
class cfgVehicles
{
	class Box_Base;
	class A6_AmmoBox_145x114_10rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 14.5x114mm BZT API-T Rounds";
		descriptionShort="14.5x114mm BZT API-T boxed ammunition, 10 rounds.";
		model="A6_Weapons\Ammo\145x114\145x114Box.p3d";
		rotationFlags=4;
		lootCategory="Ammo";
		weight=510;
		itemSize[] = {3,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_145x114
			{
				value=10;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_A6_145x114: Ammunition_Base
	{
		scope = 2;
		displayName = "14.5x114mm BZT API-T";
		descriptionShort = "The 14.5×114mm (.57 calibre) is a heavy machine gun and anti-materiel rifle cartridge used by the Soviet Union, the former Warsaw Pact, modern Russia, and other countries.";
		model = "A6_Weapons\Ammo\145x114\145x114.p3d";
		weight = 50;
		count = 10;
		itemSize[] = {1,3};
		ammo = "Bullet_A6_145x114";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
	};
};
