class CfgPatches
{
	class A6_HKG28
	{
		units[] = 
		{
			"A6_HKG28",
			"A6_HK417"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
		magazine[] = {"A6_Mag_HKG28_20Rnd"};
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
	class A6_HKG28_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.752228;
		barrelArmor = 2.2;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_HKG28_20Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1.4,1.4,1.4};
		swayModifier[] = {2.4,2.4,1.4};
		aimSpeedModifier[]={0.4,0.4,0.4};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class NoiseShoot
		{
			strength = 100;
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
			class lighttranslation2
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_HKG28: A6_HKG28_Base
	{
		scope = 2;
		displayName = "HK G28";
		descriptionShort = "The HK G28 rifle was developed by Heckler & Koch specifically for the Bundeswehr as a support weapon for small infantry units. The G28 is based on the HK MR308, which, in turn, is a civilian version of the HK 417 automatic rifle. Despite several differences, the HK G28 is 75 percent interchangeable with the HK 417. This rifle is designed to shoot at distances inaccessible to standard 5.56mm assault rifles. Uses 7.62x51mm rounds.";
		model = "A6_Weapons\Rifles\HKG28\HKG28.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardHKG28","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[] = {9,3};
		hiddenSelections[]={"camo_hk_g28_receiver","camo_hk_g28_barrel","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_co.paa",
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver.rvmat",
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
		};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"M60E4_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00045;
			magazineSlot = "magazine";
		};
		initSpeedMultiplier = 1.15;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_damage.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_damage.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_destruct.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK417: A6_HKG28_Base
	{
		scope = 2;
		displayName = "HK 417";
		descriptionShort = "The Heckler & Koch HK417 is a battle rifle designed and manufactured by Heckler & Koch. Being the larger caliber version of the Heckler & Koch HK416, and chambered for the 7.62×51mm NATO rifle cartridge, it is intended for use where the penetrative power, stopping power, and range of the 5.56×45mm NATO HK416 would otherwise be insufficient. The HK417 is gas-operated, has a rotating bolt and is capable of selective fire. Uses 7.62x51mm rounds.";
		model = "A6_Weapons\Rifles\HKG28\HKG28.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardHKG28","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[] = {9,3};
		hiddenSelections[]={"camo_hk_g28_receiver","camo_hk_g28_barrel","camo_pistolgrip"};
		hiddenSelectionsTextures[]=
		{
			"A6_Weapons\Rifles\HKG28\data\camo_hk_417_receiver_co.paa",
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver.rvmat",
			"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"
		};
		modes[] = {"SemiAuto","FullAuto"};
		initSpeedMultiplier = 0.95;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"M60E4_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"M60E4_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_damage.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_damage.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_damage.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_receiver_destruct.rvmat","A6_Weapons\Rifles\HKG28\data\camo_hk_g28_barrel_destruct.rvmat","A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_HKG28_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="HK G28/417 Magazine";
		descriptionShort="20 round 7.62x51mm Magazine for the HK G28 or HK 417.";
		model="A6_Weapons\Rifles\HKG28\HKG28_Magazine.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
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
						{1.0,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\HKG28\data\camo_hk_g28_magazine_destruct.rvmat"}}
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
	class ProxyHKG28_Magazine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\HKG28\HKG28_Magazine.p3d";
	};
};