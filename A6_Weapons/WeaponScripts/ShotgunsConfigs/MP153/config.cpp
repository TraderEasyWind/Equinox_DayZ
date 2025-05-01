class CfgPatches
{
	class A6_MP153
	{
		units[]={};
		weapons[]={"A6_MP153"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
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
	class A6_MP153_Base: Rifle_Base
	{
		scope = 0;
		weight = 3538;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 6;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		PPDOFProperties[] = {};
		DisplayMagazine = 0;
		WeaponLength = 1.03525;
		barrelArmor = 2.25;
		ejectType = 1;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.7,2.7,1.6};
		aimSpeedModifier[]={0.28,0.28,0.28};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadAction = "ReloadSks";
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 1.35;
        weaponStateAnim = "dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP153_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SuppressedShotgun_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
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
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class AnimationSources
		{
			class translation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_MP153: A6_MP153_Base
	{
		scope=2;
		displayName="MP-153";
		descriptionShort="The Baikal MP-153 is a 12 gauge gas-operated semi-automatic shotgun manufactured by Kalashnikov Concern in Russia.";
		model = "A6_Weapons\Shotguns\MP153\MP153.p3d";
		attachments[] = {"weaponWrap","MossbergOpticMount","weaponOptics","MP153Forearm","MossbergStock","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleShotgun"};
		itemSize[]={8,2};
		hiddenSelections[] = {"camo_mp153","camo_pistolgrip_2","forearm"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\MP153\data\camo_mp153_co.paa","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_co.paa","A6_Weapons\Shotguns\MP153\data\camo_mp153_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\MP153\data\camo_mp153.rvmat","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2.rvmat","A6_Weapons\Shotguns\MP153\data\camo_mp153.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Shotguns\MP153\data\camo_mp153.rvmat","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\MP153\data\camo_mp153.rvmat","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\MP153\data\camo_mp153_damage.rvmat","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\MP153\data\camo_mp153_damage.rvmat","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\MP153\data\camo_mp153_destruct.rvmat","A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_destruct.rvmat"}}
					};
				};
			};
		};
	};
};		