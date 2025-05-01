class CfgPatches
{
	class A6_Ammunition_68SPC
	{
		units[]={"A6_AmmoBox_68SPC_20rnd"};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]={"Ammo_A6_68SPC"};
		ammo[]={"Bullet_A6_68SPC","Bullet_A6_68SPC"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_68SPC
	{
		name="Bullet_A6_68SPC";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_A6_68SPC: Bullet_Base
    {
        scope=1;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType="Ammo_A6_68SPC";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=750;
		typicalSpeed=800;
		airFriction = -0.001;
		caliber=1.3;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.0095;
		impactBehaviour= 0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage=135;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=135;
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
	class A6_AmmoBox_68SPC_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 6.8mm Remington SPC Rounds";
		descriptionShort="6.8mm Remington SPC boxed ammunition, 20 rounds.";
		model="DZ\weapons\ammunition\556_20roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\68SPC\68_20roundbox_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=160;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[] = 
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
			class Ammo_A6_68SPC
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
	class Ammo_A6_68SPC: Ammunition_Base
	{
		scope = 2;
		displayName = "6.8mm Remington SPC";
		descriptionShort = "The 6.8mm SPC cartridge was designed to address the deficiencies of the terminal ballistics of the 5.56×45mm NATO cartridge currently in service with the armed forces of all NATO-aligned countries. The cartridge was the result of the Enhanced Rifle Cartridge Program. The 6.8 SPC (6.8×43mm) was initially developed by Master Sergeant Steve Holland and Chris Murray, a United States Army Marksmanship Unit gunsmith, to offer superior downrange lethality over the 5.56 NATO/.223 Remington in an M16-pattern service rifle with minimal loss of magazine capacity and a negligible increase in recoil.";
		model="A6_Weapons\Ammo\68SPC\68SPCReg.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_A6_68SPC";
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
