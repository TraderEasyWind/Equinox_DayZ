class CfgPatches
{
	class A6_AK
	{
		units[]={};
		weapons[] = 
		{
			"A6_AK74",
			"A6_AK74N",
			"A6_VPO",
			"A6_AKM",
			"A6_AKMN",
			"A6_AKMS",
			"A6_AK101",
			"A6_AK102",
			"A6_AK104",
			"A6_AK105"
		};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_AKM"};
		magazines[]=
		{
			"A6_Mag_AK101_30Rnd",
			"A6_Mag_AK74_30Rnd",
			"A6_Mag_AK74_Orange_30Rnd",
			"A6_Mag_AK74_60Rnd",
			"A6_Mag_AKM_Poly_30Rnd",
			"A6_Mag_AKM_30Rnd",
			"A6_Mag_AKM_PMAG_30Rnd"
		};
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
	class A6_AK74_Base: Rifle_Base
	{
		scope = 0;
		weight = 3070;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.829067;
		barrelArmor = 2.743;
		initSpeedMultiplier = 0.8;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		magazines[] = {"A6_Mag_AK74_30Rnd","A6_Mag_AK74_Orange_30Rnd","A6_Mag_AK74_45Rnd","A6_Mag_AK74_Orange_45Rnd","A6_Mag_AK74_60Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.35,0.35,0.35};
		reloadAction = "ReloadAKM";
		modes[] = {"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_akm_mesh","hide_sidemount"};
		CanAcceptDustCover = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
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
			class lighttranslation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_AK74: A6_AK74_Base
	{
		scope=2;
		displayName="AK-74";
		descriptionShort="Selective-fire assault rifle fed from a detachable magazine. Replacement of AKM with compatible attachments. Uses 5.45x39mm rounds.";
		model="A6_Weapons\Rifles\AK\AK.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightRight","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonetAK","weaponMuzzleAK"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo_akm_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_akm_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK74N: A6_AK74
	{
		displayName="AK-74N";
		CanAcceptSideMount = 1;
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleAK"};
	};
	class A6_AK105: A6_AK74
	{
		displayName="AK-105";
		CanAcceptSideMount = 1;
		descriptionShort="Selective-fire assault rifle fed from a detachable magazine. Uses 5.45x39mm rounds.";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleAK"};
		model="A6_Weapons\Rifles\AK\AK_Short.p3d";
		itemSize[]={7,3};
		initSpeedMultiplier = 0.7;
		recoilModifier[] = {1.15,1.15,1.15};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
	class A6_VPO_Base: Rifle_Base
	{
		scope=0;
		weight=3300;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.829067;
		barrelArmor = 4.444;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		magazines[] = {"A6_Mag_AKM_30Rnd","A6_Mag_AKM_PMAG_30Rnd","A6_Mag_AKM_Poly_30Rnd","A6_Mag_RPK_75Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.36,0.36,0.36};
		reloadAction = "ReloadAKM";
		modes[]={"SemiAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sidemount"};
		CanAcceptDustCover = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion=0.002;
			magazineSlot="magazine";
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
	class A6_VPO: A6_VPO_Base
	{
		scope=2;
		displayName="VPO-136";
		descriptionShort="The VPO-136 is a Russian hunting rifle developed by de-militarising an AKM by making it semi-automatic. Uses 7.62x39mm rounds.";
		model="A6_Weapons\Rifles\AK\AK.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonetAK","weaponMuzzleAK"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo_akm_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_akm_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_AKM_Base: Rifle_Base
	{
		scope=0;
		weight=3300;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.829067;
		barrelArmor = 4.444;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
		magazines[] = {"A6_Mag_AKM_30Rnd","A6_Mag_AKM_PMAG_30Rnd","A6_Mag_AKM_Poly_30Rnd","A6_Mag_RPK_75Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.36,0.36,0.36};
		reloadAction = "ReloadAKM";
		modes[]={"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_sidemount"};
		CanAcceptDustCover = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
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
	class A6_AKM: A6_AKM_Base
	{
		scope=2;
		displayName="AKM";
		descriptionShort="Selective-fire assault rifle fed from a detachable magazine. Modernized version of classic AK-47 with lot of attachments available. Uses 7.62x39mm rounds.";
		model="A6_Weapons\Rifles\AK\AK.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonetAK","weaponMuzzleAK"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo_akm_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_akm_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AKMN: A6_AKM
	{
		displayName="AKMN";
		CanAcceptSideMount = 1;
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleAK"};
	};
	class A6_AKMS: A6_AKM
	{
		// debug spawn purposes for AKMS buttstock
		displayName="AKMS";
	};
	class A6_AK104: A6_AKM
	{
		displayName="AK-104";
		CanAcceptSideMount = 1;
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleAK"};
		model="A6_Weapons\Rifles\AK\AK_Short.p3d";
		itemSize[]={7,3};
		initSpeedMultiplier = 0.8;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {1.95,1.95,1};
		aimSpeedModifier[]={0.32,0.32,0.32};
	};
	class A6_AK101_Base: Rifle_Base
	{
		scope = 0;
		weight = 3070;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.829067;
		barrelArmor = 2.743;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[] = {"A6_Mag_AK101_30Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.35,0.35,0.35};
		reloadAction = "ReloadAKM";
		modes[] = {"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		CanAcceptDustCover = 1;
		CanAcceptSideMount = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
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
					overrideParticle = "weapon_shot_ak101_01";
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
				maxOverheatingValue = 8;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 0.7;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.7};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.7,1.0};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0,0};
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
	class A6_AK101: A6_AK101_Base
	{
		scope=2;
		displayName="AK-101";
		descriptionShort="Selective-fire assault rifle fed from a detachable magazine. Uses 5.56x45mm rounds.";
		model="A6_Weapons\Rifles\AK\AK101_New.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonetAK","weaponMuzzleAK"};
		itemSize[]={8,3};
		hiddenSelections[]= {"camo_akm_barrel","camo_akm_reciever","camo_handguard_zen","camo_rod"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\data\Gun\camo_akm_barrel_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_akm_reciever_co.paa","A6_Weapons\Rifles\AK\data\Parts\camo_handguard_zen_co.paa","A6_Weapons\Rifles\AK\data\Gun\camo_rod_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_damage.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_damage.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_barrel_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_akm_reciever_destruct.rvmat","A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_handguard_zen_destruct.rvmat","A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_rod_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK102: A6_AK101
	{
		displayName="AK-102";
		descriptionShort="Selective-fire assault rifle fed from a detachable magazine. Uses 5.56x45mm rounds.";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","WeaponHandguardAK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleAK"};
		model="A6_Weapons\Rifles\AK\AK102.p3d";
		itemSize[]={7,3};
		initSpeedMultiplier = 0.8;
		recoilModifier[] = {1.15,1.15,1.15};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.3,0.3,0.3};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AK101_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AK-101 Magazine";
		descriptionShort="30 round AK-101 Magazine, loaded with 5.56x45mm rounds.";
		model = "DZ\weapons\attachments\magazine\magazine_ak101_30rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
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
						{1.0,{"DZ\weapons\firearms\AK101\data\ak101.rvmat"}},
						{0.7,{"DZ\weapons\firearms\AK101\data\ak101.rvmat"}},
						{0.5,{"DZ\weapons\firearms\AK101\data\ak101_damage.rvmat"}},
						{0.3,{"DZ\weapons\firearms\AK101\data\ak101_damage.rvmat"}},
						{0.0,{"DZ\weapons\firearms\AK101\data\ak101_destruct.rvmat"}}
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
	class A6_Mag_AK74_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AK-74 Magazine";
		descriptionShort="30 round AK74 Magazine, loaded with 5.45x39mm rounds.";
		model="A6_Weapons\Rifles\AK\Parts\AK74_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		ammo = "Bullet_545x39";
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
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
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545_destruct.rvmat"}}
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
	class A6_Mag_AK74_Orange_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AK-74 Magazine";
		descriptionShort="30 round AK74 Magazine, loaded with 5.45x39mm rounds.";
		model="A6_Weapons\Rifles\AK\Parts\AK74_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		ammo = "Bullet_545x39";
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		tracersEvery=0;
		hiddenSelections[]={"camo_545_mag"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\AK\data\Gun\camo_magazine_545_orange_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545.rvmat"};
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
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_545_destruct.rvmat"}}
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
	class A6_Mag_AK74_60Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AK-74 6L31 Magazine";
		descriptionShort="60 round AK74 Magazine, loaded with 5.45x39mm rounds.";
		model="A6_Weapons\Rifles\AK\Parts\AK74_60_Rnd_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=600;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=60;
		ammo = "Bullet_545x39";
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
		tracersEvery=0;
		recoilModifier[]={0.85,0.85,0.85};
		aimSpeedModifier[] = {1.32,1.32,1.32};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_icecreamcone.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_icecreamcone.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_icecreamcone_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_icecreamcone_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_icecreamcone_destruct.rvmat"}}
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
  	class A6_Mag_AKM_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AKM Magazine";
		descriptionShort="30 round AKM Magazine, loaded with 7.62x39mm rounds.";
		model="A6_Weapons\Rifles\AK\Parts\AKM_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=430;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
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
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_762.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_762.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_762_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_762_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_magazine_762_destruct.rvmat"}}
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
	class A6_Mag_AKM_PMAG_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AKM PMAG";
		descriptionShort="30 round AKM PMAG, loaded with 7.62x39mm rounds.";
		model="A6_Weapons\Rifles\AK\Parts\AKM_PMag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=430;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		aimSpeedModifier[]={1.06,1.06,1.06};
		recoilModifier[]={0.9,0.9,0.9};
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
						{1.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pmag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pmag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pmag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pmag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Gun\rvmats\camo_pmag_destruct.rvmat"}}
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
	class A6_Mag_AKM_Poly_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AKM Polymer Magazine";
		descriptionShort="30 round AKM Polymer Magazine, loaded with 7.62x39mm rounds.";
		model="A6_Weapons\Rifles\AK\Parts\AKM_Poly_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=300;
		weightPerQuantityUnit = 9.0;
		itemSize[]={1,3};
		count=30;
		aimSpeedModifier[]={1.08,1.08,1.08};
		recoilModifier[]={0.9,0.9,0.9};
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
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_poly_mag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_poly_mag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_poly_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_poly_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_poly_mag_destruct.rvmat"}}
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
	class ProxyAK74_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AK\Parts\AK74_Mag.p3d";
	};
    class ProxyAK74_60_Rnd_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AK\Parts\AK74_60_Rnd_Mag.p3d";
	};
    class ProxyAKM_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AK\Parts\AKM_Mag.p3d";
	};
    class ProxyAKM_PMag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AK\Parts\AKM_PMag.p3d";
	};
    class ProxyAKM_Poly_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AK\Parts\AKM_Poly_Mag.p3d";
	};
};			