class CfgPatches
{
	class A6_Ammunition_500SW
	{
		units[]={"A6_AmmoBox_500SW_30rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_500SW"};
		ammo[]={"Bullet_A6_500SW","Bullet_A6_500SW"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_500SW
	{
		name="Bullet_A6_500SW";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_500SW: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_Bullet_A6_500SW";
		round="FxRound_Bullet_A6_500SW";
		spawnPileType="Ammo_A6_500SW";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=1.5;
		deflecting=10;
		airFriction=-0.0026;
		initSpeed=500;
		typicalSpeed=550;
		weight=0.0194;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.0;
			bleedThreshold=1.0;
			defaultDamageOverride[]={{0.8,1.0}};
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
	class FxCartridge;
	class FxRound;
	class FxCartridge_Bullet_A6_500SW: FxCartridge
	{
		model="A6_Weapons\Ammo\500SW\500SWSingle.p3d";
	};
	class FxRound_Bullet_A6_500SW: FxRound
	{
		model="A6_Weapons\Ammo\500SW\500SWSingle.p3d";
	};
	class A6_AmmoBox_500SW_30rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .500 S&W Magnum Rounds";
		descriptionShort=".500 S&W Magnum boxed ammunition, 30 rounds.";
		model="\dz\weapons\ammunition\45ACP_25rnd_box.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\500SW\500SW_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=1200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\ammunition\data\45cal_box.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\45cal_box.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\45cal_box_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\45cal_box_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_500SW
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
	class Ammo_A6_500SW: Ammunition_Base
	{
		scope=2;
		displayName=".500 S&W Magnum";
		descriptionShort=".500 S&W Magnum (12.7×41mmSR) is a .50 caliber semi-rimmed revolver cartridge developed by Cor-Bon in partnership with the Smith & Wesson";
		model="A6_Weapons\Ammo\500SW\500SW.p3d";
		weight=40;
		count=30;
		ammo="Bullet_A6_500SW";
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
