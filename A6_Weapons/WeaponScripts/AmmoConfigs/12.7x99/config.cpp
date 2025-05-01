class CfgPatches
{
	class A6_Ammunition_127x99
	{
		units[]={"A6_AmmoBox_127x99_10rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_127x99"};
		ammo[]={"Bullet_A6_127x99","Bullet_A6_127x99"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_127x99
	{
		name="Bullet_A6_127x99";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_127x99: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_A6_127x99";
		hit = 17;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=928;
		typicalSpeed=928;
		airFriction = -0.00035;
		caliber=3.5;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight=0.02;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 12;
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
	class A6_AmmoBox_127x99_10rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .50 Cal. BMG Rounds";
		descriptionShort=".50 Cal. BMG boxed ammunition, 10 rounds.";
		model="DZ\weapons\ammunition\00buck_10roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\12.7x99\12.7x99_box_co.paa"};
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
			class Ammo_A6_127x99
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
	class Ammo_A6_127x99: Ammunition_Base
	{
		scope=2;
		displayName=".50 BMG M33";
		descriptionShort="The .50 Browning Machine Gun (.50 BMG, 12.7×99mm NATO) is a cartridge developed for the Browning .50 caliber machine gun in the late 1910s.";
		model="A6_Weapons\Ammo\12.7x99\127x99.p3d";
		weight=150;
		count=10;
		itemSize[] = {1,2};
		ammo="Bullet_A6_127x99";
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
