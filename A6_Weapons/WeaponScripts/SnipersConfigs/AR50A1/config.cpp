class CfgPatches
{
	class A6_AR50A1
	{
		units[] = {};
		weapons[] = {"A6_AR50A1"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class A6_AR50A1_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		weight = 15400;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 0.934214;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_A6_127x99"};
		magazines[] = {};
		DisplayMagazine = 0;
		magazineSwitchTime = 0.38;
		barrelArmor = 3.125;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.6,0.6,0.6};
		reloadAction = "ReloadWinchester70";
		modes[] = {"Single"};
		simpleHiddenSelections[] = {"hide_barrel","hide_pistolgrip"};
		initSpeedMultiplier = 1.0;
		ROT = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Winchester70\w_winchester70_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AR50A1_SoundSet","SCOUT_Tail_SoundSet","SCOUT_InteriorTail_SoundSet"};
			reloadTime = 1;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
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
		class NoiseShoot
		{
			strength = 250;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
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
					overrideParticle = "weapon_shot_winch70_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0.1,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
	};
	class A6_AR50A1: A6_AR50A1_Base
	{
		scope = 2;
		displayName = "AR-50A1";
		descriptionShort = "The AR-50 rifle utilizes its weight and a large, fluted muzzle brake to reduce recoil. The AR-50 weighs approximately 34 pounds and is a single-shot. The barrel is thick and rigid to prevent it from flexing. All AR-50 barrels use 1:15 right hand rifling.";
		model = "A6_Weapons\Snipers\AR50A1\AR50A1.p3d";
		attachments[] = {"weaponWrap","weaponM4PistolGrip","weaponOptics","weaponBipod"};
		itemSize[] = {12,3};
		hiddenSelections[] = {"camo","camo_muzzle"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\AR50A1\data\AR50A1_co.paa","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\AR50A1\data\AR50A1.rvmat","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\AR50A1\data\AR50A1.rvmat","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AR50A1\data\AR50A1.rvmat","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AR50A1\data\AR50A1_damage.rvmat","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AR50A1\data\AR50A1_damage.rvmat","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AR50A1\data\AR50A1_destruct.rvmat","A6_Weapons\Snipers\AR50A1\data\AR50A1_Muzzle_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
