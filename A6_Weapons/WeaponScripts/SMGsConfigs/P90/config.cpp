class CfgPatches
{
	class A6_P90
	{
		units[]={};
		weapons[]={"A6_P90"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_P90_50Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class A6_P90_Base: Rifle_Base
	{
		scope=0;
		weight=2500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength=0.54108799;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_57x28"};
		magazines[]={"A6_Mag_P90_50Rnd"};
		magazineSwitchTime=0.3;
		barrelArmor = 2.0;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,0.9,0.7};
		aimSpeedModifier[]={0.2,0.2,0.2};
		reloadAction="ReloadCZ61";
		modes[]={"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ61\w_CZ61_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"P90_SoundSet","CZ61_Shot_1st_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]={"P90_SoundSet","CZ61_Shot_1st_iterior_SoundSet"};
			soundSetShot[]={"P90_SoundSet","CZ61_Shot_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"CZ61_1st_silencer_SoundSet"},{"CZ61_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			reloadTime=0.066;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.002;
			magazineSlot="magazine";
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
	class A6_P90: A6_P90_Base
	{
		scope=2;
		displayName="FN P90";
		descriptionShort="The FN P90 (also known as the FN Project 1990 PDWS) is a compact 5.7×28mm personal defense weapon designed and manufactured by FN Herstal in Belgium. Created in response to NATO requests for a replacement for 9×19mm Parabellum firearms, the P90 was designed as a compact but powerful firearm for vehicle crews, operators of crew-served weapons, support personnel, special forces, and counter-terrorist groups.";
		model="A6_Weapons\SMGs\P90\P90.p3d";
		attachments[] = {"weaponOptics","weaponWrap","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","pistolMuzzle"};
		itemSize[]={6,2};
		hiddenSelections[] = {"camo_metal","camo_plastic","rail_camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\P90\data\P90_co.paa","A6_Weapons\SMGs\P90\data\P90_2_co.paa","A6_Weapons\SMGs\P90\data\Rail_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\P90\data\P90_Metal.rvmat","A6_Weapons\SMGs\P90\data\P90_Plastic.rvmat","A6_Weapons\SMGs\P90\data\Rail.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\P90\data\P90_Metal.rvmat","A6_Weapons\SMGs\P90\data\P90_Plastic.rvmat","A6_Weapons\SMGs\P90\data\Rail.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\P90\data\P90_Metal.rvmat","A6_Weapons\SMGs\P90\data\P90_Plastic.rvmat","A6_Weapons\SMGs\P90\data\Rail.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\P90\data\P90_Metal_damage.rvmat","A6_Weapons\SMGs\P90\data\P90_Plastic_damage.rvmat","A6_Weapons\SMGs\P90\data\Rail_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\P90\data\P90_Metal_damage.rvmat","A6_Weapons\SMGs\P90\data\P90_Plastic_damage.rvmat","A6_Weapons\SMGs\P90\data\Rail_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\P90\data\P90_Metal_destruct.rvmat","A6_Weapons\SMGs\P90\data\P90_Plastic_destruct.rvmat","A6_Weapons\SMGs\P90\data\Rail_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_P90_50Rnd: Magazine_Base
 	{
		scope=2;
		displayName="FN P90 Magazine";
		descriptionShort="50 round magazine for the FN P90, loaded with 5.7x28mm FN Rounds";
		model="A6_Weapons\SMGs\P90\P90_magazine.p3d";
		weight=150;
		itemSize[]={1,3};
		count=50;
		ammo="Bullet_A6_57x28";
		ammoItems[]={"Ammo_A6_57x28"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.2,1.2,1.2};
		recoilModifier[]={0.85,0.85,0.85};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\P90\data\Magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\P90\data\Magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\P90\data\Magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\P90\data\Magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\P90\data\Magazine_destruct.rvmat"}}
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
	class ProxyP90_Magazine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\SMGs\P90\P90_Magazine.p3d";
	};
};	