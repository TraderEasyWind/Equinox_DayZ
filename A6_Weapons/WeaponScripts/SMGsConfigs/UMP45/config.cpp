class CfgPatches
{
	class A6_UMP45
	{
		units[]= {};
		weapons[] = 
		{
			"A6_UMP45",
			"A6_UMP45_Winter"
		};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {"A6_Mag_UMP45_25Rnd"};
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
	class A6_UMP45_Base: Rifle_Base
	{
		scope = 0;
		weight = 2500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.66353;
		barrelArmor = 2.0;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_45ACP"};
		magazines[] = {"A6_Mag_UMP45_25Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {1.6,1.6,1.3};
		aimSpeedModifier[]={0.23,0.23,0.23};
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadAction = "ReloadUMP";
		modes[] = {"SemiAuto","FullAuto"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"UMP45_Shot_1st_SoundSet","UMP45_Shot_1st_iterior_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet","UMP45_Slapback_SoundSet","UMP45_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"UMP45_1st_silencer_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_1st_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[] = {"UMP45_Shot_1st_SoundSet","UMP45_Shot_1st_iterior_SoundSet"};
			soundSetShot[] = {"UMP45_Shot_SoundSet","UMP45_Shot_iterior_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet","UMP45_Slapback_SoundSet","UMP45_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"UMP45_1st_silencer_SoundSet"},{"UMP45_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"UMP45_silencer_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
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
			strength = 66;
			type = "shot";
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
	};
	class A6_UMP45: A6_UMP45_Base
	{
		scope = 2;
		displayName = "HK UMP45";
		descriptionShort = "The Heckler & Koch UMP is a submachine gun developed and manufactured by Heckler & Koch. Heckler & Koch developed the UMP as a lighter and cheaper successor to the MP5, though both remain in production. Chambered for .45 ACP.";
		model = "A6_Weapons\SMGs\UMP45\UMP45.p3d";
		attachments[] = {"weaponWrap","weaponump45buttstock","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","pistolMuzzle"};
		itemSize[] = {6,3};
		hiddenSelections[] = {"camo_ump45"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\UMP45\data\camo_ump45_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\UMP45\data\camo_ump45.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\UMP45\data\camo_ump45.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\UMP45\data\camo_ump45.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_UMP45_Winter: A6_UMP45
	{
		scope=2;
		hiddenSelections[] = {"camo_ump45"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\UMP45\data\camo_ump45_winter_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\UMP45\data\camo_ump45.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_UMP45_25Rnd: Magazine_Base
 	{
		scope=2;
		displayName="HK UMP45 Magazine";
		descriptionShort="25 round magazine for the HK UMP45, loaded with .45 ACP rounds.";
		model = "A6_Weapons\SMGs\UMP45\UMP45_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=25;
		ammo = "Bullet_45ACP";
		ammoItems[] = {"Ammo_45ACP"};
		tracersEvery=0;
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
						{1.0,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_mag.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_mag.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_mag_destruct.rvmat"}}
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
    class ProxyUMP45_mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\SMGs\UMP45\UMP45_mag.p3d";
    };
};