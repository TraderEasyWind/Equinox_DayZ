class CfgPatches
{
	class A6_Ammunition_86BLK
	{
		units[]={"A6_AmmoBox_86BLK_20rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_86BLK"};
		ammo[]={"Bullet_A6_86BLK","Bullet_A6_86BLK"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_86BLK
	{
		name="Bullet_A6_86BLK";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_86BLK: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_A6_86BLK";
		casing="FxCartridge_762";
		round="FxRound_762";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=700;
		typicalSpeed=700;
		airFriction = -0.00035;
		caliber=1.5;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight=0.0162;
		impactBehaviour= 0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage=250;
				armorDamage=2;
			};
			class Blood
			{
				damage=300;
			};
			class Shock
			{
				damage=350;
			};
		};
		class NoiseHit
		{
			strength=5;
			type="shot";
		};
    };
};
class cfgVehicles
{
	class Box_Base;
	class A6_AmmoBox_86BLK_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 8.6 Blackout GF Rounds";
		descriptionShort="8.6 AAC Blackout boxed ammunition, 20 rounds.";
		model="DZ\weapons\ammunition\556_20roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\86BLK\86box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=800;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_86BLK
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
	class Ammo_A6_86BLK: Ammunition_Base
	{
		scope = 2;
		displayName = "8.6 Blackout GF";
		descriptionShort = "The 8.6 Blackout GF ( Gorilla Fracturing ) is a round specially designed for The Fix.";
		model="A6_Weapons\Ammo\86BLK\86BLK.p3d";
		weight = 40;
		count = 20;
		ammo = "Bullet_A6_86BLK";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\TheFix\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\TheFix\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\TheFix\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\TheFix\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\TheFix\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
