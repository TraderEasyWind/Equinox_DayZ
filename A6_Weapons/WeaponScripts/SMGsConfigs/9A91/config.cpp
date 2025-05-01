class CfgPatches
{
	class A6_9A91
	{
		units[] = {"A6_9A91"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_VSS"};
		magazines[] = {"A6_Mag_9A91_20Rnd"};
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
	class A6_9A91_Base: Rifle_Base
	{
		scope = 0;
		weight = 2500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,150,4,10};
		WeaponLength = 0.583269;
		initSpeedMultiplier = 0.95;
		barrelArmor = 2.4;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"A6_Mag_9A91_20Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.22,0.22,0.22};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		reloadAction = "ReloadVSS";
		modes[] = {"SemiAuto","FullAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_9A91_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"},{"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"A6_9A91_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"},{"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.099;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 50;
			type = "sound";
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
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
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
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class A6_9A91: A6_9A91_Base
	{
		scope = 2;
		displayName = "9A-91";
		descriptionShort = "The 9A91 is a modern sub machine gun of Russian origin. It was developed in the early 1990's as a compact weapon with superior short range firepower. Chambered for 9x39mm.";
		model = "A6_Weapons\SMGs\9A91\9A91.p3d";
		attachments[] = {"weaponWrap","weaponOpticMount","weaponOpticsAK","weaponOptics","Suppressor9A91","weaponForegrip","weaponLightLeft"};
		itemSize[] = {7,3};
		hiddenSelections[] = {"camo_buttstock","camo_handguard","camo_receiver","handgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\9A91\data\camo_buttstock_co.paa","A6_Weapons\SMGs\9A91\data\camo_handguard_co.paa","A6_Weapons\SMGs\9A91\data\camo_receiver_co.paa","A6_Weapons\SMGs\9A91\data\camo_receiver_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\9A91\data\camo_buttstock.rvmat","A6_Weapons\SMGs\9A91\data\camo_handguard.rvmat","A6_Weapons\SMGs\9A91\data\camo_receiver.rvmat","A6_Weapons\SMGs\9A91\data\handgrip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\9A91\data\camo_buttstock.rvmat","A6_Weapons\SMGs\9A91\data\camo_handguard.rvmat","A6_Weapons\SMGs\9A91\data\camo_receiver.rvmat","A6_Weapons\SMGs\9A91\data\handgrip.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\9A91\data\camo_buttstock.rvmat","A6_Weapons\SMGs\9A91\data\camo_handguard.rvmat","A6_Weapons\SMGs\9A91\data\camo_receiver.rvmat","A6_Weapons\SMGs\9A91\data\handgrip.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\9A91\data\camo_buttstock_damage.rvmat","A6_Weapons\SMGs\9A91\data\camo_handguard_damage.rvmat","A6_Weapons\SMGs\9A91\data\camo_receiver_damage.rvmat","A6_Weapons\SMGs\9A91\data\handgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\9A91\data\camo_buttstock_damage.rvmat","A6_Weapons\SMGs\9A91\data\camo_handguard_damage.rvmat","A6_Weapons\SMGs\9A91\data\camo_receiver_damage.rvmat","A6_Weapons\SMGs\9A91\data\handgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\9A91\data\camo_buttstock_destruct.rvmat","A6_Weapons\SMGs\9A91\data\camo_handguard_destruct.rvmat","A6_Weapons\SMGs\9A91\data\camo_receiver_destruct.rvmat","A6_Weapons\SMGs\9A91\data\handgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_9A91_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="9A-91 Magazine";
		descriptionShort="Detachable box magazine for the 9A-91. Holds up to 20 rounds of 9x39mm.";
		model="A6_Weapons\SMGs\9A91\9A91_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=20;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
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
						{1.0,{"A6_Weapons\SMGs\9A91\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\9A91\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\9A91\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\9A91\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\9A91\data\camo_magazine_destruct.rvmat"}}
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
    class Proxy9A91_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\SMGs\9A91\9A91_Mag.p3d";
    };
};