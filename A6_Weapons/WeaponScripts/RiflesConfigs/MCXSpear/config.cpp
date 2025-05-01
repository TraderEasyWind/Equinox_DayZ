class CfgPatches
{
	class A6_MCX_Spear
	{
		units[]={};
		weapons[]={"A6_MCX_Spear"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_MCX_Spear_20Rnd"};
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
	class A6_MCX_Spear_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength=0.75222802;
		barrelArmor = 2.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_277FURY"};
		magazines[]={"A6_Mag_MCX_Spear_20Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.9,1.9,1.3};
		aimSpeedModifier[]={0.39,0.39,0.39};
		reloadAction="ReloadM4";
		modes[]={"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.00;
		simpleHiddenSelections[] = {"hide_irons4laser","hide_muzzle"};
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"MCXSpear_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MCXSpear_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"MCXSpear_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MCXSpear_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.099;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_MCX_Spear: A6_MCX_Spear_Base
	{
		scope=2;
		displayName="MCX-SPEAR";
		descriptionShort="The SIG MCX is a family of firearms designed and manufactured by SIG Sauer, and features a short-stroke gas piston system. Chambered for .277 SIG FURY.";
		model="A6_Weapons\Rifles\MCXSpear\MCXSpear.p3d";
		attachments[]={"weaponWrap","weaponOptics","weaponButtstockM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle277"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\MCXSpear\data\camo_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MCXSpear\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MCXSpear\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MCXSpear\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_MCX_Spear_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="MCX-SPEAR Magazine";
		descriptionShort="20 round magazine for the MCX-SPEAR, loaded with .277 SIG FURY rounds.";
		model="A6_Weapons\Rifles\MCXSpear\MCXSpear_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=250;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_A6_277FURY";
		ammoItems[]={"Ammo_A6_277FURY"};
		tracersEvery=0;
		mass=20;
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
						{1.0,{"A6_Weapons\Rifles\MCXSpear\data\camo_mag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MCXSpear\data\camo_mag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MCXSpear\data\camo_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MCXSpear\data\camo_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MCXSpear\data\camo_mag_destruct.rvmat"}}
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
	class ProxyMCXSpear_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Rifles\MCXSpear\MCXSpear_mag.p3d";
	};
};	