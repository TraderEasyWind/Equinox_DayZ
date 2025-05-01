class CfgPatches
{
	class A6_Ammunition_57x28
	{
		units[]={"A6_AmmoBox_57x28_30rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_57x28"};
		ammo[]={"Bullet_A6_57x28","Bullet_A6_57x28"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_57x28
	{
		name="Bullet_A6_57x28";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_57x28: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="Ammo_A6_57x28";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.9;
		deflecting=30;
		initSpeed=715;
		typicalSpeed=715;
		airFriction=-0.00268;
		damageBarrel = 150;
		damageBarrelDestroyed = 150;
		weight=0.002;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 10;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage=80;
				armorDamage = 2;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
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
	class A6_AmmoBox_57x28_30rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 5.7x28mm SS190 Rounds";
		descriptionShort="5.7x28mm FN SS190 boxed ammunition, 30 rounds.";
		model="dz\weapons\ammunition\22_50RoundBox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\5.7x28FN\5.7x28FN_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=120;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\ammunition\data\22LR_50RoundBox.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\22LR_50RoundBox.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\22LR_50RoundBox_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\22LR_50RoundBox_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\22LR_50RoundBox_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_57x28
			{
				value=30;
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
	class Ammo_A6_57x28: Ammunition_Base
	{
		scope=2;
		displayName="5.7x28mm SS197SR";
		descriptionShort="A 5.7x28mm FN SS190 cartridge with a 2 gram armor-piercing bullet with a steel penetrator over an aluminum core with a reinforced copper jacket, in a brass case. Thanks to its muzzle velocity and design, this cartridge is capable of piercing basic ballistic body protections and provides excellent results against intermediate protection models.";
		model="A6_Weapons\Ammo\5.7x28FN\57x28FN.p3d";
		weight=4;
		count=50;
		ammo="Bullet_A6_57x28";
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