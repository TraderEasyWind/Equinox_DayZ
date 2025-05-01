class CfgPatches
{
	class A6_MP5
	{
		units[]= {};
		weapons[] = 
		{
			"A6_MP5k",
			"A6_MP5",
			"A6_MP5SD"
		};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {"A6_Mag_MP5_15Rnd","A6_Mag_MP5_30Rnd","A6_Mag_MP5_Waffle_30Rnd","A6_Mag_MP5_100Rnd"};
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
	class A6_MP5k_Base: Rifle_Base
	{
		scope = 0;
		weight = 1840;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.583269;
		barrelArmor = 1.25;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[] = {"A6_Mag_MP5_15Rnd","A6_Mag_MP5_30Rnd","A6_Mag_MP5_Waffle_30Rnd","A6_Mag_MP5_100Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,1};
		aimSpeedModifier[]={0.18,0.18,0.18};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"SemiAuto","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\MP5\w_mp5k_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_Shot_1st_SoundSet","MP5K_Shot_1st_iterior_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet","MP5K_Slapback_SoundSet","MP5K_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"MP5K_1st_silencer_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"},{"MP5K_1st_silencerHomeMade_SoundSet","MP5K_silencerHomeMadeTail_SoundSet","MP5K_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[] = {"MP5K_Shot_1st_SoundSet","MP5K_Shot_1st_iterior_SoundSet"};
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Shot_iterior_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet","MP5K_Slapback_SoundSet","MP5K_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"MP5K_1st_silencer_SoundSet"},{"MP5K_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"MP5K_silencer_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"},{"MP5K_silencerHomeMade_SoundSet","MP5K_silencerHomeMadeTail_SoundSet","MP5K_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
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
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp5k_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
	class A6_MP5k: A6_MP5k_Base
	{
		scope = 2;
		displayName = "HK MP5k";
		descriptionShort = "In 1976, a shortened version of the MP5A2 was introduced the MP5K was designed for close quarters battle use by clandestine operations and special services. The MP5K does not have a shoulder stock (the receiver end was covered with a flat end cap, featuring a buffer on the inside and a sling loop on the outside), and the bolt and receiver were shortened at the rear.";
		model = "A6_Weapons\SMGs\MP5\MP5k_New.p3d";
		attachments[] = {"weaponMP5OpticMount","weaponOptics","weaponForearmMP5k","pistolMuzzle"};
		itemSize[] = {5,3};
		hiddenSelections[] = {"camo_mp5k","camo_mp5k_lower"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5k_co.paa","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5k.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5k.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mp5k.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mp5k_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mp5k_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5k_destruct.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5k_lower_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Base: Rifle_Base
	{
		scope = 0;
		weight = 2200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.66353;
		barrelArmor = 2.0;
		initSpeedMultiplier = 1.2;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[] = {"A6_Mag_MP5_15Rnd","A6_Mag_MP5_30Rnd","A6_Mag_MP5_Waffle_30Rnd","A6_Mag_MP5_100Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={0.23,0.23,0.23};
		simpleHiddenSelections[] = {"hide_barrel","hide_cap"};
		modes[] = {"SemiAuto","Burst","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_Shot_1st_SoundSet","MP5K_Shot_1st_iterior_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet","MP5K_Slapback_SoundSet","MP5K_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"MP5K_1st_silencer_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"},{"MP5K_1st_silencerHomeMade_SoundSet","MP5K_silencerHomeMadeTail_SoundSet","MP5K_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[] = {"MP5K_Shot_1st_SoundSet","MP5K_Shot_1st_iterior_SoundSet"};
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Shot_iterior_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet","MP5K_Slapback_SoundSet","MP5K_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"MP5K_1st_silencer_SoundSet"},{"MP5K_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"MP5K_silencer_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"},{"MP5K_silencerHomeMade_SoundSet","MP5K_silencerHomeMadeTail_SoundSet","MP5K_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[] = {"MP5K_Shot_1st_SoundSet","MP5K_Shot_1st_iterior_SoundSet"};
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Shot_iterior_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet","MP5K_Slapback_SoundSet","MP5K_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"MP5K_1st_silencer_SoundSet"},{"MP5K_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"MP5K_silencer_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"},{"MP5K_silencerHomeMade_SoundSet","MP5K_silencerHomeMadeTail_SoundSet","MP5K_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp5k_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
		class NoiseShoot
		{
			strength = 66;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class A6_MP5: A6_MP5_Base
	{
		scope = 2;
		displayName = "HK MP5";
		descriptionShort = "The Heckler & Koch MP5 is a submachine gun that fires 9x19mm Parabellum cartridges, developed in the 1960s by Heckler & Koch. The MP5 is one of the most widely used submachine guns in the world, having been adopted by over forty nations and numerous military, law enforcement, intelligence, and security organizations.";
		model = "A6_Weapons\SMGs\MP5\MP5.p3d";
		attachments[] = {"weaponWrap","weaponMP5Buttstock","weaponMP5OpticMount","weaponOptics","weaponForearmMP5","weaponForegrip","weaponLightLeft","weaponLightRight","pistolMuzzle"};
		itemSize[] = {6,3};
		hiddenSelections[] = {"camo_mp5","camo_mp5_lower","camo_receiver_cap"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5_co.paa","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_co.paa","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mp5_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mp5_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5_destruct.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_destruct.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5SD_Base: Rifle_Base
	{
		scope = 0;
		weight = 3200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.66353;
		barrelArmor = 2.0;
		initSpeedMultiplier = 1.35;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[] = {"A6_Mag_MP5_15Rnd","A6_Mag_MP5_30Rnd","A6_Mag_MP5_Waffle_30Rnd","A6_Mag_MP5_100Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={0.32,0.32,0.32};
		simpleHiddenSelections[] = {"hide_barrel","hide_cap"};
		modes[] = {"SemiAuto","Burst","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_MP5SD_Shot_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"A6_MP5SD_Shot_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"A6_MP5SD_Shot_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
		class NoiseShoot
		{
			strength = 10;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class A6_MP5SD: A6_MP5SD_Base
	{
		scope = 2;
		displayName = "HK MP5SD";
		descriptionShort = "The MP5SD was created in 1974, Heckler & Koch initiated design work on a sound-suppressed variant of the MP5, designated the MP5SD, which features an integral aluminium sound suppressor and a lightweight bolt.";
		model = "A6_Weapons\SMGs\MP5\MP5SD.p3d";
		attachments[] = {"weaponWrap","weaponMP5Buttstock","weaponMP5OpticMount","weaponOptics"};
		itemSize[] = {6,3};
		hiddenSelections[] = {"camo_forearm_sd","camo_mp5","camo_mp5_lower","camo_receiver_cap"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_sd_co.paa","A6_Weapons\SMGs\MP5\data\camo_mp5_co.paa","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_co.paa","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_sd.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_sd.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_forearm_sd.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_forearm_sd_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_forearm_sd_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_damage.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_sd_destruct.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_destruct.rvmat","A6_Weapons\SMGs\MP5\data\camo_mp5_lower_destruct.rvmat","A6_Weapons\SMGs\MP5\data\camo_receiver_cap_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_MP5_15Rnd: Magazine_Base
 	{
		scope=2;
		displayName="HK MP5 Magazine";
		descriptionShort="15 round magazine for the HK MP5 Series, loaded with 9mm rounds.";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_15rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		aimSpeedModifier[]={1.03,1.03,1.03};
		recoilModifier[]={0.95,0.95,0.95};
		count=15;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
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
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_15rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mag_15rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mag_15rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mag_15rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_15rnd_destruct.rvmat"}}
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
	class A6_Mag_MP5_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="HK MP5 Magazine";
		descriptionShort="30 round magazine for the HK MP5 Series, loaded with 9mm rounds.";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_30rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=250;
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
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_30rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mag_30rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mag_30rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mag_30rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_30rnd_destruct.rvmat"}}
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
	class A6_Mag_MP5_Waffle_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="HK MP5 Waffle Magazine";
		descriptionShort="30 round magazine for the HK MP5 Series, loaded with 9mm rounds.";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_Waffle_30rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=250;
		itemSize[]={1,3};
		count=30;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		aimSpeedModifier[]={1.08,1.08,1.08};
		recoilModifier[]={0.88,0.88,0.88};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_waffle_30rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mag_waffle_30rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mag_waffle_30rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mag_waffle_30rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_waffle_30rnd_destruct.rvmat"}}
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
	class A6_Mag_MP5_100Rnd: Magazine_Base
 	{
		scope=2;
		displayName="HK MP5 Drum Magazine";
		descriptionShort="100 round magazine for the HK MP5 Series, loaded with 9mm rounds.";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_100rnd.p3d";
		weight=800;
		itemSize[]={4,2};
		aimSpeedModifier[]={1.8,1.8,1.8};
		recoilModifier[]={0.77,0.77,0.77};
		count=100;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
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
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_100rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mag_100rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mag_100rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mag_100rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mag_100rnd_destruct.rvmat"}}
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
	class ProxyMP5_Mag_15rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_15rnd.p3d";
	};
	class ProxyMP5_Mag_30rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_30rnd.p3d";
	};
	class ProxyMP5_Mag_Waffle_30rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_Waffle_30rnd.p3d";
	};
	class ProxyMP5_Mag_100rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\SMGs\MP5\MP5_Mag_100rnd.p3d";
	};
};	
