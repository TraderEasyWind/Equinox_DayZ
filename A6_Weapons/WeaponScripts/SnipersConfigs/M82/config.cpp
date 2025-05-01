class CfgPatches
{
	class A6_M82
	{
		units[] = {};
		weapons[] = {"A6_M82","A6_M82_Black","A6_M82_Tan","A6_M82_Snow"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_M82_10Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class A6_M82_Base: Rifle_Base
	{
		scope = 0;
		weight = 13471;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		barrelArmor = 1.6;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_A6_127x99"};
		magazines[] = {"A6_Mag_M82_10Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.8,2.8,1.8};
		aimSpeedModifier[] = {0.6,0.6,0.6};
		reloadAction = "ReloadFal";
		simpleHiddenSelections[] = {"hide_muzzle","hide_pistolgrip","hide_barrel"};
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptBipod = 1;
		CanAcceptTopFlashlight = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M82_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M82_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"M82_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.4;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion=0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 300;
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
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
	class A6_M82: A6_M82_Base
	{
		scope = 2;
		displayName = "M82A1";
		descriptionShort = "The Barrett M82A1 is a recoil-operated, semi-automatic anti-materiel sniper system developed by the American Barrett Firearms Manufacturing company. Despite its designation as an anti-materiel rifle, it is used by some armed forces as an anti-personnel system. Chambered in 12.7x99mm NATO rounds.";
		model = "A6_Weapons\Snipers\M82\M82A1.p3d";
		attachments[] = {"weaponWrap","weaponM4PistolGrip","weaponOptics","weaponLightTop","weaponBipod","QDLSuppressor"};
		itemSize[] = {12,3};
		hiddenSelections[] = {"camo","camo_cheek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M82\data\camo_grey_co.paa","A6_Weapons\Snipers\M82\data\camo_cheek_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M82\data\camo_bare_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\M82\data\camo_bare_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M82\data\camo_bare_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M82\data\camo_bare_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M82\data\camo_bare_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M82\data\camo_bare_metal_destruct.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M82_Black: A6_M82
	{
		hiddenSelections[] = {"camo","camo_cheek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M82\data\camo_black_co.paa","A6_Weapons\Snipers\M82\data\camo_cheek_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M82\data\camo_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M82\data\camo_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M82\data\camo_metal_destruct.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M82_Tan: A6_M82
	{
		hiddenSelections[] = {"camo","camo_cheek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M82\data\camo_tan_co.paa","A6_Weapons\Snipers\M82\data\camo_cheek_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M82\data\camo_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M82\data\camo_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M82\data\camo_metal_destruct.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M82_Snow: A6_M82
	{
		hiddenSelections[] = {"camo","camo_cheek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M82\data\camo_snow_co.paa","A6_Weapons\Snipers\M82\data\camo_cheek_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M82\data\camo_metal.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M82\data\camo_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M82\data\camo_metal_damage.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M82\data\camo_metal_destruct.rvmat","A6_Weapons\Snipers\M82\data\camo_cheek_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M82_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M82A1 Magazine";
		descriptionShort = "10 round magazine for the M82, loaded with 12.7x99mm NATO rounds.";
		model = "A6_Weapons\Snipers\M82\Mag_M82_10Rnd.p3d";
		weight = 300;
		itemSize[] = {2,2};
		count = 10;
		ammo = "Bullet_A6_127x99";
		ammoItems[] = {"Ammo_A6_127x99"};
		tracersEvery = 0;
		mass = 10;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\M82\data\camo_bare_metal.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M82\data\camo_bare_metal.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M82\data\camo_bare_metal_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M82\data\camo_bare_metal_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M82\data\camo_bare_metal_destruct.rvmat"}}
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
    class ProxyMag_M82_10Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\M82\Mag_M82_10Rnd.p3d";
    };
};