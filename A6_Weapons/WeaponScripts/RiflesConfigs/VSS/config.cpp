class CfgPatches
{
	class A6_VSS
	{
		units[] = {"A6_VSS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_VSS"};
		magazines[]=
		{
			"A6_Mag_VSS_10Rnd",
			"A6_Mag_VSS_Red_10Rnd",
			"A6_Mag_VAL_20Rnd",
			"A6_Mag_VAL_Red_20Rnd",
			"A6_Mag_Vikhr_30Rnd"
		};
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
	class VSS_Base;
	class A6_VSS_Base: Rifle_Base
	{
		scope = 0;
		weight = 2600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.78;
		barrelArmor = 2.4;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"A6_Mag_VSS_10Rnd","A6_Mag_VSS_Red_10Rnd","A6_Mag_VAL_20Rnd","A6_Mag_VAL_Red_20Rnd","A6_Mag_Vikhr_30Rnd","A6_Mag_SR3_30Rnd","A6_Mag_SR3_Red_30Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.24,0.24,0.24};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		reloadAction = "ReloadVSS";
		modes[] = {"SemiAuto","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.12;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.065;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 5;
			type = "sound";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
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
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.05,0,0};
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
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
	class A6_VSS: A6_VSS_Base
	{
		scope = 2;
		displayName = "VSS Vintorez";
		descriptionShort = "The AS Val is a silenced assault rifle of Soviet origin. It was developed in the 1980's to be used in urban combat and the reconnaissance role. Chambered for 9x39mm.";
		model = "A6_Weapons\Rifles\VSS\VSS_Vin.p3d";
		attachments[] = {"weaponWrap","weaponOpticMount","weaponOpticsAK","weaponOptics","weaponHandguardASVAL","weaponLightLeft","weaponLightRight","weaponLightTop","weaponForegrip","weaponBipod"};
		itemSize[] = {8,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\VSS\data\camo_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\VSS\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\VSS\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\VSS\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\VSS\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\VSS\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\VSS\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Vikhr: VSS_Base
	{
		aimSpeedModifier[]={0.2,0.2,0.2};
		magazines[] = {"A6_Mag_VSS_10Rnd","A6_Mag_VSS_Red_10Rnd","A6_Mag_VAL_20Rnd","A6_Mag_VAL_Red_20Rnd","A6_Mag_Vikhr_30Rnd","A6_Mag_SR3_30Rnd","A6_Mag_SR3_Red_30Rnd","Mag_VSS_10Rnd","Mag_VAL_20Rnd","Mag_Vikhr_30Rnd"};
	};	
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_VSS_10Rnd : Magazine_Base
	{
		scope = 2;
		displayName = "VSS Vintorez Magazine";
		descriptionShort="Detachable box magazine for the AS-VAL, VSS, & SR-3 rifles. Holds up to 10 rounds of 9x39mm.";
		model = "DZ\weapons\attachments\magazine\magazine_vss.p3d";
		weight = 350;
		weightPerQuantityUnit = 8.0;
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\VSS\data\vss_mag_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\VSS\data\vss_mag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\VSS\data\vss_mag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\VSS\data\vss_mag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\VSS\data\vss_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\VSS\data\vss_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\VSS\data\vss_mag_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class A6_Mag_VSS_Red_10Rnd : A6_Mag_VSS_10Rnd
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\VSS\data\vss_mag_red_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\VSS\data\vss_mag.rvmat"};
	};
	class A6_Mag_VAL_20Rnd : Magazine_Base
	{
		scope = 2;
		displayName = "AS-VAL Magazine";
		descriptionShort="Detachable box magazine for the AS-VAL, VSS, & SR-3 rifles. Holds up to 20 rounds of 9x39mm.";
		model = "DZ\weapons\attachments\magazine\magazine_val.p3d";
		weight = 550;
		weightPerQuantityUnit = 16.0;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\VSS\data\val_mag_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\VSS\data\val_mag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\VSS\data\val_mag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\VSS\data\val_mag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\VSS\data\val_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\VSS\data\val_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\VSS\data\val_mag_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class A6_Mag_VAL_Red_20Rnd : A6_Mag_VAL_20Rnd
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\VSS\data\val_mag_red_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\VSS\data\val_mag.rvmat"};
	};
	class A6_Mag_Vikhr_30Rnd : Magazine_Base
	{
		scope = 2;
		displayName = "Vikhr Magazine";
		descriptionShort = "Detachable 30-round magazine that holds 9x39mm bullets. Compatible with other guns that shoot the same ammo.";
		model = "DZ\weapons\attachments\magazine\magazine_vikhr_30rnd.p3d";
		weight = 750;
		weightPerQuantityUnit = 16.0;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.2,1.2,1.2};
		recoilModifier[]={0.87,0.87,0.87};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd.rvmat"}},
						{0.7,{"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd.rvmat"}},
						{0.5,{"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd_damage.rvmat"}},
						{0.3,{"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd_damage.rvmat"}},
						{0.0,{"DZ\weapons\attachments\magazine\data\magazine_vikhr_30rnd_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};	