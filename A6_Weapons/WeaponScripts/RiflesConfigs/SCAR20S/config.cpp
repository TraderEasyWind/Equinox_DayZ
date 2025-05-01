class CfgPatches
{
	class A6_SCAR20S
	{
		units[]={};
		weapons[]={"A6_SCAR20S","A6_SCAR20S_Tan"};
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
	class A6_SCAR20S_Base: Rifle_Base
	{
		scope=0;
		weight=4200;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		simpleHiddenSelections[]={"hide_pistolgrip","hide_buttstockplate"};
		WeaponLength=0.875;
		barrelArmor = 2.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_SCARH_20Rnd","A6_Mag_SCARH_Tan_20Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.6,2.5,1.8};
		aimSpeedModifier[]={0.42,0.42,0.42};
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
			soundSetShot[] = {"SCARH_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
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
	class A6_SCAR20S: A6_SCAR20S_Base
	{
		scope=2;
		displayName="SCAR 20S";
		descriptionShort="The FN SCAR 20S Precision Rifle chambered in 7.62×51mm NATO was introduced in 2019. It is a semi-automatic only civilian version of the FN Mk 20 SSR.";
		model="A6_Weapons\Rifles\SCAR20S\SCAR20S.p3d";
		attachments[]={"weaponWrap","weaponTubeStockAdapterScar","weaponButtstockM4","weaponScarButtstock","weaponM4PistolGrip","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[]={9,3};
		hiddenSelections[] = {"camo_barrel","camo_grip","camo_reciever"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_black_co.paa","A6_Weapons\Rifles\SCAR20S\data\camo_grip_black_co.paa","A6_Weapons\Rifles\SCAR\Data\Reciever_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SCAR20S\data\camo_barrel.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_damage.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_damage.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_destruct.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip_destruct.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_SCAR20S_Tan: A6_SCAR20S
	{
		scope = 2;
		hiddenSelections[] = {"camo_barrel","camo_grip","camo_reciever"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_tan_co.paa","A6_Weapons\Rifles\SCAR20S\data\camo_grip_tan_co.paa","A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SCAR20S\data\camo_barrel.rvmat","A6_Weapons\Rifles\SCAR20S\data\camo_grip.rvmat","A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat"};
	};
};