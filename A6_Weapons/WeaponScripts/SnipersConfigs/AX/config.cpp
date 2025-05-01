class CfgPatches
{
	class A6_AX
	{
		units[] = {};
		weapons[] = {"A6_AX","A6_AX_Black"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_AX_7Rnd"};
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
	class A6_AX_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight = 7000;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_A6_338"};
		magazines[] = {"A6_Mag_AX_7Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 3.125;
		ejectType = 0;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.0,2.0,1.0};
		aimSpeedModifier[] = {0.5,0.5,0.5};
		modes[] = {"Single"};
		initSpeedMultiplier = 1.05;
		hasRailFunctionality = 1;
		CanAcceptBipod = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		simpleHiddenSelections[] = {"hide_barrel"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_AX_Shot_SoundSet","SCOUT_Tail_SoundSet","SCOUT_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_AX_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"A6_AX_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil="SV98Recoil";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 200;
			type = "shot";
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
	};
	class A6_AX: A6_AX_Base
	{
		scope = 2;
		displayName = "AX-MKIII";
		descriptionShort = "The AX MKIII is the latest in a long and distinguished line of combat proven sniper rifles from AI and has been designed to meet current operational needs in Europe and around the world. Chambered for .338 Lapua Magnum.";
		model = "A6_Weapons\Snipers\AX\AX.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponmuzzle338"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo_rifle","camo_butt"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\AX\data\camo_rifle_co.paa","A6_Weapons\Snipers\AX\data\camo_butt_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\AX\data\camo_rifle.rvmat","A6_Weapons\Snipers\AX\data\camo_butt.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\AX\data\camo_rifle.rvmat","A6_Weapons\Snipers\AX\data\camo_butt.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AX\data\camo_rifle.rvmat","A6_Weapons\Snipers\AX\data\camo_butt.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AX\data\camo_rifle_damage.rvmat","A6_Weapons\Snipers\AX\data\camo_butt_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AX\data\camo_rifle_damage.rvmat","A6_Weapons\Snipers\AX\data\camo_butt_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AX\data\camo_rifle_destruct.rvmat","A6_Weapons\Snipers\AX\data\camo_butt_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AX_Black: A6_AX
	{
		scope = 2;
		hiddenSelections[] = {"camo_rifle","camo_butt"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\AX\data\camo_rifle_black_co.paa","A6_Weapons\Snipers\AX\data\camo_butt_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\AX\data\camo_rifle.rvmat","A6_Weapons\Snipers\AX\data\camo_butt.rvmat"};
	};	
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AX_7Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AX-MKIII Magazine";
		descriptionShort = "7 round magazine for the AX-MKIII, loaded with .338 Lapua Magnum rounds.";
		model = "A6_Weapons\Snipers\AX\AX_Mag.p3d";
		weight = 120;
		itemSize[] = {2,2};
		count = 7;
		ammo = "Bullet_A6_338";
		ammoItems[] = {"Ammo_A6_338"};
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
						{1.0,{"A6_Weapons\Snipers\AX\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AX\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AX\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AX\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AX\data\camo_magazine_destruct.rvmat"}}
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
    class ProxyAX_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\AX\AX_Mag.p3d";
    };
}; 