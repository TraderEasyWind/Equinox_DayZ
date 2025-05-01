class CfgPatches
{
	class A6_RPK
	{
		units[]={};
		weapons[] = {"A6_RPK"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_AKM"};
		magazines[]={"A6_Mag_RPK_75Rnd"};
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
	class A6_RPK_Base: Rifle_Base
	{
		scope=0;
		weight=4800;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 1.12;
		barrelArmor = 4.444;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		magazines[] = {"A6_Mag_AKM_30Rnd","A6_Mag_AKM_PMAG_30Rnd","A6_Mag_AKM_Poly_30Rnd","A6_Mag_RPK_75Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.5,2.5,1.4};
		aimSpeedModifier[]={0.43,0.43,0.43};
		reloadAction = "ReloadAKM";
		modes[]={"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		CanAcceptDustCover = 1;
		CanAcceptSideMount = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_RPK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"A6_RPK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
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
			class lighttranslation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_RPK: A6_RPK_Base
	{
		scope=2;
		displayName="RPK";
		descriptionShort="The RPK, sometimes retroactively termed the RPK-47, is a Soviet 7.62×39mm light machine gun that was developed by Mikhail Kalashnikov in the early 1960s, in parallel with the AKM assault rifle.";
		model="A6_Weapons\LMGs\RPK\RPK.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleAK"};
		itemSize[]={10,3};
		hiddenSelections[]= {"camo_rpk_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_rpk_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rpk_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rpk_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rpk_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rpk_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rpk_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rpk_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_RPK_75Rnd: Magazine_Base
 	{
		scope=2;
		displayName="RPK Drum Magazine";
		descriptionShort="75 round RPK Drum Magazine, loaded with 7.62x39mm rounds.";
		model="A6_Weapons\LMGs\RPK\RPK_Mag.p3d";
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={3,3};
		count=75;
		aimSpeedModifier[]={1.25,1.25,1.25};
		recoilModifier[]={0.85,0.85,0.85};
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		tracersEvery=0;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_rpk.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_rpk.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_rpk_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_rpk_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_rpk_destruct.rvmat"}}
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
        class ProxyRPK_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\LMGs\RPK\RPK_Mag.p3d";
    };
};		