class CfgPatches
{
	class A6_Ammunition_127x55
	{
		units[]={"A6_AmmoBox_127x55_10rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_127x55"};
		ammo[]={"Bullet_A6_127x55","Bullet_A6_127x55"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_127x55
	{
		name="Bullet_A6_127x55";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_127x55: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_A6_127x55";
		hit = 14;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=450;
		typicalSpeed=450;
		airFriction = -0.00035;
		caliber=2.5;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight=0.02;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 15;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=400;
				armorDamage=4;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=400;
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
	class A6_AmmoBox_127x55_10rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 12.7×55mm STs-130VPS Rounds";
		descriptionShort="12.7×55mm STs-130VPS boxed ammunition, 10 rounds.";
		model="DZ\weapons\ammunition\00buck_10roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\127x55\127x55_AP_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=1500;
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
			class Ammo_A6_127x55
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
	class Ammo_A6_127x55: Ammunition_Base
	{
		scope=2;
		displayName="12.7×55mm STs-130VPS";
		descriptionShort="12.7×55mm STs-130VPS Rounds.";
		model="A6_Weapons\Ammo\127x55\127x55.p3d";
		weight=150;
		count=20;
		ammo="Bullet_A6_127x55";
		itemSize[] = {1,2};
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
