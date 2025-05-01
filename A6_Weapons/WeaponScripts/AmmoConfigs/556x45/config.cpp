class CfgPatches
{
	class A6_Ammunition_556x45
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]=
		{
			"Ammo_556x45HP",
			"Ammo_556x45M856",
			"Ammo_556x45FMJ",
			"Ammo_556x45M855",
			"Ammo_556x45M856A1",
			"Ammo_556x45M855A1",
			"Ammo_556x45M995"
		};
		ammo[]=
		{
			"Bullet_556x45HP",
			"Bullet_556x45M856",
			"Bullet_556x45FMJ",
			"Bullet_556x45M855",
			"Bullet_556x45M856A1",
			"Bullet_556x45M855A1",
			"Bullet_556x45M995"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_556x45HP
	{
		name="Bullet_556x45HP";
	};
	class AType_Bullet_556x45M856
	{
		name="Bullet_556x45M856";
	};
	class AType_Bullet_556x45FMJ
	{
		name="Bullet_556x45FMJ";
	};
	class AType_Bullet_556x45M855
	{
		name="Bullet_556x45M855";
	};
	class AType_Bullet_556x45M856A1
	{
		name="Bullet_556x45M856A1";
	};
	class AType_Bullet_556x45M855A1
	{
		name="Bullet_556x45M855A1";
	};
	class AType_Bullet_556x45M995
	{
		name="Bullet_556x45M995";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_556x45HP: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45HP";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 947;
		typicalSpeed = 947;
		airFriction = -0.00125;
		caliber = 1;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
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
				damage = 125;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_556x45M856: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45M856";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 874;
		typicalSpeed = 874;
		airFriction = -0.00125;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;
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
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_556x45FMJ: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45FMJ";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 957;
		typicalSpeed = 957;
		airFriction = -0.00125;
		caliber = 1.2;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 105;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_556x45M855: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45M855";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 922;
		typicalSpeed = 922;
		airFriction = -0.00125;
		caliber = 1.3;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 110;
				armorDamage = 1.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_556x45M856A1: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45M856A1";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 940;
		typicalSpeed = 940;
		airFriction = -0.00125;
		caliber = 1.4;
		deflecting = 10;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		model = "dz\weapons\projectiles\tracer_red.p3d";
		tracerScale = 1.0;
		tracerStartTime = 0.075;
		tracerEndTime = 8;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 115;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 70;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_556x45M855A1: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45M855A1";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 947;
		typicalSpeed = 947;
		airFriction = -0.00125;
		caliber = 1.6;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 120;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_556x45M995: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_556x45M995";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 1013;
		typicalSpeed = 1013;
		airFriction = -0.00125;
		caliber = 1.6;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 350;
		damageBarrelDestroyed = 350;
		weight = 0.004;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
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
	class Ammo_556x45HP: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm HP";
		descriptionShort = ".223 Remington (5.56x45mm) HP cartridges with a 3.6 gram lead core hollow-point bullet with a bimetallic jacket in a steel case, intended for hunting, home defense, and target practice.";
		model="A6_Weapons\Ammo\556x45\556x45_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45HP";
		hiddenSelections[]= {"zbytek","case"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\556x45\data\556x45_round_hp_co.paa","A6_Weapons\Ammo\556x45\data\556x45_case_hp_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_556x45M856: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm M856";
		descriptionShort = "The M856 tracer cartridge (63.7-grain bullet) is used in the M16A2/3/4, M4-series, and M249 weapons (among other 5.56mm NATO weapons). This round is designed to trace out to 875 yards and has an orange tip color, and is trajectory matched to the M855 (62-grain, green tip) ball cartridge.";
		model="A6_Weapons\Ammo\556x45\556x45_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45M856";
		hiddenSelections[]= {"zbytek","case"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\556x45\data\556x45_round_m856_co.paa","A6_Weapons\Ammo\556x45\data\556x45_case_m856_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_556x45FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm FMJ";
		descriptionShort = ".223 Remington (5.56x45mm) FMJ cartridges with a 3.6 gram lead core bullet with a bimetallic jacket in a steel case, intended for hunting, home defense, and target practice.";
		model="A6_Weapons\Ammo\556x45\556x45_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45FMJ";
		hiddenSelections[]= {"zbytek","case"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\556x45\data\556x45_round_fmj_co.paa","A6_Weapons\Ammo\556x45\data\556x45_case_m856_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_556x45M855: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm M855";
		descriptionShort = "5.56x45mm NATO M855 cartridges with a 4 gram bullet with a steel penetrator tip over a lead core with a copper jacket in a brass case. This cartridge was designed in the 1980s as the equivalent to the FN SS109 cartridge for the 5.56x45mm NATO caliber armament used by the United States Army.";
		model="A6_Weapons\Ammo\556x45\556x45_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45M855";
		hiddenSelections[]= {"zbytek","case"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\556x45\data\556x45_round_m855_co.paa","A6_Weapons\Ammo\556x45\data\556x45_m855a1_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_556x45M856A1: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm M856A1";
		descriptionShort = "The M856A1 tracer cartridge with a 3.6 gram copper alloy core tracer bullet with a copper jacket, in a brass case, intended for target designation and fire adjustment in battle. This cartridge was designed to provide tracing capabilities when used in conjunction with the 5.56x45mm NATO M855A1 cartridge and have a similar ballistic performance, being able to pierce basic body ballistic protections, as well as providing excellent results against intermediate models.";
		model="A6_Weapons\Ammo\556x45\556x45_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45M856A1";
		hiddenSelections[]= {"zbytek","case"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\556x45\data\556x45_round_m856a1_co.paa","A6_Weapons\Ammo\556x45\data\556x45_case_m856a1_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_556x45M855A1: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm M855A1";
		descriptionShort = "5.56x45mm NATO M855A1 cartridges with a 4 gram armor-piercing bullet with a steel penetrator tip over a copper alloy core with a copper semi-jacket in a brass case. This cartridge was designed to improve the penetration capabilities of the 5.56x45mm NATO M855 cartridge of the United States Army, being able to pierce basic and intermediate body ballistic protections.";
		model="A6_Weapons\Ammo\556x45\556x45_M855A1.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45M855A1";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_556x45M995: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56x45mm M995";
		descriptionShort = "The M995 tracer cartridge with a 3.4 gram armor-piercing bullet with a tungsten carbide penetrator over an aluminum base with a copper jacket, in a brass case. This cartridge was designed during the 1990s to provide United States Army personnel with capabilities to pierce light covers and light vehicles, as well as basic and intermediate ballistic body protections, in addition to providing outstanding results against some specialized protection models.";
		model="A6_Weapons\Ammo\556x45\556x45_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_556x45M995";
		hiddenSelections[]= {"zbytek","case"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\556x45\data\556x45_round_m995_co.paa","A6_Weapons\Ammo\556x45\data\556x45_case_m856a1_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_m855a1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat","A6_Weapons\Ammo\556x45\data\556x45_M855A1_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
