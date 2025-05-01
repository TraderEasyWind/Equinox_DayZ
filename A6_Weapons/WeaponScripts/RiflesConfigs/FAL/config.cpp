class CfgPatches
{
	class A6_FAL
	{
		units[] = {};
		weapons[] = {"A6_FAL","A6_FAL_Tactical","A6_FAL_Paratrooper","A6_FAL_G"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_FAL"};
		magazines[]={"A6_Mag_FAL_30Rnd"};
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
	class A6_FAL_Base: Rifle_Base
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
		magazines[] = {"A6_Mag_FAL_20Rnd","A6_Mag_FAL_30Rnd","A6_Mag_FAL_50Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.8,2.8,1.8};
		aimSpeedModifier[]={0.44,0.44,0.44};
		reloadAction = "ReloadFal";
		modes[] = {"SemiAuto","FullAuto"};
		initSpeedMultiplier = 0.9;
		simpleHiddenSelections[] = {"hide_barrel","hide_pistolgrip","hide_ironsights"};
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion=0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			discreteDistance[] = {200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 200;
			distanceZoomMax = 600;
		};
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
	};
	class A6_FAL: A6_FAL_Base
	{
		scope = 2;
		displayName = "FN FAL";
		descriptionShort = "The FN FAL is a battle rifle designed in Belgium in 1953 by Dieudonné Saive and manufactured by FN Herstal. It received the title, the right arm of the free world, from its adoption by many self-proclaimed free world countries. Chambered for .308 Winchester.";
		model = "A6_Weapons\Rifles\FAL\FAL_New.p3d";
		attachments[] = {"weaponWrap","weaponButtstockFal","weaponFALPistolGrip","weaponFALOpticMount","weaponOptics","weaponHandguardFAL","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleFAL"};
		itemSize[] = {8,3};
		hiddenSelections[] = {"camo_fal"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\FAL\data\camo_fal_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_fal_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_fal_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_fal_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Tactical: A6_FAL 
	{
		displayName = "FN FAL Tactical";
	};
	class A6_FAL_Paratrooper: A6_FAL 
	{
		displayName = "FN FAL 50 63 Paratrooper";
	};
	class A6_FAL_G: A6_FAL 
	{
		displayName = "FN FAL G Series";
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_FAL_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="FAL Magazine";
		descriptionShort="30 Round Mag for the FAL & SA-58, loaded with .308 Winchester rounds.";
		model="A6_Weapons\Rifles\FAL\FAL_30rnd_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=300;
		itemSize[]={1,3};
		count=30;
		aimSpeedModifier[]={1.15,1.15,1.15};
		recoilModifier[]={0.85,0.85,0.85};
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
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
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_magazine_destruct.rvmat"}}
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
	class ProxyFAL_30rnd_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\FAL\FAL_30rnd_Mag.p3d";
	};
};	
