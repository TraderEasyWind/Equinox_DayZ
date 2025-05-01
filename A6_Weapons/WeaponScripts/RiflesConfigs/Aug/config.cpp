class CfgPatches
{
	class A6_Aug
	{
		units[] = {"A6_AugA1","A6_AugA1_Black","A6_AugA3","A6_AugA3_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
		magazines[] = {"A6_Mag_Aug_30Rnd","A6_Mag_Aug_Black_30Rnd"};
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
	class A6_Aug_Base: Rifle_Base
	{
		scope = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[] = {"A6_Mag_Aug_30Rnd","A6_Mag_Aug_Black_30Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.28,0.28,0.28};
		PPDOFProperties[] = {};
		barrelArmor = 2.3;
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadAug";
		modes[] = {"SemiAuto","Burst","FullAuto"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AUG\w_aug_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.085;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.098;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
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
	};
	class A6_AugA1: A6_Aug_Base
	{
		scope = 2;
		displayName = "Steyr AUG A1";
		descriptionShort = "The Steyr AUG A1 is a popular Austrian NATO bullpup assault rifle designed in the 1988. Chambered in 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\Aug\AugA1.p3d";
		weight = 3600;
		initSpeedMultiplier = 1.0;
		WeaponLength = 0.8;
		attachments[] = {"weaponWrap","weaponOpticsAug","weaponMuzzleM4"};
		itemSize[] = {8,3};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		hiddenSelections[] = {"camo_a1_barrel","camo_a1_receiver","camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\Aug\data\camo_a1_barrel_co.paa","A6_Weapons\Rifles\Aug\data\camo_a1_receiver_co.paa","A6_Weapons\Rifles\Aug\data\camo_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\Aug\data\camo_a1_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\Aug\data\camo_a1_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Aug\data\camo_a1_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Aug\data\camo_a1_barrel_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Aug\data\camo_a1_barrel_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Aug\data\camo_a1_barrel_destruct.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver_destruct.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AugA1_Black: A6_AugA1
	{
		scope = 2;
		hiddenSelections[] = {"camo_a1_barrel","camo_a1_receiver","camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\Aug\data\camo_a1_barrel_co.paa","A6_Weapons\Rifles\Aug\data\camo_a1_receiver_co.paa","A6_Weapons\Rifles\Aug\data\camo_stock_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\Aug\data\camo_a1_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a1_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"};
	};
	class A6_AugA3: A6_Aug_Base
	{
		scope = 2;
		displayName = "Steyr AUG A3";
		descriptionShort = "The Steyr AUG A3 is a popular Austrian NATO bullpup assault rifle designed in the 1988. Chambered in 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\Aug\AugA3.p3d";
		weight = 3200;
		initSpeedMultiplier = 0.9;
		WeaponLength = 0.6;
		aimSpeedModifier[]={0.24,0.24,0.24};
		attachments[] = {"weaponWrap","weaponOptics","weaponLightRight","weaponForegrip","weaponMuzzleM4"};
		itemSize[] = {7,3};
		hiddenSelections[] = {"camo_a3_barrel","camo_a3_receiver","camo_stock"};
		simpleHiddenSelections[] = {"hide_muzzle"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\Aug\data\camo_a3_barrel_co.paa","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_co.paa","A6_Weapons\Rifles\Aug\data\camo_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\Aug\data\camo_a3_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\Aug\data\camo_a3_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Aug\data\camo_a3_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Aug\data\camo_a3_barrel_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Aug\data\camo_a3_barrel_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_damage.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Aug\data\camo_a3_barrel_destruct.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_destruct.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AugA3_Black: A6_AugA3
	{
		scope = 2;
		hiddenSelections[] = {"camo_a3_barrel","camo_a3_receiver","camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\Aug\data\camo_a3_barrel_co.paa","A6_Weapons\Rifles\Aug\data\camo_a3_receiver_co.paa","A6_Weapons\Rifles\Aug\data\camo_stock_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\Aug\data\camo_a3_barrel.rvmat","A6_Weapons\Rifles\Aug\data\camo_a3_receiver.rvmat","A6_Weapons\Rifles\Aug\data\camo_stock.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Aug_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AUG Magazine";
		descriptionShort = "30 round magazine for the AUG, loaded with 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\Aug\Aug_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 200;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
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
						{1.0,{"A6_Weapons\Rifles\Aug\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Aug\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Aug\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Aug\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Aug\data\camo_magazine_destruct.rvmat"}}
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
	class A6_Mag_Aug_Black_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AUG Magazine";
		descriptionShort = "30 round magazine for the AUG, loaded with 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\Aug\Aug_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 200;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery = 0;
		mass = 10;
		hiddenSelections[] = {"camo_magazine"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\Aug\data\camo_magazine_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\Aug\data\camo_magazine.rvmat"};
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
						{1.0,{"A6_Weapons\Rifles\Aug\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Aug\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Aug\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Aug\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Aug\data\camo_magazine_destruct.rvmat"}}
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
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class A6_AugOptic: ItemOptics
	{
		scope = 2;
		model = "A6_Weapons\Rifles\Aug\AugScope.p3d";
		weight = 1;
		inventorySlot[] = {"weaponOpticsAug"};
		reversed = 0;
		is3DOptic = 1;
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.5236/1.5";
			opticsZoomMax = "0.5236/1.5";
			opticsZoomInit = "0.5236/1.5";
			distanceZoomMin = 50;
			distanceZoomMax = 400;
			discreteDistance[] = {50,100,150,200,300,400};
			discreteDistanceInitIndex = 1;
			PPMaskProperties[] = {0.5,0.5,0.17,0.015};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.1;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 1;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAug_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Rifles\Aug\Aug_Mag.p3d";
	};
	class ProxyAugScope: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsAug";
		model = "A6_Weapons\Rifles\Aug\AugScope.p3d";
	};
};	
