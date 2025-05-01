class CfgPatches
{
	class A6_DVL10
	{
		units[] = {};
		weapons[] = {"A6_DVL10"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_DVL10_5Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class A6_DVL10_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight=5750;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		barrelArmor = 3.125;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_A6_338"};
		magazines[] = {"A6_Mag_DVL10_5Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[] = {0.37,0.37,0.37};
		modes[] = {"Single"};
		ironsightsExcludingOptics[]= {"HuntingOptic"};
		simpleHiddenSelections[]= {"hide_pistolgrip","hide_barrel"};
		initSpeedMultiplier = 1.0;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"DVL10_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 1;
			recoil="SV98Recoil";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class AnimationSources
		{
			class huntingscopetrans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_DVL10: A6_DVL10_Base
	{
		scope = 2;
		displayName = "DVL-10";
		descriptionShort = "The DVL-10 is a lightweight and compact rifle that has been developed for special service and combat missions where exceptional accuracy and range are needed. Chambered in .338 Lapua rounds.";
		model = "A6_Weapons\Snipers\DVL10\DVL10.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponM4PistolGrip"};
		itemSize[] = {8,3};
		hiddenSelections[] = {"camo_barrel","camo_pistolgrip","camo_lower","camo_stock","camo_upper"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\DVL10\data\camo_barrel_co.paa","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa","A6_Weapons\Snipers\DVL10\data\camo_lower_co.paa","A6_Weapons\Snipers\DVL10\data\camo_stock_co.paa","A6_Weapons\Snipers\DVL10\data\camo_upper_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\DVL10\data\camo_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat","A6_Weapons\Snipers\DVL10\data\camo_lower.rvmat","A6_Weapons\Snipers\DVL10\data\camo_stock.rvmat","A6_Weapons\Snipers\DVL10\data\camo_upper.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\DVL10\data\camo_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat","A6_Weapons\Snipers\DVL10\data\camo_lower.rvmat","A6_Weapons\Snipers\DVL10\data\camo_stock.rvmat","A6_Weapons\Snipers\DVL10\data\camo_upper.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\DVL10\data\camo_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat","A6_Weapons\Snipers\DVL10\data\camo_lower.rvmat","A6_Weapons\Snipers\DVL10\data\camo_stock.rvmat","A6_Weapons\Snipers\DVL10\data\camo_upper.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\DVL10\data\camo_barrel_damaged.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat","A6_Weapons\Snipers\DVL10\data\camo_lower_damaged.rvmat","A6_Weapons\Snipers\DVL10\data\camo_stock_damaged.rvmat","A6_Weapons\Snipers\DVL10\data\camo_upper_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\DVL10\data\camo_barrel_damaged.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat","A6_Weapons\Snipers\DVL10\data\camo_lower_damaged.rvmat","A6_Weapons\Snipers\DVL10\data\camo_stock_damaged.rvmat","A6_Weapons\Snipers\DVL10\data\camo_upper_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\DVL10\data\camo_barrel_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat","A6_Weapons\Snipers\DVL10\data\camo_lower_destruct.rvmat","A6_Weapons\Snipers\DVL10\data\camo_stock_destruct.rvmat","A6_Weapons\Snipers\DVL10\data\camo_upper_destruct.rvmat"}}
					};
				};
			};
		};
		class NoiseShoot
		{
			strength = 7;
			type = "shot";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_DVL10_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "DVL-10 Magazine";
		descriptionShort = "5 round magazine for the DVL-10, loaded with .338 Lapua rounds.";
		model = "A6_Weapons\Snipers\DVL10\DVL10_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 120;
		itemSize[] = {1,2};
		count = 5;
		ammo = "Bullet_A6_338";
		ammoItems[] = {"Ammo_A6_338"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\DVL10\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\DVL10\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\DVL10\data\camo_magazine_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\DVL10\data\camo_magazine_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\DVL10\data\camo_magazine_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyDVL10_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\DVL10\DVL10_Mag.p3d";
    };
};