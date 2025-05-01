class CfgPatches
{
	class A6_Ammunition_277FURY
	{
		units[]={"A6_AmmoBox_277FURY_20rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_277FURY"};
		ammo[]={"Bullet_A6_277FURY","Bullet_A6_277FURY"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_277FURY
	{
		name="Bullet_A6_277FURY";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_277FURY: Bullet_Base
    {
        scope=1;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType="Ammo_A6_277FURY";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=950;
		typicalSpeed=950;
		airFriction = -0.001;
		caliber=1.6;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.0095;
		impactBehaviour= 0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage=170;
				armorDamage = 2;
			};
			class Blood
			{
				damage=170;
			};
			class Shock
			{
				damage=100;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
    };
};
class cfgVehicles
{
	class Box_Base;
	class A6_AmmoBox_277FURY_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .277 SIG FURY HYBRID Rounds";
		descriptionShort=".277 SIG FURY boxed ammunition, 20 rounds.";
		model = "DZ\weapons\ammunition\308Win_20RoundBox.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\277FURY\277Fury_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\ammunition\data\762_box.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\762_box.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\762_box_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_277FURY
			{
				value=20;
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
	class Ammo_A6_277FURY: Ammunition_Base
	{
		scope = 2;
		displayName = ".277 SIG FURY HYBRID Rounds";
		descriptionShort = "The .277 Fury or 6.8×51mm, is a centerfire rimless bottlenecked rifle cartridge announced by SIG Sauer in late 2019. Its hybrid three-piece cartridge case has a steel case head and brass body connected by a locking washer to support high chamber pressure of 80,000 psi.";
		model="A6_Weapons\Ammo\277FURY\277FURY.p3d";
		weight = 10;
		count = 40;
		ammo = "Bullet_A6_277FURY";
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
