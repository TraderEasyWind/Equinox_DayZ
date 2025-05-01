class CfgPatches
{
	class A6_Ammunition_300
	{
		units[]={"A6_AmmoBox_300_20rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_300"};
		ammo[]={"Bullet_A6_300","Bullet_A6_300"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_300
	{
		name="Bullet_A6_300";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_300: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_556";
		round="FxRound_556";
		spawnPileType="Ammo_A6_300";
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=600;
		typicalSpeed=650;
		airFriction = -0.00125;
		caliber=1.2;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight = 0.0045;
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
				damage=120;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
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
	class A6_AmmoBox_300_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .300 AAC Blackout Rounds";
		descriptionShort=".300 AAC Blackout boxed ammunition, 20 rounds.";
		model="DZ\weapons\ammunition\556_20roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\300Blackout\300Blackout_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=140;
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
			class Ammo_A6_300
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
	class Ammo_A6_300: Ammunition_Base
	{
		scope = 2;
		displayName = ".300 AAC Blackout FMJ";
		descriptionShort = "The .300 AAC Blackout (designated as the 300 BLK by the SAAMI and 300 AAC Blackout), also known as 7.62×35mm, is a carbine cartridge developed in the United States by Advanced Armament Corporation (AAC) for use in the M4 carbine. Its purpose is to achieve ballistics similar to the 7.62×39mm cartridge, or even more similarly, the 7.92×33mm Kurz cartridge in an AR-15 while using standard AR-15 magazines at their normal capacities.";
		model="A6_Weapons\Ammo\300Blackout\300Blackout.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_A6_300";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[] = 
					{
						{1.0,{}},
						{0.7,{}},
						{0.5,{}},
						{0.3,{}},
						{0.0,{}}
					};
				};
			};
		};
	};
};
