class CfgPatches
{
	class A6_ACR
	{
		units[]={};
		weapons[]={"A6_ACR"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_68_SPC_30Rnd"};
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
	class A6_ACR_Base: Rifle_Base
	{
		scope=0;
		weight=4000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.752228;
		barrelArmor = 2.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_A6_68SPC"};
		magazines[] = {"A6_Mag_68_SPC_30Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,1.5};
		aimSpeedModifier[]={0.3,0.3,0.3};
		reloadAction="ReloadFal";
		modes[] = {"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip","folding_lowered","folding_raised","hide_muzzle"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"PSG1_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SPC_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"PSG1_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SPC_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.099;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.002;
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
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
	};
	class A6_ACR: A6_ACR_Base
	{
		scope=2;
		displayName="Remington ACR";
		descriptionShort="The Remington ACR, or Adaptive Combat Rifle (ACR) was originally developed by Magpul Industries and was known as Masada. Chambered in 6.8mm Remington SPC.";
		model="A6_Weapons\Rifles\ACR\ACR.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponM4PistolGrip","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzle308"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\ACR\Data\ACRUpper_co.paa","A6_Weapons\Rifles\ACR\Data\ACRBack_co.paa","A6_Weapons\Rifles\ACR\Data\ACRBarrel_co.paa","A6_Weapons\Rifles\ACR\Data\ACRIronsights_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\ACR\Data\ACRUpper.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBack.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBarrel.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\ACR\Data\ACRUpper.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBack.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBarrel.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ACR\Data\ACRUpper.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBack.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBarrel.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ACR\Data\ACRUpper_damaged.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBack_damaged.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBarrel_damaged.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ACR\Data\ACRUpper_damaged.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBack_damaged.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBarrel_damaged.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ACR\Data\ACRUpper_destruct.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBack_destruct.rvmat","A6_Weapons\Rifles\ACR\Data\ACRBarrel_destruct.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_68_SPC_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="6.8 SPC Universal Magazine";
		descriptionShort="30 round magazine for 6.8 SPC Chambered Weapons ( Remington ACR ), loaded with 6.8mm Remington SPC Rounds.";
		model="A6_Weapons\Rifles\ACR\ACR_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_A6_68SPC";
		ammoItems[]={"Ammo_A6_68SPC"};
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
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\ACR\Data\magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ACR\Data\magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ACR\Data\magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ACR\Data\magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ACR\Data\magazine_destruct.rvmat"}}
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
	class ProxyACR_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\ACR\ACR_Mag.p3d";
	};
};	