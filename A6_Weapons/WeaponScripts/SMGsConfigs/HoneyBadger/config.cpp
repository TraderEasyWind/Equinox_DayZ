class CfgPatches
{
	class A6_HoneyBadger
	{
		units[]={};
		weapons[]={"A6_HoneyBadger"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_300BLK_PMAG_20Rnd"};
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
	class A6_HoneyBadger_Base: Rifle_Base
	{
		scope=0;
		weight=2900;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.476735;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_300"};
		magazines[]={"A6_Mag_300BLK_PMAG_20Rnd","A6_Mag_300BLK_PMAG_30Rnd","A6_Mag_300BLK_PMAG_60Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={0.8,0.8,0.8};
		swayModifier[]={1.6,1.2,1};
		aimSpeedModifier[]={0.23,0.23,0.23};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_irons4laser"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		modes[]={"SemiAuto","FullAuto"};
		initSpeedMultiplier = 0.85;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"MK18_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"HoneyBadger_Suppressed_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"MK18_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"HoneyBadger_Suppressed_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.065;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 35;
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
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
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
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
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
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_HoneyBadger: A6_HoneyBadger_Base
	{
		scope=2;
		displayName="AAC HoneyBadger";
		descriptionShort="The AAC HoneyBadger PDW is a personal defense weapon, frequently used in a suppressed configuration and is based on the AR-15. It is chambered in .300 AAC Blackout and was originally produced by Advanced Armament Corporation (AAC). The weapon is named after the honey badger.";
		model="A6_Weapons\SMGs\HoneyBadger\HoneyBadger.p3d";
		attachments[]= {"weaponWrap","weaponOptics","weaponM4PistolGrip","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","HoneyBadgerSuppressor"};
		itemSize[]={6,3};
		hiddenSelections[] = {"camo_lower","camo_upper","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\SMGs\HoneyBadger\data\camo_lower_co.paa",
			"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\SMGs\HoneyBadger\data\camo_lower.rvmat",
			"A6_Weapons\SMGs\HoneyBadger\data\camo_upper.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{
							1.0,
							{
								"A6_Weapons\SMGs\HoneyBadger\data\camo_lower.rvmat",
								"A6_Weapons\SMGs\HoneyBadger\data\camo_upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\SMGs\HoneyBadger\data\camo_lower.rvmat",
								"A6_Weapons\SMGs\HoneyBadger\data\camo_upper.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\SMGs\HoneyBadger\data\camo_lower_damage.rvmat",
								"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\SMGs\HoneyBadger\data\camo_lower_damage.rvmat",
								"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\SMGs\HoneyBadger\data\camo_lower_destruct.rvmat",
								"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"
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
	class A6_Mag_300BLK_PMAG_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PMAG 20 AR/M4 Gen M3 .300 BLK";
		descriptionShort="20 round .300 BLK Magazine.";
		model="A6_Weapons\SMGs\HoneyBadger\300_PMag_20Rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		aimSpeedModifier[]={1.03,1.03,1.03};
		recoilModifier[]={0.95,0.95,0.95};
		count=20;
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
						{1.0,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_300.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_300.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_300_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_300_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\HoneyBadger\data\camo_magazine_300_destruct.rvmat"}}
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
    class Proxy300_PMag_20Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\SMGs\HoneyBadger\300_PMag_20Rnd.p3d";
    };
};