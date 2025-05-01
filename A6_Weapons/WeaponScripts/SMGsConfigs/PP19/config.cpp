class CfgPatches
{
	class A6_PP19
	{
		units[]={};
		weapons[] = {"A6_PP19"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_AKM"};
		magazines[]={"A6_Mag_PP19_30Rnd"};
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
	class A6_PP19_Base: Rifle_Base
	{
		scope = 0;
		weight = 2700;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.476735;
		barrelArmor = 2.743;
		initSpeedMultiplier = 1.25;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[] = {"A6_Mag_PP19_30Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,1};
		aimSpeedModifier[]={0.22,0.22,0.22};
		reloadAction = "ReloadAKM";
		modes[] = {"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		CanAcceptDustCover = 1;
		CanAcceptSideMount = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AK74U\w_AKS74U_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"PP19_Shot_1st_SoundSet","PP19_Shot_1st_iterior_SoundSet","PP19_Tail_SoundSet","PP19_InteriorTail_SoundSet","PP19_Slapback_SoundSet","PP19_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"PP19_1st_silencer_SoundSet","PP19_silencerTail_SoundSet","PP19_silencerInteriorTail_SoundSet"},{"PP19_1st_silencerHomeMade_SoundSet","PP19_silencerHomeMadeTail_SoundSet","PP19_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[] = {"PP19_Shot_1st_SoundSet","PP19_Shot_1st_iterior_SoundSet"};
			soundSetShot[] = {"PP19_Shot_SoundSet","PP19_Shot_iterior_SoundSet","PP19_Tail_SoundSet","PP19_InteriorTail_SoundSet","PP19_Slapback_SoundSet","PP19_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"PP19_1st_silencer_SoundSet"},{"PP19_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"PP19_silencer_SoundSet","PP19_silencerTail_SoundSet","PP19_silencerInteriorTail_SoundSet"},{"PP19_silencerHomeMade_SoundSet","PP19_silencerHomeMadeTail_SoundSet","PP19_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.066;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 66;
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
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
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
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
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
		class AnimationSources
		{
			class translation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_PP19: A6_PP19_Base
	{
		scope=2;
		displayName="PP-19 Vityaz";
		descriptionShort="PP-19 Vityaz is a 9×19mm Parabellum submachine gun developed in 2004 by Russian small arms manufacturer Izhmash. It is based on the AKS-74U and offers a high degree of parts commonality with the AKS-74U, and is an evolution to the PP-19 Bizon.";
		model="A6_Weapons\SMGs\PP19\PP19_New.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleAK"};
		itemSize[]={6,3};
		hiddenSelections[]= {"camo_aks74u_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod","camo_pp19_magwell"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_aks74u_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_pp19_magwell_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pp19_magwell.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pp19_magwell.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pp19_magwell.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pp19_magwell_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pp19_magwell_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pp19_magwell_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_PP19_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PP-19 Vityaz Magazine";
		descriptionShort="30 round PP-19 Vityaz Magazine, loaded with 9x19mm rounds.";
		model="A6_Weapons\SMGs\PP19\PP19_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
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
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_9x19.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_9x19.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_9x19_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_9x19_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_9x19_destruct.rvmat"}}
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
    class ProxyPP19_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\SMGs\PP19\PP19_Mag.p3d";
    };
};