class CfgPatches
{
	class A6_AKS74U
	{
		units[]={};
		weapons[] = {"A6_AKS74U","A6_AKS74UN"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_AKM"};
		magazines[]={"A6_Mag_AK74_45Rnd","A6_Mag_AK74_Orange_45Rnd"};
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
	class A6_AKS74U_Base: Rifle_Base
	{
		scope = 0;
		weight = 2700;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.476735;
		barrelArmor = 2.743;
		initSpeedMultiplier = 0.57;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		magazines[] = {"A6_Mag_AK74_30Rnd","A6_Mag_AK74_Orange_30Rnd","A6_Mag_AK74_45Rnd","A6_Mag_AK74_Orange_45Rnd","A6_Mag_AK74_60Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.7,1.7,1};
		aimSpeedModifier[]={0.27,0.27,0.27};
		reloadAction = "ReloadAKM";
		modes[] = {"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sidemount"};
		CanAcceptDustCover = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AK74U\w_AKS74U_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.003;
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
					overrideParticle = "weapon_shot_ak74_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.1,0,0};
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
	class A6_AKS74U: A6_AKS74U_Base
	{
		scope=2;
		displayName="AKS-74U";
		descriptionShort="The AKS-74U is a compact assault rifle of Soviet origin. It was developed in the mid to late 1970's for use by vehicle crews, but is also popular with law enforcement units and special forces. The U stands for Ukorochenniy, which is Russian for shortened.";
		model="A6_Weapons\SMGs\AKS74u\AKS74u.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleAK"};
		itemSize[]={6,3};
		hiddenSelections[]= {"camo_aks74u_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_aks74u_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_aks74u_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AKS74UN: A6_AKS74U
	{
		displayName="AKS-74UN";
		CanAcceptSideMount = 1;
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleAK"};
	};	
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AK74_45Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AK-74 Magazine";
		descriptionShort="45 round AKM Magazine, loaded with 5.45x39mm rounds.";
		model="A6_Weapons\SMGs\AKS74u\AK74_45rnd_Mag.p3d";
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,4};
		count=45;
		ammo = "Bullet_545x39";
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		tracersEvery=0;
		aimSpeedModifier[]={1.25,1.25,1.25};
		recoilModifier[]={0.85,0.85,0.85};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_destruct.rvmat"}}
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
	class A6_Mag_AK74_Orange_45Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AK-74 Magazine";
		descriptionShort="45 round AKM Magazine, loaded with 5.45x39mm rounds.";
		model="A6_Weapons\SMGs\AKS74u\AK74_45rnd_Mag.p3d";
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,4};
		aimSpeedModifier[]={1.25,1.25,1.25};
		recoilModifier[]={0.85,0.85,0.85};
		count=45;
		ammo = "Bullet_545x39";
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		tracersEvery=0;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_Orange_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag.rvmat"};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\AKS74u\data\AK74_45Rnd_Mag_destruct.rvmat"}}
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
    class ProxyAK74_45rnd_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\SMGs\AKS74u\AK74_45rnd_Mag.p3d";
    };
};	