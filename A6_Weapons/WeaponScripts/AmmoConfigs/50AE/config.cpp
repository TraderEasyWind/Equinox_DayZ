class CfgPatches
{
	class A6_Ammunition_50AE
	{
		units[]={"A6_AmmoBox_50AE_30rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_50AE"};
		ammo[]={"Bullet_A6_50AE","Bullet_A6_50AE"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_50AE
	{
		name="Bullet_A6_50AE";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_50AE: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="Ammo_A6_50AE";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=1.5;
		deflecting=10;
		airFriction=-0.0026;
		initSpeed=440;
		typicalSpeed=470;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight=0.0194;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 10;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.0;
			bleedThreshold=1.0;
			defaultDamageOverride[]={{0.8,1.0}};
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=200;
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
	class A6_AmmoBox_50AE_30rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .50 Action Express Rounds";
		descriptionShort=".50 Action Express boxed ammunition, 30 rounds.";
		model="\dz\weapons\ammunition\45ACP_25rnd_box.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\50AE\50AE_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=900;
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
			class Ammo_A6_50AE
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
	class Ammo_A6_50AE: Ammunition_Base
	{
		scope=2;
		displayName=".50 Action Express";
		descriptionShort="The .50 Action Express is a large-caliber handgun cartridge. Developed in 1988 by American Evan Whildin of Action Arms, the .50 AE is one of the most powerful pistol cartridges in production.";
		model="A6_Weapons\Ammo\50AE\50AE.p3d";
		weight=30;
		count=30;
		ammo="Bullet_A6_50AE";
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
