class CfgPatches
{
	class A6_Beowulf
	{
		units[]={};
		weapons[]={"A6_Beowulf"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_Beowulf_10Rnd"};
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
	class A6_Beowulf_Base: Rifle_Base
	{
		scope=0;
		weight=4500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.814784;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_50Beo"};
		magazines[]={"A6_Mag_Beowulf_10Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		aimSpeedModifier[]={0.48,0.48,0.48};
		reloadAction="ReloadM4";
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.0;
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_tubestock"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		CanAcceptCAR15Buttstock = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"Beowulf_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Beowulf_Suppressed_Shot_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.002;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 125;
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
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
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
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
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
			class stock_trans
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
	class A6_Beowulf: A6_Beowulf_Base
	{
		scope=2;
		displayName="AR-15 BeoWulf";
		descriptionShort="The .50 Beowulf was designed to generate devastating stopping power at short to moderate ranges. Combining the rugged reliability of the AR-15/M16 style weapons with a unique .500 inch projectile and cartridge, this semi-automatic weapon is ideal as a brush hunting weapon and is capable of knocking down virtually anything you may run across. Chambered in .50 Beowulf";
		model="A6_Weapons\Rifles\Beowulf\Beowulf.p3d";
		attachments[]={"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponmuzzle338"};
		itemSize[]={8,3};
		hiddenSelections[] = {"camo","camo_bolt","camo_charging","camo_handguard","camo_pistolgrip","camo_frontironsights","camo_gasblock"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\Beowulf\data\beowulf_co.paa",
			"A6_Weapons\Rifles\Beowulf\data\body_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\Beowulf\data\beowulf.rvmat",
			"A6_Weapons\Rifles\Beowulf\data\body_gold.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
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
								"A6_Weapons\Rifles\Beowulf\data\beowulf.rvmat",
								"A6_Weapons\Rifles\Beowulf\data\body_gold.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\Beowulf\data\beowulf.rvmat",
								"A6_Weapons\Rifles\Beowulf\data\body_gold.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\Beowulf\data\beowulf_damage.rvmat",
								"A6_Weapons\Rifles\Beowulf\data\body_gold_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\Beowulf\data\beowulf_damage.rvmat",
								"A6_Weapons\Rifles\Beowulf\data\body_gold_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\Beowulf\data\beowulf_destruct.rvmat",
								"A6_Weapons\Rifles\Beowulf\data\body_gold_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\charging_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
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
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Beowulf_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = ".50 Beowulf Magazine";
		descriptionShort = "10 round magazine for the .50 Beowulf Weapons ( AR-15 Beowulf & AK-50 ), loaded with .50 Beowulf Rounds";
		model = "A6_Weapons\Rifles\Beowulf\Beowulf_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 150;
		itemSize[] = {1,2};
		count = 10;
		ammo="Bullet_A6_50Beo";
		ammoItems[] = {"Ammo_A6_50Beo"};
		tracersEvery = 0;
		mass = 10;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\Beowulf\data\beowulf_mag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Beowulf\data\beowulf_mag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Beowulf\data\beowulf_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Beowulf\data\beowulf_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Beowulf\data\beowulf_mag_destruct.rvmat"}}
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
	class ProxyBeowulf_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Rifles\Beowulf\Beowulf_Mag.p3d";
	};
};    