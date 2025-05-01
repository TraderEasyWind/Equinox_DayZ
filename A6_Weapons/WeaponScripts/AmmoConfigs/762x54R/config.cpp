class CfgPatches
{
	class A6_Ammunition_762x54
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]=
		{
			"Ammo_762x54HPBT",
			"Ammo_762x54FMJ",
			"Ammo_762x54T46Mgzh",
			"Ammo_762x54LPSgzh",
			"Ammo_762x54PSgzh",
			"Ammo_762x54BTgzh",
			"Ammo_762x54SNBgzh",
			"Ammo_762x54BSgs"
		};
		ammo[]=
		{
			"Bullet_762x54HPBT",
			"Bullet_762x54FMJ",
			"Bullet_762x54T46Mgzh",
			"Bullet_762x54LPSgzh",
			"Bullet_762x54PSgzh",
			"Bullet_762x54BTgzh",
			"Bullet_762x54SNBgzh",
			"Bullet_762x54BSgs"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x54HPBT
	{
		name="Bullet_762x54HPBT";
	};
	class AType_Bullet_762x54FMJ
	{
		name="Bullet_762x54FMJ";
	};
	class AType_Bullet_762x54T46Mgzh
	{
		name="Bullet_762x54T46Mgzh";
	};
	class AType_Bullet_762x54LPSgzh
	{
		name="Bullet_762x54LPSgzh";
	};
	class AType_Bullet_762x54PSgzh
	{
		name="Bullet_762x54PSgzh";
	};
	class AType_Bullet_762x54BTgzh
	{
		name="Bullet_762x54BTgzh";
	};
	class AType_Bullet_762x54SNBgzh
	{
		name="Bullet_762x54SNBgzh";
	};
	class AType_Bullet_762x54BSgs
	{
		name="Bullet_762x54BSgs";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_762x54HPBT: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54HPBT";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 807;
		typicalSpeed = 807;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 130;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 200;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54FMJ: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54FMJ";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 760;
		typicalSpeed = 760;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 140;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 130;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54T46Mgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54T46Mgzh";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		model = "dz\weapons\projectiles\tracer_green.p3d";
		tracerScale = 0.8;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 800;
		typicalSpeed = 800;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 130;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54LPSgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54LPSgzh";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 865;
		typicalSpeed = 865;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54PSgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54PSgzh";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 875;
		typicalSpeed = 875;
		airFriction = -0.001;
		caliber = 1.3;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 145;
				armorDamage = 1.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54BTgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54BTgzh";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		model = "dz\weapons\projectiles\tracer_green.p3d";
		tracerScale = 0.8;
		tracerStartTime = 0.075;
		tracerEndTime = 3;
		hit = 15;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 875;
		typicalSpeed = 875;
		airFriction = -0.001;
		caliber = 1.5;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 140;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54SNBgzh: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54SNBgzh";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		hit = 15;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 875;
		typicalSpeed = 875;
		airFriction = -0.001;
		caliber = 1.6;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.012;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 155;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
				damageOverride[] = {{0.86,1.0}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
    };
    class Bullet_762x54BSgs: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x54BSgs";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 785;
		typicalSpeed = 785;
		airFriction = -0.001;
		caliber = 1.8;
		deflecting = 10;
		damageBarrel = 650;
		damageBarrelDestroyed = 650;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 165;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.86,1.0}};
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
	class Ammo_762x54HPBT: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R HP BT";
		descriptionShort = "7.62x54mm R HP BT (Hollow Point Boat Tail) - an HP-type bullet with a streamlined or tapered tail. HP (Hollow Point) - a semi-hollow point bullet with a hole in the nose.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54HPBT";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54FMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R FMJ";
		descriptionShort = "7.62x54mm R Full Metal Jacket bullet. Standard lead core with a metallic jacket. Best for training and target shooting applications.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54FMJ";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_FMJ_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54T46Mgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R T-46M gzh";
		descriptionShort = "7.62x54mm R T-46M gzh cartridges with a 9.6 gram lead core tracer bullet with a bimetallic jacket, in a bimetallic case; intended for target designation and fire adjustment in battle (Trace color: Green). This tracer cartridge is a modernized version of the T-46 model, as it provides longer distance tracing capabilities and has similar ballistic effectiveness to the LPS gzh cartridge, because despite the bullet rudimentary design, it is able of piercing through basic and intermediate ballistic body protections in addition to providing a considerable stopping power effect.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54T46Mgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54LPSgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R LPS gzh";
		descriptionShort = "7.62x54mm R LPS gzh cartridges with a 9.6 gram steel core bullet with a lead cladding and a bimetallic jacket, in a bimetallic case. The LPS cartridge was introduced into service in 1953 for Soviet 7.62x54mm R caliber weaponry, and over the years has undergone numerous changes in the materials used for its construction. Thanks to its steel core, it is capable of piercing through basic and intermediate ballistic body protections in addition to providing a considerable stopping power effect.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54LPSgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_LPS_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54PSgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R PS gzh";
		descriptionShort = "7.62x54mm R PS gzh cartridges with a 9.8 gram bullet with a pointed steel core over a lead base with a bimetallic jacket, in a bimetallic case. This PS cartridge was developed by TsNIITochMash in the mid-1960s from the 7.62x54mm R LPS gzh cartridge specifically to increase its accuracy when fired from a sniper or designated marksman rifles, such as the SVD and its variants, being able of piercing through basic and intermediate ballistic body protections as well as providing an outstanding stopping power effect.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54PSgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_PS_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54BTgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R BT gzh";
		descriptionShort = "7.62x54mm R BT gzh cartridges with a 9.2 gram armor-piercing tracer bullet with a 9.2 gram armor-piercing tracer bullet with a pointed heat-strengthened steel core with a bimetallic jacket, in a bimetallic case; intended for target designation and fire adjustment in battle (Trace color: Green). This BT bullet it's an improved version of the used in the 7.62x54mm R T-46M cartridge, since the lead core was replaced by one of heat-strengthened steel, providing automatic firearms with penetration capabilities against basic, intermediate and specialize ballistic body protections as well as providing a significant stopping power effect.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54BTgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_BT_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_T46M_gzh_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54SNBgzh: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R SNB gzh";
		descriptionShort = "7.62x54mm R SNB gzh cartridges with a 9.8 gram armor-piercing bullet with a pointed heat-strengthened steel core over a lead base with a bimetallic jacket, in a bimetallic case. This SNB cartridge was developed in the mid-1990s as a modernization of the 7.62x54mm R PS gzh cartridge to improve its penetration capabilities when fired from a sniper or designated marksman rifles, managing of piercing specialized ballistic body protections as well as providing a significant stopping power effect.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54SNBgzh";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_SNB_gzh_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x54BSgs: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x54mm R BS gs";
		descriptionShort = "7.62x54mm R BS gs cartridges with a 12.2 gram armor-piercing bullet with a pointed tungsten carbide core over a lead base with a bimetallic jacket, in a steel case. This BS bullet was developed by TsNIITochMash in the 2010s to greatly increase the penetration capabilities of designated marksman rifles such as the SVD and its variants, being able of piercing through the most modern specialized ballistic body protections, in addition to being capable of piercing light covers and light armored vehicles despite having a relatively low muzzle velocity compared to other cartridges.";
		model="A6_Weapons\Ammo\762x54R\762x54_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x54BSgs";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x54R\data\762x54_BS_gs_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x54R\data\762x54_HP_BT_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
