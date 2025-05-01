class CfgPatches
{
	class A6_MK18
	{
		units[]={};
		weapons[] = {"A6_MK18","A6_DDM4_300S"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_300BLK_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_300BLK_PMAG_60Rnd"};
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
	class A6_MK18_Base: Rifle_Base
	{
		scope=0;
		weight = 2900;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.752228;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.28,0.28,0.28};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		modes[] = {"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.0;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"MK18_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"MK18_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 50;
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
					overrideParticle = "weapon_shot_ump45_01";
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
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class grip_trans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_MK18: A6_MK18_Base
	{
		scope=2;
		displayName="MK-18";
		descriptionShort="The MK-18 uses a 10.3” Cold Hammer Forged Barrel for increased velocity. Unmatched in size, weight, and performance. Chambered for 5.56x45mm.";
		model="A6_Weapons\Rifles\MK18\MK18.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleM4"};
		itemSize[]={7,3};
		hiddenSelections[]= {"camo_barrel","camo_lower","camo_mk18","camo_mk18_misc","camo_pistolgrip","camo_upper","camo_gasblock"};
		hiddenSelectionsTextures[]= 
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_co.paa",
			"A6_Weapons\Rifles\MK18\data\camo_mk18_co.paa",
			"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
			"A6_Weapons\Rifles\MK18\data\camo_mk18.rvmat",
			"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_destruct.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_destruct.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};	
	class A6_DDM4_300S_Base : Rifle_Base
	{
		scope=0;
		weight = 2900;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.752228;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_300"};
		magazines[]={"A6_Mag_300BLK_PMAG_20Rnd","A6_Mag_300BLK_PMAG_30Rnd","A6_Mag_300BLK_PMAG_60Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.28,0.28,0.28};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		modes[] = {"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.0;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"MK18_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AAC300BLK_Suppressed_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"MK18_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AAC300BLK_Suppressed_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 50;
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
					overrideParticle = "weapon_shot_ump45_01";
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
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class grip_trans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_DDM4_300S: A6_DDM4_300S_Base
	{
		scope=2;
		displayName="DDM4 300 S";
		descriptionShort="The DDM4 300 S uses a 10.3” Cold Hammer Forged Barrel for increased velocity. Unmatched in size, weight, and performance. Chambered for .300 BLK.";
		model="A6_Weapons\Rifles\MK18\MK18.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleM4"};
		itemSize[]={7,3};
		hiddenSelections[]= {"camo_barrel","camo_lower","camo_mk18","camo_mk18_misc","camo_pistolgrip","camo_upper","camo_gasblock"};
		hiddenSelectionsTextures[]= 
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_co.paa",
			"A6_Weapons\Rifles\MK18\data\camo_mk18_300_co.paa",
			"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
			"A6_Weapons\Rifles\MK18\data\camo_mk18.rvmat",
			"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_damage.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_destruct.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_destruct.rvmat",
								"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};	
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_556_PMAG_60Rnd: Magazine_Base
	{
		scope=2;
		displayName="PMAG D-60 AR/M4 Gen M3 5.56x45mm";
		descriptionShort="60 round 5.56x45mm Magazine.";
		model="A6_Weapons\Rifles\MK18\Pmag_DRUM.p3d";
		weight=400;
		itemSize[]={2,3};
		recoilModifier[]={0.8,0.8,0.8};
		aimSpeedModifier[] = {1.32,1.32,1.32};
		count=60;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]={"camo","bullet_300"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\MK18\Data\magazine_60_co.paa",""};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\MK18\Data\magazine_60.rvmat",""};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\MK18\Data\magazine_60.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MK18\Data\magazine_60.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MK18\Data\magazine_60_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MK18\Data\magazine_60_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MK18\Data\magazine_60_destruct.rvmat"}}
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
	class A6_Mag_300BLK_PMAG_60Rnd: Magazine_Base
	{
		scope=2;
		displayName="PMAG D-60 AR/M4 Gen M3 .300 BLK";
		descriptionShort="60 round .300 BLK Magazine.";
		model="A6_Weapons\Rifles\MK18\Pmag_DRUM.p3d";
		weight=400;
		itemSize[]={2,3};
		recoilModifier[]={0.8,0.8,0.8};
		aimSpeedModifier[] = {1.32,1.32,1.32};
		count=60;
		ammo="Bullet_A6_300";
		ammoItems[]={"Ammo_A6_300"};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]={"camo","bullet_556"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\MK18\Data\magazine_60_co.paa",""};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\MK18\Data\magazine_60_300.rvmat",""};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\MK18\Data\magazine_60_300.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MK18\Data\magazine_60_300.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MK18\Data\magazine_60_300_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MK18\Data\magazine_60_300_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MK18\Data\magazine_60_300_destruct.rvmat"}}
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
	class A6_Mag_300BLK_PMAG_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PMAG 30 AR/M4 Gen M3 .300 BLK";
		descriptionShort="30 round .300 BLK Magazine.";
		model="A6_Weapons\Rifles\MK18\300_Pmag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		count=30;
		ammo="Bullet_A6_300";
		ammoItems[]={"Ammo_A6_300"};
		tracersEvery=0;
		mass=10;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_300_pmag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_300_pmag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_300_pmag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_300_pmag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_300_pmag_destruct.rvmat"}}
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
	class ProxyPmag_DRUM: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\MK18\Pmag_DRUM.p3d";
	};
    class Proxy300_Pmag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\MK18\300_Pmag.p3d";
	};
};    