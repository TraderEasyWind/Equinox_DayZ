class CfgPatches
{
	class A6_KSG
	{
		units[]={};
		weapons[]={"A6_KSG"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class A6_KSG_Base: Shotgun_Base
	{
		scope=0;
		weight=3100;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		chamberSize=14;
		chamberedRound="";
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[]={};
		DisplayMagazine=0;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=0.07;
		barrelArmor=2.25;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.2};
		aimSpeedModifier[]={0.2,0.2,0.2};
		cartridgeCreateTime[]={0.55,0.82};
		reloadSkips[]={0.26,0.4,0.53,0.64,0.735};
		reloadAction="ReloadMP133";
		shotAction="ReloadMP133Shot";
		modes[]={"Single"};
		simpleHiddenSelections[] = {"hide_irons4laser"};
		initSpeedMultiplier = 1.25;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptTopFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SuppressedShotgun_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_KSG: A6_KSG_Base
	{
		scope=2;
		displayName="KSG";
		descriptionShort="The Kel-Tec KSG is a bullpup 12-gauge pump-action shotgun designed by Kel-Tec.";
		model="A6_Weapons\Shotguns\KSG\KSG.p3d";
		attachments[]={"weaponOptics","weaponForegrip","weaponLightTop","weaponMuzzleShotgun"};
		itemSize[]={6,2};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\KSG\KSG_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\KSG\KSG.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Shotguns\KSG\KSG.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\KSG\KSG.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\KSG\KSG_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\KSG\KSG_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\KSG\KSG_destruct.rvmat"}}
					};
				};
			};
		};
	};
};