class CfgPatches
{
	class A6_CAR15
	{
		units[] = {"A6_CAR15"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
		magazine[] = {};
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
	class A6_CAR15_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.78;
		ShoulderDistance = 0.05;
		barrelArmor = 2.5;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_tubestock"};
		modes[] = {"SemiAuto","FullAuto"};
		CanAcceptCAR15Buttstock = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.099;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
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
					positionOffset[] = {0.0,0,0};
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
				maxOverheatingValue = 12;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 0.7;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.7};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.7,1.0};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.35,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class AnimationSources
		{
			class grip_trans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_CAR15: A6_CAR15_Base
	{
		scope = 2;
		displayName = "CAR-15";
		descriptionShort = "The Colt Automatic Rifle-15 or CAR-15 is a family of M16 rifle–based firearms marketed by Colt in the 1960s and early 1970s.";
		model = "A6_Weapons\Rifles\CAR15\CAR15.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOpticMountM16","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBayonet","weaponMuzzleM4"};
		itemSize[] = {8,3};
		hiddenSelections[]={"camo_m16","camo_pistolgrip","camo_stock_2"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\M16\data\camo_m16_co.paa",
			"A6_Weapons\Rifles\M16\data\camo_pistolgrip_co.paa",
			"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\M16\data\camo_m16.rvmat",
			"A6_Weapons\Rifles\M16\data\camo_pistolgrip.rvmat",
			"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=250;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\M16\data\camo_m16.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip.rvmat","A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M16\data\camo_m16.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip.rvmat","A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M16\data\camo_m16_damage.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip_damage.rvmat","A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M16\data\camo_m16_damage.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip_damage.rvmat","A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M16\data\camo_m16_destruct.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip_destruct.rvmat","A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_destruct.rvmat"}}
					};
                };
            };
        };
	};
};
