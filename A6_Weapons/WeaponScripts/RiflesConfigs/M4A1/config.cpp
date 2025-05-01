class CfgPatches
{
	class A6_M4A1
	{
		units[] = {"A6_M4A1_Carbine","A6_M4A1_Standard"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
		magazines[] = {"A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd"};
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
	class A6_M4A1_Base: Rifle_Base
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
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_handguardspacer","hide_biggasblock","hide_gasblock","hide_tubestock"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		CanAcceptCAR15Buttstock = 1;
		modes[] = {"SemiAuto","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
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
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
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
	class A6_M4A1_Carbine: A6_M4A1_Base
	{
		scope = 2;
		displayName = "M4A1 Carbine";
		descriptionShort = "Selective-fire assault rifle, fed from a standardized detachable magazine. Offers a lot of customization with attachments. The M4A1 Carbine is a short barrel version of the standard M4A1. Uses 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\M4A1\M4A1_Carbine.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleM4"};
		itemSize[] = {7,3};
		WeaponLength = 0.75;
		initSpeedMultiplier = 0.8;
		aimSpeedModifier[]={0.32,0.32,0.32}; 
		hiddenSelections[]={"camo_barrel","camo_buffertube","camo_charging","camo_frontironsights","camo_gasblock","camo_handguard","camo_lower","camo_pistolgrip","camo_upper"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat"
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
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class A6_M4A1_Standard: A6_M4A1_Base
	{
		scope = 2;
		displayName = "M4A1";
		descriptionShort = "Selective-fire assault rifle, fed from a standardized detachable magazine. Offers a lot of customization with attachments. Uses 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\M4A1\M4A1_Standard.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBayonet","weaponBipod","weaponMuzzleM4"};
		weight = 3200;
		itemSize[] = {8,3};
		WeaponLength = 0.814784;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.35,0.35,0.35};
		hiddenSelections[]={"camo_barrel","camo_buffertube","camo_charging","camo_frontironsights","camo_gasblock","camo_handguard","camo_lower","camo_pistolgrip","camo_upper"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat"
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
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\M4A1\Data\Rifle\barrel_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\buffertube_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\lower_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\upper_destruct.rvmat"
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
	class A6_Mag_556_PMAG_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PMAG 20 AR/M4 Gen M3 5.56x45 Magazine";
		descriptionShort="20 round 5.56x45mm Magazine.";
		model="A6_Weapons\Rifles\M4A1\556_PMag_20Rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1,1,1};
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
						{1.0,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_destruct.rvmat"}}
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
	class A6_Mag_556_PMAG_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PMAG 30 AR/M4 Gen M3 5.56x45 Magazine";
		descriptionShort="30 round 5.56x45mm Magazine.";
		model="A6_Weapons\Rifles\M4A1\556_Pmag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.05,1.05,1.05};
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
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_556_pmag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_556_pmag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_556_pmag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_556_pmag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\camo_556_pmag_destruct.rvmat"}}
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
	class Proxy556_PMag_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\M4A1\556_PMag_20Rnd.p3d";
	};
    class Proxy556_Pmag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\M4A1\556_Pmag.p3d";
	};
};  