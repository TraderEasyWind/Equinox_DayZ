class CfgPatches
{
	class A6_M24A3
	{
		units[] = {};
		weapons[] = {"A6_M24A3"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
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
	class A6_M24A3_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		weight = 5400;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 0.934214;
		chamberSize = 5;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_A6_338"};
		magazines[] = {};
		DisplayMagazine = 0;
		magazineSwitchTime = 0.38;
		barrelArmor = 3.125;
		ejectType = 0;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.32,0.32,0.32};
		reloadAction = "ReloadWinchester70";
		modes[] = {"Single"};
		simpleHiddenSelections[] = {"hide_barrel","hide_frontsight"};
		initSpeedMultiplier = 1.15;
		ROT = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Winchester70\w_winchester70_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_M24A3_Shot_SoundSet","SCOUT_Tail_SoundSet","SCOUT_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_T5000_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"A6_T5000_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 200;
			type = "shot";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
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
	class A6_M24A3: A6_M24A3_Base
	{
		scope = 2;
		displayName = "M24A3";
		descriptionShort = "The M24A3, an inner magazine .338 Lapua Magnum Long Rifle. Hold 4 Rounds plus 1.";
		model = "A6_Weapons\Snipers\M24A3\M24A3.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponBipod","weaponmuzzle338"};
		itemSize[] = {9,2};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M24A3\data\M24A3_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M24A3\data\M24A3.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\M24A3\data\M24A3.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M24A3\data\M24A3.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M24A3\data\M24A3_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M24A3\data\M24A3_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M24A3\data\M24A3_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
