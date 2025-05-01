class CfgPatches
{
	class A6_M110
	{
		units[]={};
		weapons[]={"A6_M110"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
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
	class A6_M110_Base: Rifle_Base
	{
		scope=0;
		weight=6214;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[] = {};
		WeaponLength = 0.814784;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_308_Stanag_20Rnd","A6_Mag_308_PMAG_20Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.4,0.4,0.4};
		reloadAction="ReloadM4";
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.15;
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_barrel","hide_muzzle"};
		hasRailFunctionality = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"AR10_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0005;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 100;
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=50;
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_M110: A6_M110_Base
	{
		scope=2;
		displayName="KAC M110k1";
		descriptionShort="KAC’s M110 Sniper System (SASS) is one of the success stories in small arms procurement for the U.S. military in the twenty-first century. Semi-Auto Chambered for .308 Winchester.";
		model="A6_Weapons\Rifles\M110\M110.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[]={9,3};
		hiddenSelections[] = {"camo","camo_buffertube","camo_pistolgrip"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\M110\data\M110_co.paa","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_co.paa","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\M110\data\M110.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\M110\data\M110.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M110\data\M110.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M110\data\M110_damaged.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M110\data\M110_damaged.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M110\data\M110_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
};