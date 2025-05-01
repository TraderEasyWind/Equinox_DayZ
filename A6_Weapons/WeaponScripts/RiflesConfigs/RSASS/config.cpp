class CfgPatches
{
	class A6_RSASS
	{
		units[] = {};
		weapons[] = {"A6_RSASS"};
		requiredVersion = 0.1;
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
	class A6_RSASS_Base: Rifle_Base
	{
		scope=0;
		weight=4800;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		simpleHiddenSelections[]={"hide_pistolgrip"};
		WeaponLength=0.85;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_308_Stanag_20Rnd","A6_Mag_308_PMAG_20Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.3,2.3,1.4};
		aimSpeedModifier[]={0.39,0.39,0.39};
		reloadAction="ReloadFal";
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.2;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"AR10_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.00045;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
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
	class A6_RSASS: A6_RSASS_Base
	{
		scope=2;
		displayName="RSASS";
		descriptionShort="The Remington Semi Automatic Sniper System (RSASS) is a semi-automatic precision rifle manufactured by Remington Arms. The rifle is based on the Stoner AR-10 system adapted to .308 caliber cartridges, with adjustable direct gas impingement operation and rotary bolt locking. The receiver is designed with a folding charging handle located on the left side.";
		model="A6_Weapons\Rifles\RSASS\RSASS.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[]={9,3};
		hiddenSelections[] = {"camo_buffertube","camo_pistolgrip","camo_rsass_handguard","camo_rsass_receiver"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_co.paa",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard_co.paa",
			"A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard.rvmat",
			"A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat","A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat","A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_damage.rvmat","A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_damage.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard_damage.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_damage.rvmat","A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_damage.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard_damage.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_destruct.rvmat","A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_destruct.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_handguard_destruct.rvmat","A6_Weapons\Rifles\RSASS\Data\camo_rsass_receiver_destruct.rvmat"}}
					};
				};
			};
		};
	};	
};