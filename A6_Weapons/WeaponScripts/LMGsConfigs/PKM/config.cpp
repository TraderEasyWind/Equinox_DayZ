class CfgPatches
{
	class A6_PKM
	{
		units[]={};
		weapons[]={"A6_PKM"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_PKM_100Rnd"};
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
	class A6_PKM_Base: Rifle_Base
	{
		scope=0;
		weight=10000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength=0.875;
		barrelArmor = 2.4;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		magazines[]={"A6_Mag_PKM_100Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2,1.8,1.5};
		aimSpeedModifier[]={0.5,0.5,0.5};
		reloadAction="ReloadAKM";
		modes[]={"FullAuto"};
		initSpeedMultiplier = 1.0;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"PKMG_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SKS_silencerHomeMade_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.099;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion=0.002;
			magazineSlot="magazine";
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
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
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
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
	class A6_PKM: A6_PKM_Base
	{
		scope=2;
		displayName="PKM";
		descriptionShort="The PKM, is a 7.62×54mmR general-purpose machine gun designed in the Soviet Union and currently in production in Russia. The original PK machine gun was introduced in 1961 and then the improved PKM in 1969 to replace the SGM and RP-46 machine guns in Soviet service. It remains in use as a front-line infantry and vehicle-mounted weapon with Russia's armed forces. The PK has been exported extensively and produced in several other countries under license";
		model="A6_Weapons\LMGs\PKM\PKM.p3d";
		attachments[]={"weaponWrap"};
		itemSize[]={10,4};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\LMGs\PKM\data\pkm_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\LMGs\PKM\data\pkm.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\LMGs\PKM\data\pkm.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\PKM\data\pkm.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\PKM\data\pkm_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\PKM\data\pkm_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\PKM\data\pkm_destruct.rvmat"}}
					};
				};
			};
		};
	};	
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_PKM_100Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PKM Magazine";
		descriptionShort="100 Round magazine for the PKM, loaded with 7.62x54mmR rounds.";
		model="A6_Weapons\LMGs\PKM\PKM_magazine.p3d";
		weight=650;
		itemSize[]={3,3};
		count=100;
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
		ammo="Bullet_762x54";
		ammoItems[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
		tracersEvery=0;
		mass=35;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\LMGs\PKM\data\pkm.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\PKM\data\pkm.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\PKM\data\pkm_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\PKM\data\pkm_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\PKM\data\pkm_destruct.rvmat"}}
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
        class ProxyPKM_magazine: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\LMGs\PKM\PKM_magazine.p3d";
    };
};