class CfgPatches
{
	class A6_SV98
	{
		units[] = {};
		weapons[] = {"A6_SV98"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_SV98_10Rnd"};
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
	class A6_SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight = 5800;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 1.25;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		magazines[] = {"A6_Mag_SV98_10Rnd"};
		magazineSwitchTime = 0.45;
		barrelArmor = 2;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.5,1.5,1};
		aimSpeedModifier[] = {0.35,0.35,0.35};
		initSpeedMultiplier = 1.2;
		modes[] = {"Single"};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"SV98_Shot_SoundSet","SV98_Shot_Interior_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet","SV98_Slapback_SoundSet","SV98_Tail_2D_SoundSet"};
			soundSetShotExt[]={{"SV98_silencerHomeMade_SoundSet","SV98_silencerHomeMadeTail_SoundSet","SV98_silencerInteriorHomeMadeTail_SoundSet","SV98_silencerHome_Sweetener_SoundSet"}};
			reloadTime = 1;
			recoil="SV98Recoil";
			dispersion = 0.00085;
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
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
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
	class A6_SV98: A6_SV98_Base
	{
		scope = 2;
		displayName = "SV-98";
		descriptionShort = "The SV-98 is a Russian sniper rifle developed in 1998-2000 by a group of weapon engineers led by V.Stronskly and Serially produced by IzhMash group. It is a magazine-fed bolt-action rifle, designed to engage military personnel at the distances of up to 1000m.";
		model = "A6_Weapons\Snipers\SV98\SV98_New.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponBipod","weaponMuzzle308"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\SV98\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\SV98\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\SV98\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SV98\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SV98\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SV98\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SV98\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_SV98_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "SV-98 Magazine";
		descriptionShort = "10 round SV-98 magazine, loaded with 7.62x54mmR rounds.";
		model = "A6_Weapons\Snipers\SV98\SV98_Magazine.p3d";
		weight = 120;
		itemSize[] = {1,1};
		count = 10;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\SV98\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\SV98\data\camo.rvmat"};
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
						{1.0,{"A6_Weapons\Snipers\SV98\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SV98\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SV98\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SV98\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SV98\data\camo_destruct.rvmat"}}
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
	class ProxySV98_Magazine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Snipers\SV98\SV98_Magazine.p3d";
	};
};