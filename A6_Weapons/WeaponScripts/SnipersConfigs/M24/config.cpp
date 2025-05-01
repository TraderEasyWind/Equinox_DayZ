class CfgPatches
{
	class A6_M24
	{
		units[] = {};
		weapons[] = {"A6_M24"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_M24_5Rnd"};
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
	class A6_M24_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight=5400;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		barrelArmor = 3.125;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[] = {"A6_Mag_M24_5Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.3,0.3,0.3};
		reloadAction = "Reloadcz527";
		modes[] = {"Single"};
		ironsightsExcludingOptics[]= {"HuntingOptic"};
		simpleHiddenSelections[] = {"hide_barrel"};
		initSpeedMultiplier = 1.15;
		ROT = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\cz527\w_cz527_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M24_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ550_silencerHomeMade_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0005;
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
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
	};
	class A6_M24: A6_M24_Base
	{
		scope = 2;
		displayName = "M24";
		descriptionShort = "Remington developed the M24 SWS, chambered for the .308 Winchester round and feeding from a 5-round detachable box magazine.";
		model = "A6_Weapons\Snipers\M24\m24.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","weaponBipod","weaponMuzzle308"};
		itemSize[] = {9,2};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\M24\data\m24_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\M24\data\m24.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\M24\data\m24.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M24\data\m24.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M24\data\m24_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M24\data\m24_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M24\data\m24_destruct.rvmat"}}
					};
				};
			};
		};
		class NoiseShoot
		{
			strength = 150;
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
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M24_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M24 Magazine";
		descriptionShort = "5 round magazine for the M24, loaded with .308 Winchester rounds.";
		model = "A6_Weapons\Snipers\M24\mag_m24_5rnd.p3d";
		weight = 120;
		itemSize[] = {1,1};
		count = 5;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
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
						{1.0,{"A6_Weapons\Snipers\M24\data\m24.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M24\data\m24.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M24\data\m24_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M24\data\m24_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M24\data\m24_destruct.rvmat"}}
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
    class Proxymag_m24_5rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\M24\mag_m24_5rnd.p3d";
    };
};