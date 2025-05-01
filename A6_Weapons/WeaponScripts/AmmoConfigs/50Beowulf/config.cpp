class CfgPatches
{
	class A6_Ammunition_50Beo
	{
		units[]={"A6_AmmoBox_50Beo_20rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_50Beo"};
		ammo[]={"Bullet_A6_50Beo","Bullet_A6_50Beo"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_50Beo
	{
		name="Bullet_A6_50Beo";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_50Beo: Bullet_Base
    {
        scope=1;
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		spawnPileType="Ammo_A6_50Beo";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=1.5;
		deflecting=10;
		airFriction = -0.00035;
		initSpeed=540;
		typicalSpeed=580;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight=0.0194;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 10;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.0;
			bleedThreshold=1.0;
			defaultDamageOverride[]={{0.5,1.0}};
			class Health
			{
				damage=190;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=250;
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
	class A6_AmmoBox_50Beo_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .50 Beowulf Rounds";
		descriptionShort=".50 Beowulf boxed ammunition, 20 rounds.";
		model="DZ\weapons\ammunition\00buck_10roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\50Beowulf\Data\50beowulf_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=1000;
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
			class Ammo_A6_50Beo
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
	class Ammo_A6_50Beo: Ammunition_Base
	{
		scope=2;
		displayName=".50 Beowulf";
		descriptionShort="The .50 Beowulf is a 12mm caliber rifle cartridge developed by Bill Alexander of Alexander Arms for use in an AR-15 and AK-50 rifle.";
		model="A6_Weapons\Ammo\50Beowulf\Beowulf_Bullet.p3d";
		weight=50;
		count=20;
		ammo="Bullet_A6_50Beo";
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
