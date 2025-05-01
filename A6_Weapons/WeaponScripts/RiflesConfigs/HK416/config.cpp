class CfgPatches
{
	class A6_HK416
	{
		units[] = 
		{
			"A6_HK416_Carbine_Black",
			"A6_HK416_Carbine_Tan",
			"A6_HK416_Black",
			"A6_HK416_Tan"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
		magazine[] = {"A6_Mag_HK_PMG2_30Rnd"};
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
	class A6_HK416_Base: Rifle_Base
	{
		scope = 0;
		weight = 2900;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		barrelArmor = 2.5;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		modes[] = {"SemiAuto","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"HK416_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"HK416_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
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
			class grip_trans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class bipod_trans
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
			class lighttranslation2
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_HK416_Carbine_Base: A6_HK416_Base
	{
		scope = 0;
		displayName = "HK 416 Carbine";
		descriptionShort = "The HK416 A5 is a further development of the HK416 assault rifle in 5.56x45mm NATO caliber. The most striking changes compared to its previous versions as well as to market available AR platforms include an improved and tool-less gas regulator for suppressor use, a redesigned, user-friendly lower receiver, which allows complete ambidextrous operation of the weapon and ensures optimised magazine compatibility. Additionally, numerous technical improvements to maximize the safety of the operator, weapon reliability, ammunition compatibility, and durability under real operating conditions. Uses 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\HK416\HK416_279.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardHK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleM4"};
		itemSize[] = {7,3};
		WeaponLength = 0.75;
		initSpeedMultiplier = 0.9;
		aimSpeedModifier[]={0.29,0.29,0.29};
	};
	class A6_HK416_Carbine_Black: A6_HK416_Carbine_Base
	{
		scope = 2;
		hiddenSelections[]={"camo_hk_receiver","camo_hk_barrel","camo_ironsights","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_co.paa",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel_co.paa",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black.rvmat",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
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
						{1.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_destruct.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_destruct.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK416_Carbine_Tan: A6_HK416_Carbine_Base
	{
		scope = 2;
		hiddenSelections[]={"camo_hk_receiver","camo_hk_barrel","camo_ironsights","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_co.paa",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel_co.paa",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan.rvmat",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
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
						{1.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_destruct.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_destruct.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK416_Standard_Base: A6_HK416_Base
	{
		scope = 0;
		displayName = "HK 416";
		descriptionShort = "The HK416 A5 is a further development of the HK416 assault rifle in 5.56x45mm NATO caliber. The most striking changes compared to its previous versions as well as to market available AR platforms include an improved and tool-less gas regulator for suppressor use, a redesigned, user-friendly lower receiver, which allows complete ambidextrous operation of the weapon and ensures optimised magazine compatibility. Additionally, numerous technical improvements to maximize the safety of the operator, weapon reliability, ammunition compatibility, and durability under real operating conditions. Uses 5.56x45mm rounds.";
		model = "A6_Weapons\Rifles\HK416\HK416_368.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardHK","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleM4"};
		weight = 3200;
		itemSize[] = {8,3};
		WeaponLength = 0.814784;
		initSpeedMultiplier = 1.05;
		recoilModifier[] = {1.05,1.05,1.05};
		swayModifier[] = {2.1,2.1,1.1};
		aimSpeedModifier[]={0.33,0.33,0.33};
	};	
	class A6_HK416_Black: A6_HK416_Standard_Base
	{
		scope = 2;
		hiddenSelections[]={"camo_hk_receiver","camo_hk_barrel","camo_ironsights","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_co.paa",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel_co.paa",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black.rvmat",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
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
						{1.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_black_destruct.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_destruct.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK416_Tan: A6_HK416_Standard_Base
	{
		scope = 2;
		hiddenSelections[]={"camo_hk_receiver","camo_hk_barrel","camo_ironsights","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_co.paa",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel_co.paa",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan.rvmat",
            "A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat",
			"A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
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
						{1.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_damage.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_damage.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_receiver_tan_destruct.rvmat","A6_Weapons\Rifles\HK416\data\camo_hk_barrel_destruct.rvmat","A6_Weapons\Attachments\Ironsights\Kriss_Defiance\data\camo_ironsights_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_HK_PMG2_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="5.56x45 HK PM Gen.2 STANAG";
		descriptionShort="30 round 5.56x45mm Magazine.";
		model="A6_Weapons\Rifles\HK416\HK_gen2_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		aimSpeedModifier[]={1.03,1.03,1.03};
		recoilModifier[]={0.92,0.92,0.92};
		count=30;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
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
						{1.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_gen2_30.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HK416\data\camo_hk_gen2_30.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HK416\data\camo_hk_gen2_30_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HK416\data\camo_hk_gen2_30_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HK416\data\camo_hk_gen2_30_destruct.rvmat"}}
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
	class ProxyHK_gen2_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\HK416\HK_gen2_mag.p3d";
	};
};