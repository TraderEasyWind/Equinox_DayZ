class CfgPatches
{
	class A6_SVD
	{
		units[] = {"A6_SVD","A6_SVD_Tiger"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_SVD_10Rnd","A6_Mag_SVD_20Rnd"};
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
	class A6_SVD_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		WeaponLength = 1.18986;
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.1;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		magazines[] = {"A6_Mag_SVD_10Rnd","A6_Mag_SVD_20Rnd"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {0.4,0.4,0.4};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		simpleHiddenSelections[] = {"hide_barrel","hide_stock","hide_muzzle"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.0005;
			magazineSlot = "magazine";
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
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "weapon_shot_mosin9130_01";
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "StarFlash";
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
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
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class A6_SVD: A6_SVD_Base
	{
		scope = 2;
		displayName = "SVD";
		descriptionShort = "The SVD is a semi-automatic marksman rifle chambered in the fully-powered 7.62×54mmR cartridge, developed in the Soviet Union.";
		model = "A6_Weapons\Snipers\SVD\SVD_New.p3d";
		attachments[] = {"weaponWrap","weaponOpticsAK","weaponOpticMount","weaponOptics","weaponButtstockM4","weaponTubeStockAdapterSVD","weaponMuzzle308"};
		itemSize[] = {10,3};
		hiddenSelections[] = {"camo_barrel","camo_upper","handguard","camo_lower","camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\SVD\data\camo_barrel_co.paa","A6_Weapons\Snipers\SVD\data\camo_upper_co.paa","A6_Weapons\Snipers\SVD\data\camo_upper_co.paa","A6_Weapons\Snipers\SVD\data\camo_lower_co.paa","A6_Weapons\Snipers\SVD\data\camo_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\SVD\data\camo_barrel.rvmat","A6_Weapons\Snipers\SVD\data\camo_upper.rvmat","A6_Weapons\Snipers\SVD\data\handguard.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\SVD\data\camo_barrel.rvmat","A6_Weapons\Snipers\SVD\data\camo_upper.rvmat","A6_Weapons\Snipers\SVD\data\handguard.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SVD\data\camo_barrel.rvmat","A6_Weapons\Snipers\SVD\data\camo_upper.rvmat","A6_Weapons\Snipers\SVD\data\handguard.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SVD\data\camo_barrel_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_upper_damage.rvmat","A6_Weapons\Snipers\SVD\data\handguard_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SVD\data\camo_barrel_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_upper_damage.rvmat","A6_Weapons\Snipers\SVD\data\handguard_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SVD\data\camo_barrel_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_upper_destruct.rvmat","A6_Weapons\Snipers\SVD\data\handguard_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SVD_Tiger_Base: Rifle_Base
	{
		scope = 0;
		weight = 3500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		WeaponLength = 1.18986;
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.0;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		magazines[] = {"A6_Mag_SVD_10Rnd","A6_Mag_SVD_20Rnd"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {0.37,0.37,0.37};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		simpleHiddenSelections[] = {"hide_barrel","hide_stock","hide_muzzle"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "weapon_shot_mosin9130_01";
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "StarFlash";
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
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
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class A6_SVD_Tiger: A6_SVD_Tiger_Base
	{
		scope = 2;
		displayName = "SVD Tiger";
		descriptionShort = "The SVD Tiger is a semi-automatic marksman rifle chambered in the fully-powered 7.62×54mmR cartridge, made modular for attachments and modernization.";
		model = "A6_Weapons\Snipers\SVD\SVD_Tiger.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponButtstockM4","weaponTubeStockAdapterSVD","weaponForegrip","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo_barrel","camo_handguard","camo_lower","camo_stock","camo_mounts"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\SVD\data\camo_barrel_co.paa","A6_Weapons\Snipers\SVD\data\camo_handguard_co.paa","A6_Weapons\Snipers\SVD\data\camo_lower_co.paa","A6_Weapons\Snipers\SVD\data\camo_stock_co.paa","A6_Weapons\Snipers\SVD\data\camo_mount_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\SVD\data\camo_barrel.rvmat","A6_Weapons\Snipers\SVD\data\camo_handguard.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock.rvmat","A6_Weapons\Snipers\SVD\data\camo_mount.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\SVD\data\camo_barrel.rvmat","A6_Weapons\Snipers\SVD\data\camo_handguard.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower.rvmat","A6_Weapons\Snipers\SVD\data\camo_mount.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SVD\data\camo_barrel.rvmat","A6_Weapons\Snipers\SVD\data\camo_handguard.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower.rvmat","A6_Weapons\Snipers\SVD\data\camo_mount.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SVD\data\camo_barrel_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_handguard_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_mount_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SVD\data\camo_barrel_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_handguard_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_mount_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SVD\data\camo_barrel_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_handguard_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_lower_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_mount_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_SVD_10Rnd: Magazine_Base
 	{
		scope=2;
		displayName = "SVD Magazine";
		descriptionShort = "SVD 10 Round Magazine loaded with 7.62x54mmR Rounds.";
		model="A6_Weapons\Snipers\SVD\SVD_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 120;
		weightPerQuantityUnit = 9.0;
		itemSize[] = {1,1};
		count = 10;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\SVD\data\camo_lower.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SVD\data\camo_lower.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SVD\data\camo_lower_destruct.rvmat"}}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class A6_Mag_SVD_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName = "SVD Magazine";
		descriptionShort = "SVD 20 Round Magazine loaded with 7.62x54mmR Rounds.";
		model="A6_Weapons\Snipers\SVD\SVD_mag_20rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 120;
		weightPerQuantityUnit = 9.0;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		tracersEvery = 0;
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
						{1.0,{"A6_Weapons\Snipers\SVD\data\camo_lower.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SVD\data\camo_lower.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SVD\data\camo_lower_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SVD\data\camo_lower_destruct.rvmat"}}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySVD_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Snipers\SVD\SVD_mag.p3d";
	};
	class ProxySVD_mag_20rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Snipers\SVD\SVD_mag_20rnd.p3d";
	};
};