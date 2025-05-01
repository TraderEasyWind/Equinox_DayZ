class CfgPatches
{
	class A6_Glock
	{
		units[]= {"A6_Glock19","A6_Glock19_Tan"};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_Glock19_15Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class A6_Glock19_Base: Pistol_Base
	{
		scope = 0;
		weight = 1000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.21;
		ShoulderDistance = 0.4;
		barrelArmor = 1.5;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"A6_Mag_Glock19_15Rnd","A6_Mag_Vector_33Rnd","A6_Mag_Vector_50Rnd"};
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,0.8};
		aimSpeedModifier[]={0.18,0.18,0.18};
		modes[] = {"SemiAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Glock19_Shot_SoundSet","Glock19_Tail_SoundSet","Glock19_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Glock19_silencerPro_SoundSet","Glock19_silencerTail_SoundSet","Glock19_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.13;
			recoil = "recoil_Glock";
			recoilProne = "recoil_Glock_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class NoiseShoot
		{
			strength = 50;
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
					overrideParticle = "weapon_shot_fnx_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 8;
				shotsToStartOverheating = 8;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,1};
					positionOffset[] = {0,0,0};
					onlyWithinRainLimits[] = {0,1};
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
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class A6_Glock19: A6_Glock19_Base
	{
		scope = 2;
		displayName = "Glock-19";
		descriptionShort = "The GLOCK 19 in 9 mm Luger is ideal for a versatile role thanks to its reduced dimensions when compared to the standard sized option. In addition to its use as a conventional service pistol, it is ideal for use as a backup weapon or for concealed carry purpose.";
		model = "A6_Weapons\Pistols\Glock\Glock19_New.p3d";
		attachments[] = {"pistolOptics","pistolFlashlight","pistolMuzzle"};
		itemSize[] = {3,2};
		hiddenSelections[]={"camo_pistol"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\Glock\data\camo_pistol_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\Glock\data\camo_pistol.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\Glock\data\camo_pistol.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\Glock\data\camo_pistol.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\Glock\data\camo_pistol_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\Glock\data\camo_pistol_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\Glock\data\camo_pistol_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Glock19_Tan: A6_Glock19
	{
		hiddenSelections[]={"camo_pistol"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\Glock\data\camo_pistol_tan_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\Glock\data\camo_pistol.rvmat"};
	};
};	
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Glock19_15Rnd: Magazine_Base
	{
		scope=2;
		displayName="Glock-19 Magazine";
		descriptionShort="15 round Magazine for the Glock-19, loaded with 9x19mm rounds.";
		model = "DZ\weapons\attachments\magazine\magazine_glock19.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight = 131;
		weightPerQuantityUnit = 8.0;
		itemSize[] = {1,2};
		count = 15;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery = 0;
		mass = 10;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\Glock\data\camo_magazine_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\Glock\data\camo_magazine.rvmat"};
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
						{1.0,{"A6_Weapons\Pistols\Glock\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\Glock\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\Glock\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\Glock\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\Glock\data\camo_magazine_destruct.rvmat"}}
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