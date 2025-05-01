class CfgPatches
{
	class A6_M249
	{
		units[]={};
		weapons[]={"A6_M249"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_M249_200Rnd"};
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
	class A6_M249_Base: Rifle_Base
	{
		scope=0;
		weight=8100;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 1.118;
		barrelArmor=2.4;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_M249_200Rnd"};
		magazineSwitchTime = 0.45;
		ejectType=1;
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {2.5,2.5,1.5};
		aimSpeedModifier[]={0.42,0.42,0.42};
		modes[]={"FullAuto"};
		initSpeedMultiplier = 1.05;
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_muzzle"};
        weaponStateAnim = "dz\anims\anm\player\reloads\M14\w_M14_states.anm";
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"M249G_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.004;
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
					positionOffset[] = {-0.05,0,0};
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 10;
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
	class A6_M249: A6_M249_Base
	{
		scope=2;
		displayName="M249 SAW";
		descriptionShort="The M249 light machine gun (LMG), also known as the M249 Squad Automatic Weapon (SAW) which continues to be the manufacturer's designation and formally written as Light Machine Gun, 5.56 mm, M249, is the American adaptation of the Belgian FN Minimi, a light machine gun manufactured by the Belgian company FN Herstal (FN).";
		model="A6_Weapons\LMGs\M249\m249_new.p3d";
		attachments[]= {"weaponWrap","weaponFALPistolGrip","weaponOptics","weaponBipod","weaponMuzzleM4"};
		itemSize[]={9,3};
		hiddenSelections[]= {"camo","camo_fal"};
		hiddenSelectionsTextures[] = {"A6_Weapons\LMGs\M249\data\camo_co.paa","A6_Weapons\Rifles\FAL\data\camo_fal_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\LMGs\M249\data\camo.rvmat","A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\LMGs\M249\data\camo.rvmat","A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\M249\data\camo.rvmat","A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\M249\data\camo_damage.rvmat","A6_Weapons\Rifles\FAL\data\camo_fal_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\M249\data\camo_damage.rvmat","A6_Weapons\Rifles\FAL\data\camo_fal_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\M249\data\camo_destruct.rvmat","A6_Weapons\Rifles\FAL\data\camo_fal_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M249_200Rnd: Magazine_Base
	{
		scope=2;
		displayName="M249 SAW Magazine";
		descriptionShort="200 Round Magazine for the M249 SAW, loaded with 5.56x45mm";
		model="A6_Weapons\LMGs\M249\m249_mag.p3d";
		weight=250;
		itemSize[]={3,3};
		count=200;
		aimSpeedModifier[]={1.4,1.4,1.4};
		recoilModifier[]={0.85,0.85,0.85};
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
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
						{1.0,{"A6_Weapons\LMGs\M249\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\M249\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\M249\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\M249\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\M249\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxym249_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\LMGs\M249\m249_mag.p3d";
	};
};	