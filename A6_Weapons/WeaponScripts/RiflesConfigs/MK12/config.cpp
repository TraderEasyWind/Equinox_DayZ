class CfgPatches
{
	class A6_MK12
	{
		units[]={};
		weapons[]={"A6_MK12"};
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
	class A6_MK12_Base: Rifle_Base
	{
		scope=0;
		weight=3100;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.752228;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {1,1,0.6};
		aimSpeedModifier[]={0.37,0.37,0.37};
		reloadAction="ReloadM4";
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.15;
		simpleHiddenSelections[] = {"hide_barrel","hide_railguards","hide_pistolgrip"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"MK12_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0005;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 82;
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
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
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
	class A6_MK12: A6_MK12_Base
	{
		scope=2;
		displayName="Mk 12 SPR";
		descriptionShort="The United States Navy Mark 12 Mod 0/1 Special Purpose Rifle (SPR) marksman rifle that was in service with United States Special Operations Forces in the designated marksman role until 2017, also designed to be shorter than standard weapons.";
		model="A6_Weapons\Rifles\MK12\MK12.p3d";
		attachments[] = {"weaponWrap","weaponM4PistolGrip","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleM4"};
		itemSize[]={9,3};
		hiddenSelections[]= {"camo","camo2","camo3"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\MK12\data\receiver_co.paa","A6_Weapons\Rifles\MK12\data\stock_co.paa","A6_Weapons\Rifles\MK12\data\handguard_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\MK12\data\receiver.rvmat","A6_Weapons\Rifles\MK12\data\stock.rvmat","A6_Weapons\Rifles\MK12\data\handguard.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\MK12\data\receiver.rvmat","A6_Weapons\Rifles\MK12\data\stock.rvmat","A6_Weapons\Rifles\MK12\data\handguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MK12\data\receiver.rvmat","A6_Weapons\Rifles\MK12\data\stock.rvmat","A6_Weapons\Rifles\MK12\data\handguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MK12\data\receiver_damage.rvmat","A6_Weapons\Rifles\MK12\data\stock_damage.rvmat","A6_Weapons\Rifles\MK12\data\handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MK12\data\receiver_damage.rvmat","A6_Weapons\Rifles\MK12\data\stock_damage.rvmat","A6_Weapons\Rifles\MK12\data\handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MK12\data\receiver_destruct.rvmat","A6_Weapons\Rifles\MK12\data\stock_destruct.rvmat","A6_Weapons\Rifles\MK12\data\handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
};