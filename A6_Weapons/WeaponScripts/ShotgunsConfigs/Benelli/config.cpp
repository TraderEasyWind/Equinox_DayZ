class CfgPatches
{
	class A6_Benelli
	{
		units[]={};
		weapons[]={"A6_Benelli"};
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
	class A6_Benelli_Base: Rifle_Base
	{
		scope = 0;
		weight = 3538;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 8;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		PPDOFProperties[] = {};
		DisplayMagazine = 0;
		WeaponLength = 1.03525;
		barrelArmor = 2.25;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.25,0.25,0.25};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadAction = "ReloadSks";
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 1.35;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
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
	class A6_Benelli: A6_Benelli_Base
	{
		scope=2;
		displayName="Benelli M4";
		descriptionShort="The Benelli M4 is a semi-automatic shotgun produced by Italian firearm manufacturer Benelli Armi SpA, and the fourth and last model of the Benelli Super 90 line of semi-automatic shotguns. The M4 uses a proprietary action design called the auto-regulating gas-operated (ARGO) system, which was created specifically for the weapon.";
		model="A6_Weapons\Shotguns\Benelli\Benelli.p3d";
		attachments[]={"weaponWrap","weaponOptics","weaponForegrip","weaponLightRight","weaponMuzzleShotgun"};
		itemSize[]={8,2};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Benelli\data\camo1_co.paa","A6_Weapons\Shotguns\Benelli\data\camo2_co.paa","A6_Weapons\Shotguns\Benelli\data\camo3_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Benelli\data\camo1.rvmat","A6_Weapons\Shotguns\Benelli\data\camo2.rvmat","A6_Weapons\Shotguns\Benelli\data\camo3.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Shotguns\Benelli\data\camo1.rvmat","A6_Weapons\Shotguns\Benelli\data\camo2.rvmat","A6_Weapons\Shotguns\Benelli\data\camo3.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Benelli\data\camo1.rvmat","A6_Weapons\Shotguns\Benelli\data\camo2.rvmat","A6_Weapons\Shotguns\Benelli\data\camo3.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Benelli\data\camo1_damage.rvmat","A6_Weapons\Shotguns\Benelli\data\camo2_damage.rvmat","A6_Weapons\Shotguns\Benelli\data\camo3_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Benelli\data\camo1_damage.rvmat","A6_Weapons\Shotguns\Benelli\data\camo2_damage.rvmat","A6_Weapons\Shotguns\Benelli\data\camo3_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Benelli\data\camo1_destruct.rvmat","A6_Weapons\Shotguns\Benelli\data\camo2_destruct.rvmat","A6_Weapons\Shotguns\Benelli\data\camo3_destruct.rvmat"}}
					};
				};
			};
		};
	};
};		