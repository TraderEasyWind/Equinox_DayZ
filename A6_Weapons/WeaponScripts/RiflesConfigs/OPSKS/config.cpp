class CfgPatches
{
	class A6_OPSKS
	{
		units[] = {"A6_OPSKS","A6_OPSKS_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_OPSKS_20Rnd"};
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
	class A6_OPSKS_Base: Rifle_Base
	{
		scope = 0;
		weight = 3400;
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
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		magazines[] = {"A6_Mag_OPSKS_20Rnd"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {2.4,2.4,1.3};
		aimSpeedModifier[]={0.33,0.33,0.33};
		reloadAction = "ReloadSVD";
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptBipod = 1;
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		modes[] = {"SemiAuto"};
		simpleHiddenSelections[] = {"hide_barrel"};
        weaponStateAnim = "dz\anims\anm\player\reloads\SVD\w_SVD_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SKS_Shot_SoundSet","SKS_Tail_SoundSet","SKS_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SKS_silencerHomeMade_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_sks";
			recoilProne = "recoil_sks_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
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
					overrideParticle = "weapon_shot_sks_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 20;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
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
	class A6_OPSKS: A6_OPSKS_Base
	{
		scope = 2;
		displayName = "OP-SKS";
		descriptionShort = "The OP-SKS is a Russian hunting firearm developed for the civilian market. The OP-SKS is a conversion of the SKS, developed for use with both commercial and amateur hunters for taking down medium or large animals.";
		model = "A6_Weapons\Rifles\OPSKS\OPSKS.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponSKSOpticMount","weaponOptics","weaponForegrip","weaponBipod","weaponBayonetSKS","weaponMuzzleSKS"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo_sks"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\OPSKS\data\camo_sks_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_OPSKS_Black: A6_OPSKS
	{
		scope = 2;
		hiddenSelections[] = {"camo_sks"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\OPSKS\data\camo_sks_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_OPSKS_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName = "OP-SKS ProMag";
		descriptionShort = "SKS 20 Round Magazine loaded with 7.62x39mm Rounds.";
		model="A6_Weapons\Rifles\OPSKS\OPSKS_Magazine.p3d";
		weight = 120;
		weightPerQuantityUnit = 9.0;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
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
						{1.0,{"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_destruct.rvmat"}}
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
	class ProxyOPSKS_Magazine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Rifles\OPSKS\OPSKS_Magazine.p3d";
	};
};