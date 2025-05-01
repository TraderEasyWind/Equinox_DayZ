class CfgPatches
{
	class A6_Ammunition_762x51
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]=
		{
			"Ammo_762x51BCPFMJ",
			"Ammo_762x51M80",
			"Ammo_762x51M62Tracer",
			"Ammo_762x51M61",
			"Ammo_762x51M993"
		};
		ammo[]=
		{
			"Bullet_762x51BCPFMJ",
			"Bullet_762x51M80",
			"Bullet_762x51M62Tracer",
			"Bullet_762x51M61",
			"Bullet_762x51M993"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x51BCPFMJ
	{
		name="Bullet_762x51BCPFMJ";
	};
	class AType_Bullet_762x51M80
	{
		name="Bullet_762x51M80";
	};
	class AType_Bullet_762x51M62Tracer
	{
		name="Bullet_762x51M62Tracer";
	};
	class AType_Bullet_762x51M61
	{
		name="Bullet_762x51M61";
	};
	class AType_Bullet_762x51M993
	{
		name="Bullet_762x51M993";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_762x51BCPFMJ: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_762x51BCPFMJ";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 840;
		typicalSpeed = 840;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
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
				damage = 150;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
	class Bullet_762x51M80: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_762x51M80";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 833;
		typicalSpeed = 833;
		airFriction = -0.001;
		caliber = 1.2;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 150;
				armorDamage = 1.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 120;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
	class Bullet_762x51M62Tracer: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_762x51M62Tracer";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 816;
		typicalSpeed = 816;
		airFriction = -0.001;
		caliber = 1.3;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.01;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		model = "dz\weapons\projectiles\tracer_green.p3d";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 8;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 150;
				armorDamage = 1.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 120;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "sound";
		};
	};
	class Bullet_762x51M61: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "Ammo_762x51M61";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 849;
		typicalSpeed = 849;
		airFriction = -0.001;
		caliber = 1.55;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.01;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 155;
				armorDamage = 2;
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
    class Bullet_762x51M993: Bullet_Base
    {
        scope=1;
        spawnPileType="Ammo_762x51M993";
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		hit = 16;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 910;
		typicalSpeed = 910;
		airFriction = -0.001;
		caliber = 1.8;
		deflecting = 10;
		damageBarrel = 650;
		damageBarrelDestroyed = 650;
		weight = 0.01;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
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
				damage = 85;
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
	class Ammo_762x51BCPFMJ: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x51mm BCP FMJ";
		descriptionShort = "7.62x51mm (.308 Winchester) BCP FMJ cartridges with a 10.9 gram bimetallic Full Metal Jacketed lead core Ball bullet in a lacquered steel case. Intended for hunting, home defense, and target practice, Despite its rudimentary design, this cartridge is capable of providing an outstanding stopping power effect, as well as being able to pierce through basic ballistic body protections as well as some intermediate models.";
		model="A6_Weapons\Ammo\762x51\762x51_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x51BCPFMJ";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x51M80: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x51mm M80";
		descriptionShort = "7.62x51mm (.308 Winchester) NATO M80 cartridges with a 9.5 gram lead-antimony alloy core bullet with a bimetallic jacket, in a brass case. This cartridge was adopted in the United States Armed Forces as a replacement for the 7.62x51mm NATO M59 cartridge after the Vietnam War as standard ammunition, as it provides a considerable stopping power effect as well as being able to pierce through basic and intermediate body ballistic protections.";
		model="A6_Weapons\Ammo\762x51\762x51_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x51M80";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x51\data\762x51_m80_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x51M62Tracer: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x51mm M62 Tracer";
		descriptionShort = "7.62x51mm (.308 Winchester) NATO M62 Tracer cartridges  with a 9.2 gram lead-antimony alloy core tracer bullet with a bimetallic jacket, in a brass case; intended for target designation and fire adjustment in battle (Trace color: Green). This cartridge was designed to provide tracing capabilities to the 7.62x51mm NATO caliber automatic weaponry used by the United States Army, being able to pierce through basic and intermediate body ballistic protections, in addition to provide a considerable stopping power effect.";
		model="A6_Weapons\Ammo\762x51\762x51_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x51M62Tracer";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x51\data\762x51_m62_tracer_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x51\data\762x51_m993.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x51\data\762x51_m993.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x51\data\762x51_m993.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x51\data\762x51_m993_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x51\data\762x51_m993_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x51\data\762x51_m993_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x51M61: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x51mm M61";
		descriptionShort = "7.62x51mm (.308 Winchester) NATO M61 cartridges  with a 9.8 gram armor-piercing bullet with a hardened steel core with lead cladding on the tip and a copper jacket, in a brass case. This cartridge was designed in the 1950s based on the .30-06 Springfield AP M2 cartridge to provide the United States Army with an armor-piercing bullet for 7.62x51mm NATO caliber automatic weaponry, being able to pierce through the most modern specialized ballistic body protections, in addition to provide a significant stopping power effect.";
		model="A6_Weapons\Ammo\762x51\762x51_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x51M61";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x51\data\762x51_m61_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x51\data\762x51_BCP_FMJ_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Ammo_762x51M993: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62x51mm M993";
		descriptionShort = "7.62x51mm M993 cartridges with a 9.8 gram armor-piercing bullet with an 8.2 gram armor-piercing bullet with a tungsten carbide penetrator over an aluminum base with a copper jacket, in a brass case. This cartridge was designed during the 1990s to provide United States Army personnel with capabilities to pierce light covers and light armored vehicles, in addition to providing excellent results against the most modern specialized ballistic body protections.";
		model="A6_Weapons\Ammo\762x51\762x51_Base.p3d";
		weight = 7;
		count = 40;
		ammo = "Bullet_762x51M993";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Ammo\762x51\data\762x51_m993_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Ammo\762x51\data\762x51_m993.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Ammo\762x51\data\762x51_m993.rvmat"}},
						{0.7,{"A6_Weapons\Ammo\762x51\data\762x51_m993.rvmat"}},
						{0.5,{"A6_Weapons\Ammo\762x51\data\762x51_m993_damage.rvmat"}},
						{0.3,{"A6_Weapons\Ammo\762x51\data\762x51_m993_damage.rvmat"}},
						{0.0,{"A6_Weapons\Ammo\762x51\data\762x51_m993_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
