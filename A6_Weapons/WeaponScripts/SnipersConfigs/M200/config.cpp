class CfgPatches
{
	class A6_M200
	{
		units[] = {};
		weapons[] = {"A6_M200","A6_M200_Tan"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_M200_7Rnd","A6_Mag_M200_Tan_7Rnd"};
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
	class A6_M200_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight = 13154;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 1.25;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_A6_408"};
		magazines[] = {"A6_Mag_M200_7Rnd","A6_Mag_M200_Tan_7Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 3.125;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.56,0.56,0.56};
		initSpeedMultiplier = 1.1;
		modes[] = {"Single"};
		simpleHiddenSelections[] = {"hide_barrel","hide_pistolgrip"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M200_SoundSet","PolarExpress_Tail_SoundSet","PolarExpress_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M200_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"M200_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil="SV98Recoil";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 250;
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
	class A6_M200: A6_M200_Base
	{
		scope = 2;
		displayName = "CheyTac M200 Intervention";
		descriptionShort = "The CheyTac Intervention is an American bolt-action sniper rifle manufactured by CheyTac LLC, which can also be classified as an anti-materiel rifle. Chambered in .408 CheyTac rounds.";
		model = "A6_Weapons\Snipers\M200\M200.p3d";
		attachments[] = {"weaponWrap","weaponM4PistolGrip","weaponOptics","weaponBipod","weaponmuzzle408"};
		itemSize[] = {10,3};
		hiddenSelections[] = {"camo_a2_grip","camo_barrel","camo_receiver","camo_stock"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\M200\data\camo_a2_grip_co.paa",
			"A6_Weapons\Snipers\M200\data\camo_barrel_black_co.paa",
			"A6_Weapons\Snipers\M200\data\camo_receiver_black_co.paa",
			"A6_Weapons\Snipers\M200\data\camo_stock_black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\M200\data\camo_a2_grip.rvmat",
			"A6_Weapons\Snipers\M200\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\M200\data\camo_receiver.rvmat",
			"A6_Weapons\Snipers\M200\data\camo_stock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\M200\data\camo_a2_grip.rvmat","A6_Weapons\Snipers\M200\data\camo_barrel.rvmat","A6_Weapons\Snipers\M200\data\camo_receiver.rvmat","A6_Weapons\Snipers\M200\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M200\data\camo_a2_grip.rvmat","A6_Weapons\Snipers\M200\data\camo_barrel.rvmat","A6_Weapons\Snipers\M200\data\camo_receiver.rvmat","A6_Weapons\Snipers\M200\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M200\data\camo_a2_grip_damage.rvmat","A6_Weapons\Snipers\M200\data\camo_barrel_damage.rvmat","A6_Weapons\Snipers\M200\data\camo_receiver_damage.rvmat","A6_Weapons\Snipers\M200\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M200\data\camo_a2_grip_damage.rvmat","A6_Weapons\Snipers\M200\data\camo_barrel_damage.rvmat","A6_Weapons\Snipers\M200\data\camo_receiver_damage.rvmat","A6_Weapons\Snipers\M200\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M200\data\camo_a2_grip_destruct.rvmat","A6_Weapons\Snipers\M200\data\camo_barrel_destruct.rvmat","A6_Weapons\Snipers\M200\data\camo_receiver_destruct.rvmat","A6_Weapons\Snipers\M200\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M200_Tan: A6_M200
	{
		hiddenSelections[] = {"camo_a2_grip","camo_barrel","camo_receiver","camo_stock"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\M200\data\camo_a2_grip_co.paa",
			"A6_Weapons\Snipers\M200\data\camo_barrel_tan_co.paa",
			"A6_Weapons\Snipers\M200\data\camo_receiver_tan_co.paa",
			"A6_Weapons\Snipers\M200\data\camo_stock_tan_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\M200\data\camo_a2_grip.rvmat",
			"A6_Weapons\Snipers\M200\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\M200\data\camo_receiver.rvmat",
			"A6_Weapons\Snipers\M200\data\camo_stock.rvmat"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M200_7Rnd: Magazine_Base
	{
		scope = 2;
		displayName = ".408 CheyTac Magazine";
		descriptionShort = "7 round .408 CheyTac magazine for the M200 and M300, loaded with .408 CheyTac rounds.";
		model = "A6_Weapons\Snipers\M200\mag_M200_7rnd.p3d";
		weight = 120;
		itemSize[] = {2,2};
		count = 7;
		ammo = "Bullet_A6_408";
		ammoItems[] = {"Ammo_A6_408"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo_magazine"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M200\data\camo_magazine_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M200\data\camo_magazine.rvmat"};
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
						{1.0,{"A6_Weapons\Snipers\M200\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M200\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M200\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M200\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M200\data\camo_magazine_destruct.rvmat"}}
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
	class A6_Mag_M200_Tan_7Rnd: Magazine_Base
	{
		scope = 2;
		displayName = ".408 CheyTac Magazine";
		descriptionShort = "7 round .408 CheyTac magazine for the M200 and M300, loaded with .408 CheyTac rounds.";
		model = "A6_Weapons\Snipers\M200\mag_M200_7rnd.p3d";
		weight = 120;
		itemSize[] = {2,2};
		count = 7;
		ammo = "Bullet_A6_408";
		ammoItems[] = {"Ammo_A6_408"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo_magazine"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M200\data\camo_magazine_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M200\data\camo_magazine.rvmat"};
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
						{1.0,{"A6_Weapons\Snipers\M200\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M200\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M200\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M200\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M200\data\camo_magazine_destruct.rvmat"}}
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
	class Proxymag_M200_7rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Snipers\M200\mag_M200_7rnd.p3d";
	};
};