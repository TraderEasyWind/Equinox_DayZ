class CfgPatches
{
	class A6_RugerMarkIV
	{
		units[] = {};
		weapons[] = {"A6_RugerMarkIV"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_RugerMarkIV_10Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class A6_RugerMarkIV_Base: Pistol_Base
	{
		scope = 0;
		weight = 1300;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.25;
		ShoulderDistance = 0.4;
		barrelArmor = 3.205;
		initSpeedMultiplier = 0.85;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"A6_Mag_RugerMarkIV_10Rnd"};
		chamberableFrom[] = {"Ammo_22"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,0.7};
		aimSpeedModifier[]={0.15,0.15,0.15};
		modes[] = {"SemiAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\RugerMK2\w_MK2_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Ruger1022_Shot_SoundSet","Ruger1022_Tail_SoundSet","Ruger1022_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AmphibianS_silencerHomeMade_SoundSet","AmphibianS_silencerHomeMadeTail_SoundSet","AmphibianS_InteriorTail_SoundSet"}};
			envShootingDecrease = 0.05;
			envShootingDecreaseExt[] = {0.05,0.05};
			reloadTime = 0.13;
			recoil = "recoil_mkii";
			recoilProne = "recoil_mkii_prone";
			dispersion = 0.005;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class NoiseShoot
		{
			strength = 20;
			type = "sound";
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
					illuminateWorld = 0;
					positionOffset[] = {0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 8;
				shotsToStartOverheating = 8;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,1};
					positionOffset[] = {0,0,0};
					onlyWithinRainLimits[] = {0,1};
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
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class A6_RugerMarkIV: A6_RugerMarkIV_Base
	{
		scope = 2;
		displayName = "Ruger Mark IV Tactical";
		descriptionShort = "Semi-automatic pistol, fed from a detachable magazine. Can take small optics, flashlight, and suppressor. Uses .22 LR Rounds.";
		model="A6_Weapons\Pistols\RugerMarkIV\RugerMarkIV.p3d";
		attachments[] = {"weaponOpticsMarkIV","pistolFlashlight","22LRSuppressor"};
		itemSize[] = {3,2};
		hiddenSelections[] = {"camo_gun"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_RugerMarkIV_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="Ruger Mark IV Tactical";
		descriptionShort="10 round Magazine for the Ruger Mark IV Tactical, loaded with .22 LR.";
		model="A6_Weapons\Pistols\RugerMarkIV\RugerMarkIV_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight = 55;
		weightPerQuantityUnit = 3.0;
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_22";
		ammoItems[] = {"Ammo_22"};
		tracersEvery = 0;
		hiddenSelections[]={"camo_gun"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun.rvmat"};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\RugerMarkIV\data\camo_gun_destruct.rvmat"}}
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
	class ProxyRugerMarkIV: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model="A6_Weapons\Pistols\RugerMarkIV\RugerMarkIV.p3d";
	};
	class ProxyRugerMarkIV_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\RugerMarkIV\RugerMarkIV_Mag.p3d";
	};
	class ProxyRugerMarkIV_Optic: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsMarkIV";
		model="A6_Weapons\Pistols\RugerMarkIV\RugerMarkIV_Optic.p3d";
	};
};	