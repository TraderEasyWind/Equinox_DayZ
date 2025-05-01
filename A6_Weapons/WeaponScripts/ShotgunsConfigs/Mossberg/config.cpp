class CfgPatches
{
	class A6_Mossberg_590
	{
		units[] = {};
		weapons[] = {"A6_Mossberg_590"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class A6_Mossberg_590_Base: Shotgun_Base
	{
		scope = 0;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 9;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 1.03525;
		barrelArmor = 2.25;
		initSpeedMultiplier = 1.25;
		ejectType = 0;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.7,2.7,1.6};
		aimSpeedModifier[]={0.23,0.23,0.23};
		cartridgeCreateTime[] = {0.55,0.82};
		modes[] = {"Single"};
        weaponStateAnim = "dz\anims\anm\player\reloads\MP133\w_mp133_states.anm";
		boneRemap[] = {"bolt","Weapon_Bolt","pump","Weapon_Bone_01","feedRamp","Weapon_Bone_02","trigger","Weapon_Trigger","bullet","Weapon_Bullet","boltrelease","Weapon_Bone_03"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Mossberg590_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SuppressedShotgun_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
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
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
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
			class ghillietranslation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_Mossberg_590: A6_Mossberg_590_Base
	{
		scope = 2;
		displayName = "Mossberg 590";
		descriptionShort = "The Mossberg 590 was developed by O.F.Mossberg & sons company (USA) in the mid-1970s as a military specifications (adopted for US Military) modification of the Mossberg model 500 shotgun.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg.p3d";
		animName = "ShotgunMp133";
		attachments[] = {"weaponWrap","MossbergOpticMount","weaponOptics","MossbergStock","MossbergForearm","MossbergShroud","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleShotgun"};
		itemSize[] = {7,2};
		weight = 3300;
		hiddenSelections[] = {"camo_forearm_1","camo_mossberg_590","camo_rearsight","camo_pistolgrip_2"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood_co.paa",
			"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_co.paa",
			"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight_co.paa",
			"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood.rvmat",
			"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat",
			"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight.rvmat",
			"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{
							1.0,
							{
								"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood_damage.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_damage.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight_damage.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood_damage.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_damage.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight_damage.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_wood_destruct.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_destruct.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_rearsight_destruct.rvmat",
								"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};	