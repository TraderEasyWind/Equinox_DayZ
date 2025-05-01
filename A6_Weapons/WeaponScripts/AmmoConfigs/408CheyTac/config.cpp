class CfgPatches
{
	class A6_Ammunition_408
	{
		units[] = {"A6_AmmoBox_408_20rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"Ammo_A6_408"};
		ammo[] = {"Bullet_A6_408","Bullet_A6_408"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_408
	{
		name="Bullet_A6_408";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_408: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_A6_408";
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=1100;
		typicalSpeed=1100;
		airFriction = -0.00035;
		caliber=3.5;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;	
		weight=0.018;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 9;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=500;
				armorDamage=5;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=500;
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
	class A6_AmmoBox_408_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .408 Cheyenne Tactical Rounds";
		descriptionShort=".408 CheyTac boxed ammunition, 20 rounds.";
		model="DZ\weapons\ammunition\00buck_10roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\408CheyTac\408CheyTac_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=2000;
		itemSize[] = {2,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\ammunition\data\00buck_box.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\00buck_box.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\00buck_box_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\00buck_box_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\00buck_box_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_408
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
	class Ammo_A6_408: Ammunition_Base
	{
		scope=2;
		displayName=".408 Cheyenne Tactical";
 		descriptionShort=".408 Cheyenne Tactical, designated .408 CheyTac, is a specialized rimless, bottlenecked, centerfire cartridge for military long-range sniper rifles.";
 		model="A6_Weapons\Ammo\408CheyTac\408CheyTac.p3d";
		weight=100;
		count=20;
		itemSize[] = {1,2};
		ammo="Bullet_A6_408";
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
