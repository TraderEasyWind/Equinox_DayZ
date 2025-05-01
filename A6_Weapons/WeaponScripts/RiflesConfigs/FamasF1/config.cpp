class CfgPatches
{
	class A6_FamasF1
	{
		units[]={};
		weapons[] = {"A6_FamasF1"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]= {"A6_Mag_Famas_25Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class A6_FamasF1_Base: Rifle_Base
	{
		scope = 0;
		weight = 3600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.48;
		barrelArmor = 2.3;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[] = {"A6_Mag_Famas_25Rnd"};
		magazineSwitchTime = 0.3;
		initSpeedMultiplier = 1;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.2,0.2,0.2};
		reloadAction = "ReloadCZ61";
		simpleHiddenSelections[] = {"hide_rail"};
		modes[] = {"SemiAuto","Burst","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Famas_Shot_SoundSet","Famas_Tail_SoundSet","Famas_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Famas_silencer_SoundSet","Famas_silencerTail_SoundSet","Famas_silencerInteriorTail_SoundSet"},{"Famas_silencerHomeMade_SoundSet","Famas_silencerHomeMadeTail_SoundSet","Famas_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"Famas_Shot_SoundSet","Famas_Tail_SoundSet","Famas_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Famas_silencer_SoundSet","Famas_silencerTail_SoundSet","Famas_silencerInteriorTail_SoundSet"},{"Famas_silencerHomeMade_SoundSet","Famas_silencerHomeMadeTail_SoundSet","Famas_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Famas_Shot_SoundSet","Famas_Tail_SoundSet","Famas_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Famas_silencer_SoundSet","Famas_silencerTail_SoundSet","Famas_silencerInteriorTail_SoundSet"},{"Famas_silencerHomeMade_SoundSet","Famas_silencerHomeMadeTail_SoundSet","Famas_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			dispersion = 0.002;
			magazineSlot = "magazine";
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
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			PPMaskProperties[] = {};
			PPLensProperties[] = {};
			PPBlurProperties = 0.0;
		};
	};
	class A6_FamasF1: A6_FamasF1_Base
	{
		scope = 2;
		displayName = "Famas F1";
		descriptionShort = "The Famas F1 is a bullpup assault rifle designed and manufactured in France by MAS in 1978, a year after the Austrian Steyr AUG. Chambered for 5.56x45mm. Single, Burst, & Full Auto.";
		model = "A6_Weapons\Rifles\FamasF1\FamasF1.p3d";
		attachments[] = {"weaponWrap","weaponOptics","suppressorImpro"};
		itemSize[] = {6,3};
		hiddenSelections[] = {"camo","camo_rail"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\FamasF1\data\camo_co.paa","A6_Weapons\Rifles\FamasF1\data\camo_rail_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\FamasF1\data\camo.rvmat","A6_Weapons\Rifles\FamasF1\data\camo_rail.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FamasF1\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FamasF1\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FamasF1\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FamasF1\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FamasF1\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_Famas_25Rnd: Magazine_Base
 	{
		scope=2;
		displayName="Famas F1 Magazine";
		descriptionShort="25 round magazine for the Famas F1, loaded with 5.56x45mm rounds.";
		model="A6_Weapons\Rifles\FamasF1\FamasF1_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=200;
		weightPerQuantityUnit = 4.0;
		itemSize[] = {1,2};
		count = 25;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\FamasF1\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FamasF1\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FamasF1\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FamasF1\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FamasF1\data\camo_destruct.rvmat"}}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFamasF1_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\FamasF1\FamasF1_Mag.p3d";
	};
};  