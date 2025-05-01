class CfgPatches
{
	class A6_MP7A2
	{
		units[]= {};
		weapons[] = {"A6_MP7A2"};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_MP7A2_20Rnd","A6_Mag_MP7A2_40Rnd"};
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
	class A6_MP7A2_Base: Rifle_Base
	{
		scope=0;
		weight=1746;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.6;
		barrelArmor = 2.0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_46x30"};
		magazines[] = {"A6_Mag_MP7A2_20Rnd","A6_Mag_MP7A2_40Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,0.9,0.8};
		aimSpeedModifier[]={0.23,0.23,0.23};
		modes[] = {"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		simpleHiddenSelections[] = {"hide_irons4laser"};
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ61\w_CZ61_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"MP7A2_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MP7A2_Silenced_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.075;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"MP7A2_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MP7A2_Silenced_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.066;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
		class NoiseShoot
		{
			strength = 66;
			type = "shot";
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
	};
	class A6_MP7A2: A6_MP7A2_Base
	{
		scope=2;
		displayName="MP7A2";
		descriptionShort="The MP7 went into production in 2001, and is a direct rival to the FN P90, also developed in response to NATO's requirement by Belgian company FN Herstal. Chambered in HK 4.6x30mm.";
		model="A6_Weapons\SMGs\MP7A2\MP7A2.p3d";
		attachments[] = {"weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","MP7A2Suppressor"};
		itemSize[]={5,3};
		hiddenSelections[] = {"camo","ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP7A2\data\MP7A2_co.paa","A6_Weapons\SMGs\MP7A2\data\sights_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP7A2\data\MP7A2.rvmat","A6_Weapons\SMGs\MP7A2\data\sights.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\MP7A2\data\MP7A2.rvmat","A6_Weapons\SMGs\MP7A2\data\sights.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP7A2\data\MP7A2.rvmat","A6_Weapons\SMGs\MP7A2\data\sights.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP7A2\data\MP7A2_damage.rvmat","A6_Weapons\SMGs\MP7A2\data\sights_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP7A2\data\MP7A2_damage.rvmat","A6_Weapons\SMGs\MP7A2\data\sights_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP7A2\data\MP7A2_destruct.rvmat","A6_Weapons\SMGs\MP7A2\data\sights_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_MP7A2_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="MP7A2 Magazine";
		descriptionShort="20 round magazine for the MP7A2, loaded with HK 4.6x30mm Rounds.";
		model="A6_Weapons\SMGs\MP7A2\MP7A2_Magazine_20Rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=20;
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		ammo="Bullet_A6_46x30";
		ammoItems[]={"Ammo_A6_46x30"};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\MP7A2\data\Magazine_20Rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP7A2\data\Magazine_20Rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP7A2\data\Magazine_20Rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP7A2\data\Magazine_20Rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP7A2\data\Magazine_20Rnd_destruct.rvmat"}}
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
  	class A6_Mag_MP7A2_40Rnd: Magazine_Base
 	{
		scope=2;
		displayName="MP7A2 Magazine";
		descriptionShort="40 round magazine for the MP7A2, loaded with HK 4.6x30mm Rounds.";
		model="A6_Weapons\SMGs\MP7A2\MP7A2_Magazine.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=40;
		ammo="Bullet_A6_46x30";
		ammoItems[]={"Ammo_A6_46x30"};
		tracersEvery=0;
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
						{1.0,{"A6_Weapons\SMGs\MP7A2\data\Magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP7A2\data\Magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP7A2\data\Magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP7A2\data\Magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP7A2\data\Magazine_destruct.rvmat"}}
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
	class ProxyMP7A2_Magazine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\SMGs\MP7A2\MP7A2_Magazine.p3d";
	};
	class ProxyMP7A2_Magazine_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\SMGs\MP7A2\MP7A2_Magazine_20Rnd.p3d";
	};
};	