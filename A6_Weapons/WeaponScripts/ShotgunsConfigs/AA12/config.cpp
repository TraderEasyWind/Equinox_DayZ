class CfgPatches
{
	class A6_AA12
	{
		units[]={};
		weapons[]={"A6_AA12"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]= {"A6_Mag_AA12_24Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class A6_AA12_Base: Rifle_Base
	{
		scope = 0;
		weight = 4762;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {"A6_Mag_AA12_24Rnd"};
		magazineSwitchTime = 0.2;
		PPDOFProperties[] = {};
		WeaponLength = 0.75;
		barrelArmor = 1.68;
		ejectType = 1;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		reloadAction = "ReloadM4";
		modes[] = {"Single","FullAuto"};
		simpleHiddenSelections[] = {"folding_lowered","folding_raised"};
		initSpeedMultiplier = 1.15;
		hasRailFunctionality = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Saiga\w_Saiga_states.anm";
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
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
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AA12_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SuppressedShotgun_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.2;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AA12_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
            soundSetShotExt[]={{"SuppressedShotgun_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"}};
			reloadTime = 0.16;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
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
	};
	class A6_AA12: A6_AA12_Base
	{
		scope=2;
		displayName="AA-12";
		descriptionShort="The AA-12 (Auto Assault-12), originally designed and known as the Atchisson Assault Shotgun, is an automatic combat shotgun developed in 1972 by Maxwell Atchisson.";
		model="A6_Weapons\Shotguns\AA12\AA12.p3d";
		attachments[]={"weaponOptics","weaponLightLeft","weaponLightRight","weaponMuzzleShotgun"};
		itemSize[]={7,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\AA12\AA12_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\AA12\AA12.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Shotguns\AA12\AA12.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\AA12\AA12.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\AA12\AA12_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\AA12\AA12_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\AA12\AA12_destruct.rvmat"}}
					};
				};
			};
		};
	};
};	
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_AA12_24Rnd: Magazine_Base
 	{
		scope=2;
		displayName="AA-12 Drum Magazine";
		descriptionShort="24 round magazine for the AA-12";
		model="A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag.p3d";
		weight = 800;
		itemSize[] = {2,2};
		count = 24;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		tracersEvery = 0;
		mass = 10;
		aimSpeedModifier[]={1.3,1.3,1.3};
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
						{1.0,{"A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag_destruct.rvmat"}}
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
	class ProxyAA12_24Rnd_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Shotguns\AA12\AA12_24Rnd_Mag.p3d";
	};
};	