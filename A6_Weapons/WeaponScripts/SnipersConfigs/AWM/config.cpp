class CfgPatches
{
	class A6_AWM
	{
		units[] = {};
		weapons[] = {"A6_AWM","A6_AWM_Tan"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_AWM_5Rnd"};
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
	class A6_AWM_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight = 6900;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_A6_338"};
		magazines[] = {"A6_Mag_AWM_5Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 3.125;
		ejectType = 0;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.5,0.5,0.5};
		modes[] = {"Single"};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		initSpeedMultiplier = 1.0;
		ROT = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AWM_SoundSet","SCOUT_Tail_SoundSet","SCOUT_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_T5000_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"A6_T5000_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
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
	class A6_AWM: A6_AWM_Base
	{
		scope = 2;
		displayName = "AWM";
		descriptionShort = "The Accuracy International AWM is a bolt-action sniper rifle manufactured by Accuracy International designed for magnum rifle cartridges. Chambered in .338 Lapua Magnum rounds.";
		model = "A6_Weapons\Snipers\AWM\AWM.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponBipod","weaponmuzzle338"};
		itemSize[] = {10,3};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\AWM\AWM_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\AWM\AWM.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\AWM\AWM.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AWM\AWM.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AWM\AWM_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AWM\AWM_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AWM\AWM_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AWM_Tan: A6_AWM
	{
		scope = 2;
		displayName = "AWM";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\AWM\AWM_Tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\AWM\AWM.rvmat"};
	};	
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AWM_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AWM Magazine";
		descriptionShort = "5 round magazine for the AWM, loaded with .338 Lapua Magnum rounds.";
		model = "A6_Weapons\Snipers\AWM\mag_AWM_5rnd.p3d";
		weight = 120;
		itemSize[] = {2,2};
		count = 5;
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
						{1.0,{"A6_Weapons\Snipers\AWM\AWM.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AWM\AWM.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AWM\AWM_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AWM\AWM_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AWM\AWM_destruct.rvmat"}}
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
    class Proxymag_AWM_5rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\AWM\mag_AWM_5rnd.p3d";
    };
};    