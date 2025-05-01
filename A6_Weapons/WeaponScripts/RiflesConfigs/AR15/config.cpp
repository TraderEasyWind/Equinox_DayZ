class CfgPatches
{
	class A6_AR15
	{
		units[]={};
		weapons[] = 
		{
			"A6_AR15_Carbine",
			"A6_AR15_Standard"
		};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {};
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
	class A6_AR15_Base: Rifle_Base
	{
		scope = 0;
		weight = 2900;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		barrelArmor = 2.5;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_handguardspacer","hide_biggasblock","hide_gasblock","hide_tubestock"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		CanAcceptCAR15Buttstock = 1;
		modes[] = {"SemiAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion = 0.002;
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
			class lighttranslation
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
			class stock_trans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_AR15_Carbine: A6_AR15_Base
	{
		scope=2;
		displayName="AR-15 SBR";
		descriptionShort="The AR-15 is closely related to the military M16 and M4 Carbine rifles, which all share the same core design and have the same operating principle. This variant is chambered for 5.56x45mm NATO cartridge.";
		model = "A6_Weapons\Rifles\M4A1\M4A1_Carbine.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleM4"};
		itemSize[]={7,3};
		WeaponLength = 0.75;
		initSpeedMultiplier = 0.8;
		aimSpeedModifier[]={0.3,0.3,0.3};
		hiddenSelections[]={"camo_barrel","camo_buffertube","camo_charging","camo_handguard","camo_lower","camo_pistolgrip","camo_upper","camo_frontironsights","camo_gasblock"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upperAR15_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class A6_AR15_Standard: A6_AR15_Base
	{
		scope = 2;
		displayName="AR-15";
		descriptionShort="The AR-15 is closely related to the military M16 and M4 Carbine rifles, which all share the same core design and have the same operating principle. This variant is chambered for 5.56x45mm NATO cartridge.";
		model = "A6_Weapons\Rifles\M4A1\M4A1_Standard.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonet","weaponMuzzleM4"};
		itemSize[] = {8,3};
		WeaponLength = 0.814784;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.35,0.35,0.35};
		weight = 3200;
		hiddenSelections[]={"camo_barrel","camo_buffertube","camo_charging","camo_handguard","camo_lower","camo_pistolgrip","camo_upper","camo_frontironsights","camo_gasblock"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upperAR15_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lowerAR15_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};	