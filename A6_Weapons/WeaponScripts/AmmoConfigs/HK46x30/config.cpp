class CfgPatches
{
	class A6_Ammunition_46x30
	{
		units[]={"A6_AmmoBox_46x30_30rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_46x30"};
		ammo[]={"Bullet_A6_46x30","Bullet_A6_46x30"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_46x30
	{
		name="Bullet_A6_46x30";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_46x30: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="Ammo_A6_46x30";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.9;
		deflecting=30;
		initSpeed=680;
		typicalSpeed=680;
		airFriction=-0.00268;
		damageBarrel = 150;
		damageBarrelDestroyed = 200;
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
				damage=85;
				armorDamage = 2;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=65;
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
	class A6_AmmoBox_46x30_30rnd: Box_Base
	{
		scope=2;
		displayName="Boxed HK 4.6×30mm AP SX Rounds";
		descriptionShort="HK 4.6×30mm boxed ammunition, 30 rounds.";
		model="dz\weapons\ammunition\22_50RoundBox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\HK46x30\46x30mm_box_co.paa"};
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
			class Ammo_A6_46x30
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
	class Ammo_A6_46x30: Ammunition_Base
	{
		scope=2;
		displayName="HK 4.6×30mm AP SX";
		descriptionShort="A 4.6x30mm HK AP SX cartridge with a 2 gram copper-plated steel core armor-piercing bullet in a brass case. The AP SX cartridge provides the highest penetration capability of the 4.6x30mm caliber, allowing the shooter to pierce basic and intermediate ballistic body protections in addition to providing outstanding results against some specialized protection models.";
		model="A6_Weapons\Ammo\HK46x30\HK46x30.p3d";
		weight=4;
		count=50;
		ammo="Bullet_A6_46x30";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\MP7A2\data\ammo.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP7A2\data\ammo.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP7A2\data\ammo_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP7A2\data\ammo_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP7A2\data\ammo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};