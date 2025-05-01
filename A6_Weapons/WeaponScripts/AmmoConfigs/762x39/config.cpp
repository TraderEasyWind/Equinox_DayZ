class CfgPatches
{
	class A6_Ammunition_762x39
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]=
		{
			"Ammo_762x39HP",
			"Ammo_762x39FMJ",
			"Ammo_762x39T45M1gzh",
			"Ammo_762x39PSgzh",
			"Ammo_762x39PPgzh",
			"Ammo_762x39BPgzh",
			"Ammo_762x39MAIAP"
		};
		ammo[]=
		{
			"Bullet_762x39HP",
			"Bullet_762x39FMJ",
			"Bullet_762x39T45M1gzh",
			"Bullet_762x39PSgzh",
			"Bullet_762x39PPgzh",
			"Bullet_762x39BPgzh",
			"Bullet_762x39MAIAP"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x39HP
	{
		name="Bullet_762x39HP";
	};
	class AType_Bullet_762x39FMJ
	{
		name="Bullet_762x39FMJ";
	};
	class AType_Bullet_762x39T45M1gzh
	{
		name="Bullet_762x39T45M1gzh";
	};
	class AType_Bullet_762x39PSgzh
	{
		name="Bullet_762x39PSgzh";
	};
	class AType_Bullet_762x39PPgzh
	{
		name="Bullet_762x39PPgzh";
	};
	class AType_Bullet_762x39BPgzh
	{
		name="Bullet_762x39BPgzh";
	};
	class AType_Bullet_762x39MAIAP
	{
		name="Bullet_762x39MAIAP";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_762x39HP: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39HP";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 754;
		typicalSpeed = 754;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 150;
			};
			class Shock
			{
				damage = 140;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x39FMJ: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39FMJ";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 775;
		typicalSpeed = 775;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 100;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x39T45M1gzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39T45M1gzh";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 9.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 720;
		typicalSpeed = 720;
		airFriction = -0.0015;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		model = "dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 0.75;
		tracerStartTime = 0.075;
		tracerEndTime = 8;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x39PSgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39PSgzh";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 10.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 700;
		typicalSpeed = 700;
		airFriction = -0.0015;
		caliber = 1.2;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 105;
				armorDamage = 1.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x39PPgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39PPgzh";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 10.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 732;
		typicalSpeed = 732;
		airFriction = -0.0015;
		caliber = 1.4;
		deflecting = 10;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 105;
				armorDamage = 1.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x39BPgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39BPgzh";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 11.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.0015;
		caliber = 1.6;
		deflecting = 10;
		damageBarrel = 450;
		damageBarrelDestroyed = 450;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 115;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 65;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x39MAIAP: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x39MAIAP";
		casing = "FxCartridge_762x39";
		round = "FxRound_762x39";
		hit = 12.5;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 730;
		typicalSpeed = 730;
		airFriction = -0.0015;
		caliber = 1.9;
		deflecting = 10;
		damageBarrel = 650;
		damageBarrelDestroyed = 650;
		weight = 0.008;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 120;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_762x39HP: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm HP";
		descriptionShort = "7.62x39mm HP cartridges with an 8 gram lead core hollow-point (HP) bullet with a bimetallic semi-jacket in a steel case; intended for hunting, home defense, and target practice. The bullet in this cartridge has an excellent expansion and impact energy that give it outstanding stopping power effects, as well as being able to cause substantial adverse effects on the target after impact, making it a good choice for hunting.";
		model="A6_Weapons\Ammo\762x39\762x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39HP";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x39\data\762x39_HP_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x39FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm FMJ";
		descriptionShort = "7.62x39mm FMJ cartridges with lead bullet with full metal jacket. Excellent for practical and recreational shooting.";
		model="A6_Weapons\Ammo\762x39\762x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39FMJ";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x39\data\762x39_FMJ_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x39T45M1gzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm T-45M1 gzh";
		descriptionShort = "7.62x39mm T-45M1 gzh cartridges with a 7.6 gram lead core tracer bullet with a bimetallic jacket, in a bimetallic case; intended for target designation and fire adjustment in battle (Trace color: Red). This tracer cartridge is an upgraded version of the T-45 model, as it provides longer distance tracing capabilities. And despite the rudimentary design of the bullet, it can pierce through basic ballistic body protections.";
		model="A6_Weapons\Ammo\762x39\762x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39T45M1gzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x39\data\762x39_T45M1_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x39PSgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm PS gzh";
		descriptionShort = "7.62x39mm PS gzh cartridges with a 7.9 gram bullet with a heat-strengthened steel core with lead cladding on the tip and a bimetallic jacket, in a bimetallic case. This PS bullet was introduced into service in 1949 for Soviet 7.62x39mm caliber weaponry, and over the years has undergone numerous changes in the materials used for its construction.";
		model="A6_Weapons\Ammo\762x39\762x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39PSgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x39PPgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm PP gzh";
		descriptionShort = "7.62x39mm PP gzh cartridges with an improved penetration bullet. The PP bullet consists of a tompak-clad steel jacket with a truncated tip, a sharp core of hardened steel, a cap of thin metal foil coated with green varnish, and a lead jacket. The foil is used to prevent wear and tear on the gun and magazine when feeding cartridges.";
		model="A6_Weapons\Ammo\762x39\762x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39PPgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x39\data\762x39_PP_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x39BPgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm BP gzh";
		descriptionShort = "7.62x39mm BP gzh cartridges with a 7.9 gram armor-piercing bullet with a hardened carbon steel core with lead cladding on the tip and a bimetallic jacket, in a bimetallic case. This BP bullet was developed in the 1990s based on the 7.62x39mm PS gzh cartridge to improve its design and penetration capabilities, as a longer and narrower reinforced steel core was chosen, allowing it to pierce through basic and intermediate body ballistic protections in addition to provide a significant stopping power effect.";
		model="A6_Weapons\Ammo\762x39\762x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39BPgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_BP_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x39MAIAP: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x39mm MAI AP";
		descriptionShort = "7.62x39mm MAI AP cartridges with a two-part armor-piercing projectile, the bullet consists of a sabot and a tungsten carbide penetrator body, in a steel case. This bullet was designed by MAI to increase the penetration capabilities of the 7.62x39mm caliber, thanks to its muzzle velocity and peculiar design, it is capable of piercing basic and intermediate ballistic body protections, in addition to providing outstanding results against some modern specialized protection models.";
		model="A6_Weapons\Ammo\762x39\762x39_MAI_AP.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_762x39MAIAP";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x39\data\762x39_PS_gzh_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
