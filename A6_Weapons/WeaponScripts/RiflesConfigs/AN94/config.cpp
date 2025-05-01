class CfgPatches
{
	class A6_AN94
	{
		units[]={};
		weapons[] = {"A6_AN94"};
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
	class A6_AN94_Base: Rifle_Base
	{
		scope = 0;
		weight = 3850;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.829067;
		barrelArmor = 2.743;
		initSpeedMultiplier = 0.8;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		magazines[] = {"A6_Mag_AK74_30Rnd","A6_Mag_AK74_Orange_30Rnd","A6_Mag_AK74_45Rnd","A6_Mag_AK74_Orange_45Rnd","A6_Mag_AK74_60Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {1.7,1.7,0.7};
		aimSpeedModifier[]={0.34,0.34,0.34};
		reloadAction = "ReloadAKM";
		modes[] = {"SemiAuto","Burst","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		CanAcceptSideMount = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_AN94_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			reloadTime = 0.12;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"A6_AN94_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			burst = 2;
			reloadTime = 0.033;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"A6_AN94_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			reloadTime = 0.098;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
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
					overrideParticle = "weapon_shot_fnx_02";
					positionOffset[] = {-0.1,0,0};
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
	};
	class A6_AN94: A6_AN94_Base
	{
		scope=2;
		displayName="AN-94";
		descriptionShort="The AN-94 has the unique feature of delaying felt recoil for the first two rounds. This, it is claimed, increases hit probability under the most adverse combat conditions. The AN-94 offers a unique two-shot burst function at a stated 1800 rounds per minute.";
		model="A6_Weapons\Rifles\AN94\AN94.p3d";
		attachments[] = {"weaponWrap","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","weaponOptics"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo_gun","camo_sights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AN94\data\camo_gun_co.paa","A6_Weapons\Rifles\AN94\data\camo_sights_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AN94\data\camo_gun.rvmat","A6_Weapons\Rifles\AN94\data\camo_sights.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AN94\data\camo_gun.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AN94\data\camo_gun.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AN94\data\camo_gun_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AN94\data\camo_gun_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AN94\data\camo_gun_destruct.rvmat"}}
					};
				};
			};
		};
	};
};		