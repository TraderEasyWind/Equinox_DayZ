class CfgPatches
{
	class MassiveMod_Firearms_Vanilla_TieredAdditionals
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_AK74",
			"DZ_Weapons_Firearms_UMP",
			"DZ_Weapons_Firearms_MP5"
        };
	};
};//meow
class cfgWeapons
{
	//class Mode_SemiAuto;
	//class Mode_FullAuto;
	//class M16A2;
	//class AK74_Base;
	//class AK101_Base;
	//class AKM_Base;
	//class SKS_Base;
	//class UMP45_Base;
	//class MP5K_Base;
	//class Rifle_Base;
	//class MassiveMod_M16A2_T4_Base: Rifle_Base
	//{
	//	scope=0;
	//	model="\dz\weapons\firearms\m16a2\m16a2.p3d";
	//	weight=2900;
	//	itemSize[]={9,3};
	//	repairableWithKits[]={1};
	//	repairCosts[]={25};
	//	PPDOFProperties[]={1,0.60000002,50,180,4,10};
	//	WeaponLength=1.03;
	//	barrelArmor=2.5;
	//	initSpeedMultiplier=1;
	//	recoilModifier[]={1,1,1};
	//	swayModifier[]={2.5,2.5,1.1};
	//	attachments[]=
	//	{
	//		"weaponWrap",
	//		"weaponMuzzleM4",
	//		"weaponBayonet"
	//	};
	//	chamberSize=1;
	//	chamberedRound="";
	//	chamberableFrom[]=
	//	{
	//		"Ammo_556x45",
	//		"Ammo_556x45Tracer"
	//	};
	//	magazines[]=
	//	{
	//		"Mag_STANAG_30Rnd",
	//		"Mag_STANAGCoupled_30Rnd",
	//		"Mag_STANAG_60Rnd",
	//		"Mag_CMAG_10Rnd",
	//		"Mag_CMAG_20Rnd",
	//		"Mag_CMAG_30Rnd",
	//		"Mag_CMAG_40Rnd",
	//		"Mag_CMAG_10Rnd_Green",
	//		"Mag_CMAG_20Rnd_Green",
	//		"Mag_CMAG_30Rnd_Green",
	//		"Mag_CMAG_40Rnd_Green",
	//		"Mag_CMAG_10Rnd_Black",
	//		"Mag_CMAG_20Rnd_Black",
	//		"Mag_CMAG_30Rnd_Black",
	//		"Mag_CMAG_40Rnd_Black"
	//	};
	//	magazineSwitchTime=0.5;
	//	ejectType=1;
	//	simpleHiddenSelections[]=
	//	{
	//		"hide_barrel"
	//	};
	//	hiddenSelections[]=
	//	{
	//		"camo1",
	//		"camo2"
	//	};
	//	hiddenSelectionsTextures[]=
	//	{
	//		"dz\weapons\firearms\m16a2\data\m16a2_a_co.paa",
	//		"dz\weapons\firearms\m16a2\data\m16a2_b_co.paa"
	//	};
	//	hiddenSelectionsMaterials[]=
	//	{
	//		"dz\weapons\firearms\m16a2\data\m16a2_a.rvmat",
	//		"dz\weapons\firearms\m16a2\data\m16a2_b.rvmat"
	//	};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints=200;
	//				healthLevels[]=
	//				{
	//					
	//					{
	//						1,
	//						
	//						{
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_a.rvmat",
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_b.rvmat"
	//						}
	//					},
	//					
	//					{
	//						0.69999999,
	//						
	//						{
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_a.rvmat",
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_b.rvmat"
	//						}
	//					},
	//					
	//					{
	//						0.5,
	//						
	//						{
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_a_damage.rvmat",
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_b_damage.rvmat"
	//						}
	//					},
	//					
	//					{
	//						0.30000001,
	//						
	//						{
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_a_damage.rvmat",
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_b_damage.rvmat"
	//						}
	//					},
	//					
	//					{
	//						0,
	//						
	//						{
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_a_destruct.rvmat",
	//							"DZ\weapons\firearms\M16a2\Data\m16a2_b_destruct.rvmat"
	//						}
	//					}
	//				};
	//			};
	//		};
	//	};
	//	class NoiseShoot
	//	{
	//		strength=80;
	//		type="shot";
	//	};
	//	modes[]=
	//	{
	//		"SemiAuto",
	//		"Burst"
	//	};
	//	class SemiAuto: Mode_SemiAuto
	//	{
	//		soundSetShot[]=
	//		{
	//			"M16_Shot_SoundSet",
	//			"M16_Tail_SoundSet",
	//			"M16_InteriorTail_SoundSet"
	//		};
	//		soundSetShotExt[]=
	//		{
	//			
	//			{
	//				"M16_silencer_SoundSet",
	//				"M16_silencerTail_SoundSet",
	//				"M16_silencerInteriorTail_SoundSet"
	//			},
	//			
	//			{
	//				"M16_silencerHomeMade_SoundSet",
	//				"M16_silencerHomeMadeTail_SoundSet",
	//				"M16_silencerInteriorHomeMadeTail_SoundSet"
	//			}
	//		};
	//		reloadTime=0.12;
	//		dispersion=0.0020000001;
	//		magazineSlot="magazine";
	//	};
	//	class Burst: Mode_Burst
	//	{
	//		soundSetShot[]=
	//		{
	//			"M16_Shot_SoundSet",
	//			"M16_Tail_SoundSet",
	//			"M16_InteriorTail_SoundSet"
	//		};
	//		soundSetShotExt[]=
	//		{
	//			
	//			{
	//				"M16_silencer_SoundSet",
	//				"M16_silencerTail_SoundSet",
	//				"M16_silencerInteriorTail_SoundSet"
	//			},
	//			
	//			{
	//				"M16_silencerHomeMade_SoundSet",
	//				"M16_silencerHomeMadeTail_SoundSet",
	//				"M16_silencerInteriorHomeMadeTail_SoundSet"
	//			}
	//		};
	//		burst=3;
	//		reloadTime=0.064999998;
	//		dispersion=0.0020000001;
	//		magazineSlot="magazine";
	//	};
	//	class OpticsInfo: OpticsInfoRifle
	//	{
	//		memoryPointCamera="eye";
	//		discreteDistance[]={25,50,100,200};
	//		discreteDistanceInitIndex=0;
	//		modelOptics="-";
	//		distanceZoomMin=25;
	//		distanceZoomMax=200;
	//		PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
	//		PPLensProperties[]={1,0.15000001,0,0};
	//		PPBlurProperties=0.2;
	//	};
	//	class InventorySlotsOffsets
	//	{
	//		class Shoulder
	//		{
	//			position[]={-0.1,0,0.02};
	//			orientation[]={0,0,0};
	//		};
	//		class Melee
	//		{
	//			position[]={-0.1,0,-0.050000001};
	//			orientation[]={0,0,0};
	//		};
	//	};
	//	class Particles
	//	{
	//		class OnFire
	//		{
	//			class SmokeCloud
	//			{
	//				overrideParticle="weapon_shot_winded_smoke";
	//			};
	//			class MuzzleFlash
	//			{
	//				overrideParticle="weapon_shot_ump45_01";
	//				ignoreIfSuppressed=1;
	//				illuminateWorld=1;
	//				positionOffset[]={0,0,0};
	//			};
	//			class ChamberSmoke
	//			{
	//				overrideParticle="weapon_shot_chamber_smoke";
	//				overridePoint="Nabojnicestart";
	//				overrideDirectionPoint="Nabojniceend";
	//			};
	//		};
	//		class OnOverheating
	//		{
	//			maxOverheatingValue=8;
	//			shotsToStartOverheating=4;
	//			overheatingDecayInterval=1;
	//			class SmokingBarrel1
	//			{
	//				overrideParticle="smoking_barrel_small";
	//				onlyWithinOverheatLimits[]={0,0.60000002};
	//				positionOffset[]={0.2,0,0};
	//				onlyWithinRainLimits[]={0,0.2};
	//			};
	//			class SmokingBarrel2
	//			{
	//				overrideParticle="smoking_barrel";
	//				onlyWithinOverheatLimits[]={0.60000002,1};
	//				positionOffset[]={0.2,0,0};
	//				onlyWithinRainLimits[]={0,0.2};
	//			};
	//			class SmokingBarrelHotSteamSmall
	//			{
	//				overrideParticle="smoking_barrel_steam_small";
	//				positionOffset[]={0.34999999,0,0};
	//				onlyWithinRainLimits[]={0.2,0.5};
	//			};
	//			class SmokingBarrelHotSteam
	//			{
	//				overrideParticle="smoking_barrel_steam";
	//				positionOffset[]={0.34999999,0,0};
	//				onlyWithinRainLimits[]={0.5,1};
	//			};
	//			class OpenChamberSmoke
	//			{
	//				onlyIfBoltIsOpen=1;
	//				overrideParticle="smoking_barrel_small";
	//				overridePoint="Nabojnicestart";
	//			};
	//		};
	//		class OnBulletCasingEject
	//		{
	//			class ChamberSmokeRaise
	//			{
	//				overrideParticle="weapon_shot_chamber_smoke";
	//				overridePoint="Nabojnicestart";
	//			};
	//		};
	//	};
	//	weaponStateAnim="dz\anims\anm\player\reloads\m16a2\w_m16a2_states.anm";
	//};
	//class MassiveMod_AKS74U_T4: AK74_Base
	//{
	//	scope = 2;
	//	displayName = "$STR_cfgWeapons_AKS74U0";
	//	descriptionShort = "$STR_cfgWeapons_AKS74U1";
	//	model = "\dz\weapons\firearms\AK74\aks74u.p3d";
	//	attachments[] = {"weaponButtstockAK","weaponWrap","weaponMuzzleAK"};
	//	weight = 2700;
	//	itemSize[] = {6,3};
	//	PPDOFProperties[] = {1,0.5,50,175,4,10};
	//	WeaponLength = 0.71;
	//	initSpeedMultiplier = 0.57;
	//	recoilModifier[] = {1,1,1};
	//	swayModifier[] = {1.8,1.8,1};
	//	hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK74\data\aks74u_co.paa"};
	//	hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK74\data\aks74u.rvmat"};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 250;
	//				healthLevels[] = {{1.0,{"DZ\weapons\firearms\ak74\Data\aks74u.rvmat"}},{0.7,{"DZ\weapons\firearms\ak74\Data\aks74u.rvmat"}},{0.5,{"DZ\weapons\firearms\ak74\Data\aks74u_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\ak74\Data\aks74u_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\ak74\Data\aks74u_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//	class FullAuto: Mode_FullAuto
	//	{
	//		soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
	//		soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
	//		reloadTime = 0.098;
	//		recoil = "recoil_AK74";
	//		recoilProne = "recoil_AK74_prone";
	//		dispersion = 0.003;
	//		magazineSlot = "magazine";
	//	};
	//	class SemiAuto: Mode_SemiAuto
	//	{
	//		soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
	//		soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
	//		reloadTime = 0.12;
	//		recoil = "recoil_AK74";
	//		recoilProne = "recoil_AK74_prone";
	//		dispersion = 0.003;
	//		magazineSlot = "magazine";
	//	};
	//	class Particles
	//	{
	//		class OnFire
	//		{
	//			class SmokeCloud
	//			{
	//				overrideParticle = "weapon_shot_winded_smoke";
	//			};
	//			class MuzzleFlash
	//			{
	//				overrideParticle = "weapon_shot_ak74_01";
	//				ignoreIfSuppressed = 1;
	//				illuminateWorld = 1;
	//				positionOffset[] = {-0.1,0,0};
	//			};
	//			class ChamberSmoke
	//			{
	//				overrideParticle = "weapon_shot_chamber_smoke";
	//				overridePoint = "Nabojnicestart";
	//				overrideDirectionPoint = "Nabojniceend";
	//			};
	//		};
	//		class OnOverheating
	//		{
	//			maxOverheatingValue = 8;
	//			shotsToStartOverheating = 4;
	//			overheatingDecayInterval = 0.7;
	//			class SmokingBarrel1
	//			{
	//				overrideParticle = "smoking_barrel_small";
	//				onlyWithinOverheatLimits[] = {0.0,0.7};
	//				positionOffset[] = {0.01,0,0};
	//				onlyWithinRainLimits[] = {0,0.2};
	//			};
	//			class SmokingBarrel2
	//			{
	//				overrideParticle = "smoking_barrel";
	//				onlyWithinOverheatLimits[] = {0.7,1.0};
	//				positionOffset[] = {0.01,0,0};
	//				onlyWithinRainLimits[] = {0,0.2};
	//			};
	//			class SmokingBarrelHotSteamSmall
	//			{
	//				overrideParticle = "smoking_barrel_steam_small";
	//				positionOffset[] = {0.1,0,0};
	//				onlyWithinRainLimits[] = {0.2,1};
	//			};
	//			class OpenChamberSmoke
	//			{
	//				onlyIfBoltIsOpen = 1;
	//				overrideParticle = "smoking_barrel_small";
	//				overridePoint = "Nabojnicestart";
	//			};
	//		};
	//		class OnBulletCasingEject
	//		{
	//			class ChamberSmokeRaise
	//			{
	//				overrideParticle = "weapon_shot_chamber_smoke";
	//				overridePoint = "Nabojnicestart";
	//			};
	//		};
	//	};
	//	weaponStateAnim = "dz\anims\anm\player\reloads\AK74U\w_AKS74U_states.anm";
	//};
	//class MassiveMod_AK101_T4: AK101_Base
	//{
	//	scope = 2;
	//	displayName = "$STR_CfgWeapons_AK1010";
	//	descriptionShort = "$STR_CfgWeapons_AK1011";
	//	model = "\dz\weapons\firearms\AK101\ak101.p3d";
	//	attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponWrap","weaponOpticsAK","weaponFlashlight","weaponMuzzleAK","weaponBayonetAK"};
	//	itemSize[] = {8,3};
	//	hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa","#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	//	hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat","DZ\weapons\attachments\magazine\data\magazine_ak74.rvmat"};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 300;
	//				healthLevels[] = {{1.0,{"DZ\weapons\firearms\AK101\Data\ak101.rvmat"}},{0.7,{"DZ\weapons\firearms\AK101\Data\ak101.rvmat"}},{0.5,{"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//};
	//class MassiveMod_AKM_T4: AKM_Base
	//{
	//	scope = 2;
	//	displayName = "$STR_cfgWeapons_AKM0";
	//	descriptionShort = "$STR_cfgWeapons_AKM1";
	//	model = "\dz\weapons\firearms\AKM\AKM.p3d";
	//	attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponWrap","weaponOpticsAK","weaponFlashlight","weaponMuzzleAK","weaponBayonetAK"};
	//	itemSize[] = {8,3};
	//	hiddenSelectionsTextures[] = {"dz\weapons\firearms\AKM\data\akm_co.paa"};
	//	hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AKM\data\AKM.rvmat"};
	//	class Particles
	//	{
	//		class OnFire
	//		{
	//			class SmokeCloud
	//			{
	//				overrideParticle = "weapon_shot_winded_smoke";
	//			};
	//			class MuzzleFlash
	//			{
	//				overrideParticle = "weapon_shot_akm_01";
	//				ignoreIfSuppressed = 1;
	//				illuminateWorld = 1;
	//				positionOffset[] = {-0.05,0,0};
	//			};
	//			class ChamberSmoke
	//			{
	//				overrideParticle = "weapon_shot_chamber_smoke";
	//				overridePoint = "Nabojnicestart";
	//				overrideDirectionPoint = "Nabojniceend";
	//			};
	//		};
	//		class OnOverheating
	//		{
	//			maxOverheatingValue = 12;
	//			shotsToStartOverheating = 4;
	//			overheatingDecayInterval = 0.7;
	//			class SmokingBarrel1
	//			{
	//				overrideParticle = "smoking_barrel_small";
	//				onlyWithinOverheatLimits[] = {0.0,0.5};
	//				positionOffset[] = {0.1,0,0};
	//				onlyWithinRainLimits[] = {0,0.2};
	//			};
	//			class SmokingBarrel2
	//			{
	//				overrideParticle = "smoking_barrel";
	//				onlyWithinOverheatLimits[] = {0.5,0.7};
	//				positionOffset[] = {0.1,0,0};
	//				onlyWithinRainLimits[] = {0,0.2};
	//			};
	//			class SmokingBarrel3
	//			{
	//				overrideParticle = "smoking_barrel_heavy";
	//				onlyWithinOverheatLimits[] = {0.7,1.0};
	//				positionOffset[] = {0.1,0,0};
	//				onlyWithinRainLimits[] = {0,0.2};
	//			};
	//			class SmokingBarrelHotSteamSmall
	//			{
	//				overrideParticle = "smoking_barrel_steam_small";
	//				positionOffset[] = {0.1,0,0};
	//				onlyWithinRainLimits[] = {0.2,0.5};
	//			};
	//			class SmokingBarrelHotSteam
	//			{
	//				overrideParticle = "smoking_barrel_steam";
	//				positionOffset[] = {0.1,0,0};
	//				onlyWithinRainLimits[] = {0.5,1};
	//			};
	//			class OpenChamberSmoke
	//			{
	//				onlyIfBoltIsOpen = 1;
	//				overrideParticle = "smoking_barrel_small";
	//				overridePoint = "Nabojnicestart";
	//			};
	//		};
	//		class OnBulletCasingEject
	//		{
	//			class ChamberSmokeRaise
	//			{
	//				overrideParticle = "weapon_shot_chamber_smoke";
	//				overridePoint = "Nabojnicestart";
	//			};
	//		};
	//	};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 300;
	//				healthLevels[] = {{1.0,{"DZ\weapons\firearms\AKM\data\AKM.rvmat"}},{0.7,{"DZ\weapons\firearms\AKM\data\AKM.rvmat"}},{0.5,{"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//};
	//class MassiveMod_SKS_T4: SKS_Base
	//{
	//	scope = 2;
	//	weight = 3450;
	//	displayName = "$STR_cfgWeapons_SKS0";
	//	descriptionShort = "$STR_cfgWeapons_SKS1";
	//	model = "\dz\weapons\firearms\SKS\SKS.p3d";
	//	attachments[] = {"weaponWrap","weaponOpticsMosin","suppressorImpro","weaponBayonetSKS"};
	//	itemSize[] = {9,3};
	//	hiddenSelectionsTextures[] = {"dz\weapons\firearms\SKS\data\sks_black_co.paa","",""};
	//	hiddenSelectionsMaterials[] = {"dz\weapons\firearms\SKS\data\sks_painted.rvmat","",""};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 300;
	//				healthLevels[] = {{1.0,{"DZ\weapons\firearms\SKS\data\sks.rvmat"}},{0.7,{"DZ\weapons\firearms\SKS\data\sks.rvmat"}},{0.5,{"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\SKS\data\sks_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\SKS\data\sks_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//};
	//class MassiveMod_UMP45_T4: UMP45_Base
	//{
	//	scope = 2;
	//	displayName = "$STR_cfgWeapons_UMP450";
	//	descriptionShort = "$STR_cfgWeapons_UMP451";
	//	model = "\dz\weapons\firearms\UMP45\ump.p3d";
	//	attachments[] = {"weaponWrap","weaponOptics","weaponFlashlight","pistolMuzzle"};
	//	itemSize[] = {6,3};
	//	hiddenSelectionsTextures[] = {"dz\weapons\firearms\UMP45\data\ump45_co.paa"};
	//	hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\UMP45\data\ump45.rvmat"};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 250;
	//				healthLevels[] = {{1.0,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.7,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.5,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//};
	//class MassiveMod_MP5K_T4: MP5K_Base
	//{
	//	scope = 2;
	//	displayName = "$STR_cfgWeapons_MP5K0";
	//	descriptionShort = "$STR_cfgWeapons_MP5K1";
	//	model = "\dz\weapons\firearms\MP5\MP5K.p3d";
	//	attachments[] = {"weaponButtstockMP5","WeaponHandguardMP5","weaponOptics","weaponFlashlight","weaponMuzzleMP5","pistolMuzzle"};
	//	itemSize[] = {5,3};
	//	hiddenSelectionsTextures[] = {"dz\weapons\firearms\MP5\data\mp5k_body_CO.paa"};
	//	hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 200;
	//				healthLevels[] = {{1.0,{"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"}},{0.7,{"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"}},{0.5,{"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//};
};