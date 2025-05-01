class CfgPatches
{
	class A6_ASH12
	{
		units[]={};
		weapons[] = {"A6_ASH12"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]= {"A6_Mag_ASH12_10Rnd","A6_Mag_ASH12_20Rnd"};
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
	class A6_ASH12_Base: Rifle_Base
	{
		scope=0;
		weight=6000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		opticsFlare=0;
		WeaponLength=0.934214;
		value=0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_A6_127x55"};
		magazines[] = {"A6_Mag_ASH12_10Rnd","A6_Mag_ASH12_20Rnd"};
		magazineSwitchTime=0.45;
		barrelArmor = 1.6;
		ejectType=0;
		recoilModifier[] = {1,1,1};
		swayModifier[]={2,1.7,1.3};
		aimSpeedModifier[]={0.35,0.35,0.35};
		simpleHiddenSelections[]={"hide_ironsights","hide_muzzle"};
		modes[]={"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"PolarExpress_Shot_SoundSet","PolarExpress_Tail_SoundSet","PolarExpress_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"VSSK_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.4;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"PolarExpress_Shot_SoundSet","PolarExpress_Tail_SoundSet","PolarExpress_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"VSSK_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.4;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.004;
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
		class NoiseShoot
		{
			strength = 75;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
	};
    class A6_ASH12: A6_ASH12_Base
	{
		scope=2;
        displayName="ASH-12";
		descriptionShort="The ASH-12 is a dedicated Close/Urban combat weapon for high-risk law enforcement operations, which must combine high stopping power with limited penetration and a short 'dangerous range', to avoid collateral damage to innocent bystanders or hostages. Rifle chambered in 12.7×55mm STs-130 subsonic round.";
		model="A6_Weapons\Rifles\ASH12\ASH12.p3d";
		attachments[]={"weaponWrap","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","ASH12Suppressor"};
		itemSize[]={7,3};
		hiddenSelections[] = {"camo_ash12","camo_ash12_muzzle"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\ASH12\data\camo_ash12_co.paa","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\ASH12\data\camo_ash12.rvmat","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\ASH12\data\camo_ash12.rvmat","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ASH12\data\camo_ash12.rvmat","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_damage.rvmat","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_damage.rvmat","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_destruct.rvmat","A6_Weapons\Rifles\ASH12\data\camo_ash12_muzzle_destruct.rvmat"}}
					};
				};
			};		
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_ASH12_10Rnd: Magazine_Base
 	{
		scope=2;
		displayName="ASH12 Magazine";
		descriptionShort="10 round magazine for the ASH-12, loaded with 12.7×55mm STs-130 subsonic rounds.";
		model="A6_Weapons\Rifles\ASH12\ASH12_10rnd_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=250;
		itemSize[]={1,2};
		count=10;
		ammo="Bullet_A6_127x55";
		ammoItems[]= {"Ammo_A6_127x55"};
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
						{1.0,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine_destruct.rvmat"}}
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
	class A6_Mag_ASH12_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="ASH12 Magazine";
		descriptionShort="20 round magazine for the ASH-12, loaded with 12.7×55mm STs-130 subsonic rounds.";
		model="A6_Weapons\Rifles\ASH12\ASH12_20rnd_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=500;
		itemSize[]={1,3};
		count=20;
		ammo="Bullet_A6_127x55";
		ammoItems[]= {"Ammo_A6_127x55"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.2,1.2,1.2};
		recoilModifier[]={0.85,0.85,0.85};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ASH12\data\camo_ash12_magazine_destruct.rvmat"}}
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
	class ProxyASH12_10rnd_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\ASH12\ASH12_10rnd_Mag.p3d";
	};
	class ProxyASH12_20rnd_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\ASH12\ASH12_20rnd_Mag.p3d";
	};
};	
