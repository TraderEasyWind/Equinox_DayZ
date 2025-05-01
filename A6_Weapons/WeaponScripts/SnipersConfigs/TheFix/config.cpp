class CfgPatches
{
	class A6_TheFix
	{
		units[]={};
		weapons[] = {"A6_TheFix","A6_TheFix_Green"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]= {"A6_Mag_TheFix_10Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class A6_TheFix_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		weight=2200;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=0.934214;
		value=0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_A6_86BLK"};
		magazines[] = {"A6_Mag_TheFix_10Rnd"};
		magazineSwitchTime=0.38;
		barrelArmor = 3.125;
		ejectType=0;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {1.5,1.5,1.2};
		aimSpeedModifier[] = {0.3,0.3,0.3};
		modes[]={"Single"};
		initSpeedMultiplier = 1.00;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		simpleHiddenSelections[]= {"hide_barrel"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_TheFix_Shot_SoundSet","Ruger1022_Tail_SoundSet","Ruger1022_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_TheFix_Suppressed_Shot_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil="SV98Recoil";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 50;
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
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class AnimationSources
		{
			class huntingscopetrans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
    class A6_TheFix: A6_TheFix_Base
	{
		scope=2;
        displayName="The Fix";
		descriptionShort="The Fix by Q is an extremely light weight rifle, redefining what a bolt-action firearm should be. Chambered in 8.6 BLK.";
		model="A6_Weapons\Snipers\TheFix\TheFix.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle86"};
		itemSize[]={7,3};
		hiddenSelections[] = {"camo","camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\TheFix\data\camo_co.paa","A6_Weapons\Snipers\TheFix\data\camo_buttstock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\TheFix\data\camo.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\TheFix\data\camo.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\TheFix\data\camo.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\TheFix\data\camo_damage.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\TheFix\data\camo_damage.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\TheFix\data\camo_destruct.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock_destruct.rvmat"}}
					};
				};
			};		
		};
	};
	class A6_TheFix_Green: A6_TheFix
	{
		scope=2;
		hiddenSelections[] = {"camo","camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\TheFix\data\camo_green_co.paa","A6_Weapons\Snipers\TheFix\data\camo_buttstock_green_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\TheFix\data\camo.rvmat","A6_Weapons\Snipers\TheFix\data\camo_buttstock.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_TheFix_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "The Fix Magazine";
		descriptionShort = "10 round magazine for the The Fix, loaded with 8.6 Blackout.";
		model="A6_Weapons\Snipers\TheFix\TheFix_magazine.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 120;
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_A6_86BLK";
		ammoItems[] = {"Ammo_A6_86BLK"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.05,1.05,1.05};
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
						{1.0,{"A6_Weapons\Snipers\TheFix\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\TheFix\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\TheFix\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\TheFix\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\TheFix\data\camo_destruct.rvmat"}}
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
class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyTheFix_magazine: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\Snipers\TheFix\TheFix_magazine.p3d";
    };
};