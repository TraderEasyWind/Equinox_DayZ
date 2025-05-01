class CfgPatches
{
	class A6_AugPara
	{
		units[] = {"A6_AugPara","A6_AugPara_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
		magazines[] = {"A6_Mag_AugPara_32Rnd"};
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
	class A6_AugPara_Base: Rifle_Base
	{
		scope = 0;
		weight = 2800;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[] = {"A6_Mag_AugPara_32Rnd"};
		magazineSwitchTime = 0.38;
		initSpeedMultiplier = 1.3;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.2,0.2,0.2};
		PPDOFProperties[] = {};
		WeaponLength = 0.48;
		barrelArmor = 2.0;
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadAug";
		modes[] = {"SemiAuto","Burst","FullAuto"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AUG\w_aug_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_AugPara_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"A6_AugPara_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.066;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"A6_AugPara_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.066;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 50;
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
					ignoreIfSuppressed = 1;
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
	class A6_AugPara: A6_AugPara_Base
	{
		scope = 2;
		displayName = "Steyr Aug Para";
		descriptionShort = "The Steyr Aug Para is an SMG varaint of the popular Austrian NATO bullpup assault rifle designed in the 1988. Chambered in 9x19mm Parabellum rounds.";
		model = "A6_Weapons\SMGs\AugPara\AugPara.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponLightRight","weaponForegrip","pistolMuzzle"};
		itemSize[] = {6,3};
		hiddenSelections[] = {"camo_a3_para_barrel","camo_a3_receiver","camo_para_magazine","camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel_co.paa","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_co.paa","A6_Weapons\SMGs\AugPara\data\camo_para_magazine_co.paa","A6_Weapons\Rifles\Aug\data\camo_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_damage.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_damage.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel_destruct.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_destruct.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine_destruct.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AugPara_Black: A6_AugPara
	{
		scope = 2;
		hiddenSelections[] = {"camo_a3_para_barrel","camo_a3_receiver","camo_para_magazine","camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel_co.paa","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_co.paa","A6_Weapons\SMGs\AugPara\data\camo_para_magazine_co.paa","A6_Weapons\Rifles\Aug\data\camo_stock_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\AugPara\data\camo_a3_para_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\SMGs\AugPara\data\camo_para_magazine.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AugPara_32Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Aug Para Magazine";
		descriptionShort = "32 round magazine for the AUG Para, loaded with 9x19mm Parabellum rounds.";
		model = "A6_Weapons\SMGs\AugPara\AugPara_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 200;
		itemSize[] = {1,3};
		count = 32;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery = 0;
		mass = 10;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\AugPara\data\camo_para_magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\AugPara\data\camo_para_magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\AugPara\data\camo_para_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\AugPara\data\camo_para_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\AugPara\data\camo_para_magazine_destruct.rvmat"}}
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
	class ProxyAugPara_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\SMGs\AugPara\AugPara_Mag.p3d";
	};
};