class CfgPatches
{
	class A6_Ammunition_545x39
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]=
		{
			"Ammo_545x39HP",
			"Ammo_545x39FMJ",
			"Ammo_545x39Tgs",
			"Ammo_545x39PSgs",
			"Ammo_545x39PPgs",
			"Ammo_545x39BTgs",
			"Ammo_545x39BPgs",
			"Ammo_545x39BSgs"
		};
		ammo[]=
		{
			"Bullet_545x39HP",
			"Bullet_545x39FMJ",
			"Bullet_545x39Tgs",
			"Bullet_545x39PSgs",
			"Bullet_545x39PPgs",
			"Bullet_545x39BTgs",
			"Bullet_545x39BPgs",
			"Bullet_545x39BSgs"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_545x39HP
	{
		name="Bullet_545x39HP";
	};
	class AType_Bullet_545x39FMJ
	{
		name="Bullet_545x39FMJ";
	};
	class AType_Bullet_545x39Tgs
	{
		name="Bullet_545x39Tgs";
	};
	class AType_Bullet_545x39PSgs
	{
		name="Bullet_545x39PSgs";
	};
	class AType_Bullet_545x39PPgs
	{
		name="Bullet_545x39PPgs";
	};
	class AType_Bullet_545x39BTgs
	{
		name="Bullet_545x39BTgs";
	};
	class AType_Bullet_545x39BPgs
	{
		name="Bullet_545x39BPgs";
	};
	class AType_Bullet_545x39BSgs
	{
		name="Bullet_545x39BSgs";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_545x39HP: Bullet_Base
	{
		scope = 1;
		spawnPileType = "Ammo_545x39HP";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 7.2;
		airFriction = -0.00125;
		typicalSpeed = 884;
		initSpeed = 884;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 214.28572;
		damageBarrelDestroyed = 214.28572;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
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
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
	class Bullet_545x39Tgs: Bullet_Base
	{
		scope = 1;
		spawnPileType = "Ammo_545x39Tgs";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 7.2;
		airFriction = -0.00125;
		typicalSpeed = 883;
		initSpeed = 883;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 214.28572;
		damageBarrelDestroyed = 214.28572;
		weight = 0.00343;
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
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
	class Bullet_545x39FMJ: Bullet_Base
	{
		scope = 1;
		spawnPileType = "Ammo_545x39FMJ";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 7.2;
		airFriction = -0.00125;
		typicalSpeed = 884;
		initSpeed = 884;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 214.28572;
		damageBarrelDestroyed = 214.28572;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
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
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
	class Bullet_545x39PSgs: Bullet_Base
	{
		scope = 1;
		spawnPileType = "Ammo_545x39PSgs";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 8;
		airFriction = -0.00125;
		typicalSpeed = 920;
		initSpeed = 920;
		caliber = 1.1;
		deflecting = 10;
		damageBarrel = 214.28572;
		damageBarrelDestroyed = 214.28572;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 110;
				armorDamage = 1.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
    class Bullet_545x39PPgs: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_545x39PPgs";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 8;
		airFriction = -0.00125;
		typicalSpeed = 930;
		initSpeed = 930;
		caliber = 1.3;
		deflecting = 10;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 115;
				armorDamage = 1.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_545x39BTgs: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_545x39BTgs";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 8.5;
		airFriction = -0.00125;
		typicalSpeed = 910;
		initSpeed = 910;
		caliber = 1.4;
		deflecting = 10;
		damageBarrel = 300;
		damageBarrelDestroyed = 300;
		weight = 0.00343;
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
			class Health
			{
				damage = 105;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_545x39BPgs: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_545x39BPgs";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 9;
		airFriction = -0.00125;
		typicalSpeed = 940;
		initSpeed = 940;
		caliber = 1.6;
		deflecting = 10;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
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
				damageOverride[] = {{0.9,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_545x39BSgs: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_545x39BSgs";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 10;
		airFriction = -0.00125;
		typicalSpeed = 830;
		initSpeed = 830;
		caliber = 1.7;
		deflecting = 10;
		damageBarrel = 400;
		damageBarrelDestroyed = 400;
		weight = 0.00343;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
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
				damageOverride[] = {{0.9,1.0}};
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
	class Ammo_545x39HP: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm HP";
		descriptionShort = "5.45x39mm HP cartridges with a 3.6 gram lead core hollow-point (HP) bullet with a bimetallic semi-jacket in a steel case, intended for hunting, home defense, and target practice.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39HP";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_HP_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39Tgs: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm T gs";
		descriptionShort = "5.45x39mm T gs cartridges with a 3.2 gram lead core tracer bullet with a bimetallic jacket, in a steel case, intended for target designation and fire adjustment in battle (Trace color: Red). This tracer cartridge was introduced in 1974 alongside with the PS gs cartridge to provide tracing capabilities to Soviet 5.45x39mm caliber weaponry, as well as being able of piercing basic ballistic body protection.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39Tgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_T_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm FMJ";
		descriptionShort = "5.45x39mm FMJ cartridges with a 3.9 gram lead core full metal jacket (FMJ) bullet in a steel case, intended for hunting, home defense, and target practice. Despite its rudimentary design, it is capable of piercing basic ballistic body protection.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39FMJ";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_FMJ_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39PSgs: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm PS gs";
		descriptionShort = "5.45x39mm PS gs cartridges with a 3.4 gram steel core bullet with lead cladding on the tip and a bimetallic jacket, in a steel case. The PS cartridge was introduced into service in 1974 alongside with Soviet 5.45x39mm caliber weaponry, providing the Soviet Army with capabilities to pierce basic ballistic body protections.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39PSgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_PS_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39PPgs: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm PP gs";
		descriptionShort = "5.45x39mm PP gs cartridges with a 3.5 gram bullet with a heat-strengthened steel core with lead cladding on the tip and bimetallic jacket, in a steel case. Has slightly better penetration.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39PPgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39BTgs: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm BT gs";
		descriptionShort = "5.45x39mm BT gs cartridges with a 3.1 gram armor-piercing tracer bullet with a heat-strengthened steel core with a bimetallic jacket, in a steel case, intended for target designation and fire adjustment in battle (Trace color: Red). This BT bullet its an improved version of the used in the 5.45x39 mm T gs cartridge, since the lead core was replaced by one of heat-strengthened steel, providing automatic firearms with penetration capabilities against basic ballistic protections as well as excellent results against intermediate models.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39BTgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_BT_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39BPgs: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm BP gs";
		descriptionShort = "5.45x39mm BP gs cartridges with a 3.7 gram armor-piercing bullet with a hardened carbon steel core with lead cladding on the tip and bimetallic jacket, in a steel case. This BP bullet was developed by TsNIITOCHMASH in 1998 based on the 5.45x39mm PP gs cartridge to improve its design and penetration capabilities, resulting in an improvement at piercing some intermediate models of body ballistic protection.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39BPgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_BP_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_BP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_BP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_BP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_BP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_BP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_BP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_545x39BSgs: Ammunition_Base
	{
		scope = 2;
		displayName = "5.45x39mm BS gs";
		descriptionShort = "5.45x39mm BS gs cartridges with a 4.1 gram armor-piercing bullet with a pointed tungsten carbide core over a lead base with a bimetallic jacket, in a steel case. This BS bullet was developed by TsNIITochMash in 1998 to greatly increase the penetration capabilities of Russian 5.45x39mm caliber weapons, by being able to pierce basic and intermediate ballistic body protections in addition to provide outstanding results against some specialized protection models.";
		model="A6_Weapons\Ammo\545x39\545x39_Base.p3d";
		weight = 7;
		count = 50;
		ammo = "Bullet_545x39BSgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\545x39_BS_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\545x39_PP_gs_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_545x39HP_30Rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 5.45x39mm HP Rounds";
		descriptionShort="30 Count. 5.45x39mm HP cartridges with a 3.6 gram lead core hollow-point (HP) bullet with a bimetallic semi-jacket in a steel case, intended for hunting, home defense, and target practice.";
		model="A6_Weapons\Ammo\545x39\545x45_30RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_HP_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_545x39HP
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
	class AmmoBox_545x39Tgs_30Rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 5.45x39mm T gs Rounds";
		descriptionShort="30 Count. 5.45x39mm T gs cartridges with a 3.2 gram lead core tracer bullet with a bimetallic jacket, in a steel case, intended for target designation and fire adjustment in battle (Trace color: Red). This tracer cartridge was introduced in 1974 alongside with the PS gs cartridge to provide tracing capabilities to Soviet 5.45x39mm caliber weaponry, as well as being able of piercing basic ballistic body protection.";
		model="A6_Weapons\Ammo\545x39\545x45_30RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_T_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_545x39Tgs
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
	class AmmoBox_545x39FMJ_30Rnd: Box_Base
	{
		scope=2;
		displayName = "Boxed 5.45x39mm FMJ Rounds";
		descriptionShort = "30 Count. 5.45x39mm FMJ cartridges with a 3.9 gram lead core full metal jacket (FMJ) bullet in a steel case, intended for hunting, home defense, and target practice. Despite its rudimentary design, it is capable of piercing basic ballistic body protection.";
		model="A6_Weapons\Ammo\545x39\545x45_fmj_30RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=85;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_fmj.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_fmj.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_fmj.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_fmj.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\545x39\data\AmmoBox_545x39_30_fmj.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_545x39FMJ
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
