class CfgPatches
{
	class A6_Ammunition_338
	{
		units[] = {"A6_AmmoBox_338_20rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"Ammo_A6_338"};
		ammo[] = {"Bullet_A6_338","Bullet_A6_338"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_A6_338
	{
		name="Bullet_A6_338";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    /*
    class Bullet_338_UCW: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_338_UCW";
		hit=13;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=900;
		typicalSpeed=900;
		airFriction = -0.00035;
		caliber=1.3;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;	
		weight=0.0162;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=300;
				armorDamage=2;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=300;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
    };
    class Bullet_338_FMJ: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_338_FMJ";
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=950;
		typicalSpeed=950;
		airFriction = -0.00035;
		caliber=1.6;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;	
		weight=0.0162;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=320;
				armorDamage=2.5;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=320;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
    };
    class Bullet_338_AP: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_338_AP";
		hit=16;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=1020;
		typicalSpeed=1020;
		airFriction = -0.00035;
		caliber=2.1;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;	
		weight=0.0162;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=340;
				armorDamage=4;
			};
			class Blood
			{
				damage=500;
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
    };*/
    class Bullet_A6_338: Bullet_Base
    {
        scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_A6_338";
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=950;
		typicalSpeed=950;
		airFriction = -0.00035;
		caliber=1.6;
		deflecting=10;
		damageBarrel=600;
		damageBarrelDestroyed=600;	
		weight=0.0162;
		impactBehaviour=0;
		hitAnimation = 1;
		unconRefillModifier = 7.5;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=320;
				armorDamage=3;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=320;
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
	class A6_AmmoBox_338_20rnd: Box_Base
	{
		scope=2;
		displayName="Boxed .338 Lapua Magnum FMJ Rounds";
		descriptionShort=".338 Lapua Magnum FMJ boxed ammunition, 20 rounds.";
		model="DZ\weapons\ammunition\762_20roundbox.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"A6_Weapons\Ammo\338Lapua\338Lapua_box_co.paa"};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=1400;
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
						{1.0,{"DZ\weapons\ammunition\data\762_box.rvmat"}},
						{0.7,{"DZ\weapons\ammunition\data\762_box.rvmat"}},
						{0.5,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},
						{0.3,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},
						{0.0,{"DZ\weapons\ammunition\data\762_box_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_A6_338
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
	class Ammo_A6_338: Ammunition_Base
	{
		scope=2;
		displayName=".338 Lapua Magnum FMJ";
		descriptionShort="The .338 Lapua Magnum (8.6x70mm) FMJ cartridge with a 16.2 gram lead core bullet with a bimetallic jacket in a brass case. Despite its rudimentary design, this cartridge possesses capabilites of piercing basic and intermediate ballistic body protections, as well as having a considerable stopping power effect and be able to cause critical adverse effects on the target after impact";
		model="A6_Weapons\Ammo\338Lapua\338Lapua.p3d";
		weight=70;
		count=20;
		itemSize[] = {1,2};
		ammo="Bullet_A6_338";
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
