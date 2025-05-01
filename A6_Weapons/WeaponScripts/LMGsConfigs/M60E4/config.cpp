class CfgPatches
{
	class A6_M60E4
	{
		units[]={};
		weapons[]={"A6_M60E4"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_M60E4_100Rnd"};
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
	class A6_M60E4_Base: Rifle_Base
	{
		scope=0;
		weight=10200;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength=0.78;
		barrelArmor=2.4;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_M60E4_100Rnd"};
		magazineSwitchTime=0.38;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		aimSpeedModifier[]={0.5,0.5,0.5};
		reloadAction="ReloadAKM";
		modes[]={"FullAuto"};
		initSpeedMultiplier = 1.0;
		simpleHiddenSelections[]={"hide_ironsights","hide_barrel"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"M60E4_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.099;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
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
	class A6_M60E4: A6_M60E4_Base
	{
		scope=2;
		displayName="M60E4";
		descriptionShort="The M60E4 is a belt-fed machine gun. It is generally used as a crew-served weapon and operated by a team of two or three individuals. Chambered in .308 Winchester.";
		model="A6_Weapons\LMGs\M60E4\M60E4.p3d";
		attachments[]= {"weaponWrap","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponBipod"};
		itemSize[]={10,4};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\LMGs\M60E4\data\m60e4_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\LMGs\M60E4\data\m60e4.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\LMGs\M60E4\data\m60e4.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\M60E4\data\m60e4.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\M60E4\data\m60e4_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\M60E4\data\m60e4_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\M60E4\data\m60e4_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M60E4_100Rnd: Magazine_Base
	{
		scope=2;
		displayName="M60E4 Magazine";
		descriptionShort="100 Round Magazine for the M60E4, loaded with .308 Winchester Rounds";
		model="A6_Weapons\LMGs\M60E4\M60E4_Mag.p3d";
		weight=400;
		itemSize[]={3,3};
		count=100;
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\LMGs\M60E4\data\ammo_pouch.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\M60E4\data\ammo_pouch.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\M60E4\data\ammo_pouch_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\M60E4\data\ammo_pouch_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\M60E4\data\ammo_pouch_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
    class ProxyAttachment;
        class ProxyM60E4_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\LMGs\M60E4\M60E4_Mag.p3d";
    };
};