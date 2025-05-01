class CfgPatches
{
	class A6_AK50
	{
		units[]={};
		weapons[] = {"A6_AK50"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_AKM"};
		magazines[]={};
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
	class A6_AK50_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.752228;
		barrelArmor = 4.444;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_50Beo"};
		magazines[]={"A6_Mag_Beowulf_10Rnd"};
		magazineSwitchTime = 0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.8,1.5,1.2};
		aimSpeedModifier[]={0.48,0.48,0.48};
		reloadAction = "ReloadAKM";
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.0;
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_frontsight"};
		CanAcceptDustCover = 1;
		CanAcceptSideMount = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"AK50_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Beowulf_Suppressed_Shot_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 125;
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		class AnimationSources
		{
			class translation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class lighttranslation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_AK50: A6_AK50_Base
	{
		scope=2;
		displayName="AK-50 BeoWulf";
		descriptionShort="The .50 Beowulf was designed to generate devastating stopping power at short to moderate ranges. Combining the rugged reliability of the AK style weapons with a unique .500 inch projectile and cartridge, this semi-automatic weapon is ideal as a brush hunting weapon and is capable of knocking down virtually anything you may run across. Chambered in .50 Beowulf";
		model="A6_Weapons\Rifles\AK50\AK50.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonetAK","weaponmuzzle338"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo_akm_barrel","camo_akm_reciever","camo_gun"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_akm_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK50\data\camo_gun_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK50\data\camo_gun.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK50\data\camo_gun.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK50\data\camo_gun.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK50\data\camo_gun_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK50\data\camo_gun_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK50\data\camo_gun_destruct.rvmat"}}
					};
				};
			};
		};
	};
};