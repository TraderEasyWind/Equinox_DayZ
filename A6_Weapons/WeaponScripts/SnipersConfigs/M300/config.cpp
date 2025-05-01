class CfgPatches
{
	class A6_M300
	{
		units[]={};
		weapons[] = {"A6_M300"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]= {};
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
	class A6_M300_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		weight=8600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		opticsFlare=0;
		ironsightsExcludingOptics[]= {"HuntingOptic"};
		WeaponLength=0.934214;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_A6_408"};
		magazines[] = {"A6_Mag_M200_7Rnd"};
		magazineSwitchTime=0.38;
		barrelArmor = 3.125;
		ejectType=0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.0,2.0,1.0};
		aimSpeedModifier[] = {0.5,0.5,0.5};
		reloadAction="Reloadcz527";
		shotAction="Reloadcz527Shot";
		modes[]= {"Single"};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		initSpeedMultiplier = 0.95;
		ROT = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\cz527\w_cz527_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M300_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M200_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"M200_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 250;
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
    class A6_M300: A6_M300_Base
	{
		scope=2;
        displayName="Praetorian Composite M300";
		descriptionShort="The CheyTac Intervention is an American bolt-action sniper rifle manufactured by CheyTac LLC, which can also be classified as an anti-materiel rifle. Takes the Standard M200 CheyTac 7 Round Mag";
		model="A6_Weapons\Snipers\M300\M300.p3d";
        attachments[]={"weaponWrap","weaponOptics","weaponBipod","weaponmuzzle408"};
		itemSize[]={10,3};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M300\data\M300_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M300\data\M300.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\M300\data\M300.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M300\data\M300.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M300\data\M300_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M300\data\M300_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M300\data\M300_destruct.rvmat"}}
					};
				};
			};		
		};
	};
};