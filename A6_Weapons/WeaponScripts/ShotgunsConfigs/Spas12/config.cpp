class CfgPatches
{
	class A6_Spas12
	{
		units[]={};
		weapons[]={"A6_Spas12","A6_Spas12_Winter"};
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
	class A6_Spas12_Base: Rifle_Base
	{
		scope = 0;
		weight = 4400;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 9;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		PPDOFProperties[] = {};
		DisplayMagazine = 0;
		WeaponLength = 1.03525;
		barrelArmor = 2.25;
		ejectType = 1;
		recoilModifier[] = {1.25,1.25,1.25};
		swayModifier[] = {2.5,2.5,1.5};
		aimSpeedModifier[]={0.28,0.28,0.28};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadAction = "ReloadSks";
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 1.35;
		hasRailFunctionality = 1;
		CanAcceptRightFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AA12_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SuppressedShotgun_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
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
	};
	class A6_Spas12: A6_Spas12_Base
	{
		scope=2;
		displayName="SPAS-12";
		descriptionShort="The Franchi SPAS-12 is a combat shotgun manufactured by Italian firearms company Franchi from 1979 to 2000.";
		model="A6_Weapons\Shotguns\Spas12\Spas12.p3d";
		attachments[]={"weaponWrap","weaponSpas12Buttstock","weaponOptics","weaponLightRight","weaponMuzzleShotgun"};
		itemSize[]={6,2};
		hiddenSelections[] = {"camo","camo_rails"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Spas12\data\camo_co.paa","A6_Weapons\Shotguns\Spas12\data\camo_rails_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Spas12\data\camo.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Shotguns\Spas12\data\camo.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Spas12\data\camo.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Spas12\data\camo_damage.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Spas12\data\camo_damage.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Spas12\data\camo_destruct.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Spas12_Winter: A6_Spas12
	{
		scope=2;
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Spas12\data\camo_winter_co.paa","A6_Weapons\Shotguns\Spas12\data\camo_rails_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Spas12\data\camo.rvmat","A6_Weapons\Shotguns\Spas12\data\camo_rails.rvmat"};
	};
};		