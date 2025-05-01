class CfgPatches
{
	class A6_M16
	{
		units[] = 
		{
			"A6_M16",
			"A6_M16A2",
			"A6_M16A3",
			"A6_M16A4"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
		magazine[] = {"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd"};
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
	class A6_M16_Base : Rifle_Base
	{
		scope = 0;
		weight = 2900;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 1.03;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1.0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.7,2.7,1.3};
		aimSpeedModifier[]={0.35,0.35,0.35};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		modes[] = {"SemiAuto","Burst"};
        weaponStateAnim = "dz\anims\anm\player\reloads\m16a2\w_m16a2_states.anm";
		class SemiAuto : Mode_SemiAuto
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst : Mode_Burst
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
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
					positionOffset[] = {0,0,0};
				};
				class ChamberSmoke
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
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.6};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.6,1};
					positionOffset[] = {0.2,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.35,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};	
	class A6_M16: A6_M16_Base
	{
		scope = 2;
		displayName = "M16";
		descriptionShort = "The M16 is the standard full size rifle. It features a full length barrel and fixed stock. Fires in Semi or Burst configuration. Uses 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\M16\M16_New.p3d";
		attachments[] = {"weaponWrap","weaponM4PistolGrip","weaponOpticMountM16","weaponOptics","weaponHandguardM16","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponBayonet","weaponMuzzleM4"};
		itemSize[] = {9,3};
		hiddenSelections[]={"camo_m16","camo_pistolgrip","camo_stock_1"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\M16\data\camo_m16_co.paa",
			"A6_Weapons\Rifles\M16\data\camo_pistolgrip_co.paa",
			"A6_Weapons\Rifles\M16\data\camo_stock_1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\M16\data\camo_m16.rvmat",
			"A6_Weapons\Rifles\M16\data\camo_pistolgrip.rvmat",
			"A6_Weapons\Rifles\M16\data\camo_stock_1.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=250;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\M16\data\camo_m16.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip.rvmat","A6_Weapons\Rifles\M16\data\camo_stock_1.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M16\data\camo_m16.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip.rvmat","A6_Weapons\Rifles\M16\data\camo_stock_1.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M16\data\camo_m16_damage.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip_damage.rvmat","A6_Weapons\Rifles\M16\data\camo_stock_1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M16\data\camo_m16_damage.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip_damage.rvmat","A6_Weapons\Rifles\M16\data\camo_stock_1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M16\data\camo_m16_destruct.rvmat","A6_Weapons\Rifles\M16\data\camo_pistolgrip_destruct.rvmat","A6_Weapons\Rifles\M16\data\camo_stock_1_destruct.rvmat"}}
					};
                };
            };
        };
	};
	// Debug Spawning for Handguard Variants
	class A6_M16A2: A6_M16
	{
		displayName = "M16A2";
	};
	class A6_M16A3: A6_M16
	{
		displayName = "M16A3";
	};
	class A6_M16A4: A6_M16
	{
		displayName = "M16A4";
	};	
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Stanag_20Rnd: Magazine_Base
 	{
 		scope=2;
		displayName="20rd Standardized Mag";
		descriptionShort="Standardized magazine for compliant assault rifles used by alliance forces. Holds up to 20 5.56x45mm rounds.";
		model="A6_Weapons\Rifles\M16\New_Stanag_Mag_20rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.07,1.07,1.07};
		recoilModifier[]={0.95,0.95,0.95};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\M16\data\camo_20rnd.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M16\data\camo_20rnd.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M16\data\camo_20rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M16\data\camo_20rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M16\data\camo_20rnd_destruct.rvmat"}}
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
	class A6_Mag_Stanag_30Rnd: Magazine_Base
 	{
 		scope=2;
		displayName="30rd Standardized Mag";
		descriptionShort="Standardized magazine for compliant assault rifles used by alliance forces. Holds up to 30 5.56x45mm rounds.";
		model="A6_Weapons\Rifles\M16\New_Stanag_Mag_30rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
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
						{1.0,{"A6_Weapons\Rifles\M16\data\camo_20rnd.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M16\data\camo_20rnd.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M16\data\camo_20rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M16\data\camo_20rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M16\data\camo_20rnd_destruct.rvmat"}}
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
	class A6_Mag_Stanag_60Rnd: Magazine_Base
 	{
 		scope=2;
		displayName="60rd Standardized Mag";
		descriptionShort="Standardized magazine for compliant assault rifles used by alliance forces. Holds up to 60 5.56x45mm rounds.";
		model = "DZ\weapons\attachments\magazine\magazine_stanag60.p3d";
		weight = 450;
		weightPerQuantityUnit = 4.0;
		itemSize[] = {2,3};
		count = 60;
		ammo = "Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[] = {1.38,1.38,1.38};
		recoilModifier[]={0.85,0.85,0.85};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\M16\data\magazine_stanag60_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\M16\data\magazine_stanag60.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M16\data\magazine_stanag60.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M16\data\magazine_stanag60.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M16\data\magazine_stanag60_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M16\data\magazine_stanag60_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M16\data\magazine_stanag60_destruct.rvmat"}}
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
	class ProxyNew_Stanag_Mag_20rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\M16\New_Stanag_Mag_20rnd.p3d";
	};
	class ProxyNew_Stanag_Mag_30rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\M16\New_Stanag_Mag_30rnd.p3d";
	};
};	
