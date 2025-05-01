class CfgPatches
{
	class A6_P320
	{
		units[] = {};
		weapons[] = {"A6_P320","A6_P320_Silver","A6_P320_Tan","A6_P320_Tan2"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_P320_17Rnd","A6_Mag_P320_Tan_17Rnd"};
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
	class A6_P320_Base: Pistol_Base
	{
		scope = 0;
		weight = 1000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.63;
		barrelArmor = 1.5;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"A6_Mag_P320_17Rnd","A6_Mag_P320_Tan_17Rnd"};
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.1,1.1,0.8};
		aimSpeedModifier[]={0.16,0.16,0.16};
		reloadAction = "ReloadGlock";
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 1.0;
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
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
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
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 15;
				overheatingDecayInterval = 1;
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
	class A6_P320: A6_P320_Base
	{
		scope = 2;
		displayName = "SIG Sauer P320";
		descriptionShort = "The SIG Sauer P320 is a modular semi-automatic pistol made by SIG Sauer, Inc. Chambered for 9x19mm.";
		model="A6_Weapons\Pistols\P320\p320.p3d";
		attachments[] = {"pistolOptics","pistolFlashlight","pistolMuzzle"};
		itemSize[] = {3,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\P320\data\camo_p320.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\P320\data\camo_p320.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\P320\data\camo_p320_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\P320\data\camo_p320_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\P320\data\camo_p320_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_P320_Silver: A6_P320
	{
		scope = 2;
		hiddenSelections[]={"camo_p320"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\P320\data\camo_p320_twotone_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\P320\data\camo_p320_twotone.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\P320\data\camo_p320_twotone.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\P320\data\camo_p320_twotone.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\P320\data\camo_p320_twotone_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\P320\data\camo_p320_twotone_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\P320\data\camo_p320_twotone_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_P320_Tan: A6_P320
	{
		scope = 2;
		hiddenSelections[]={"camo_p320"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\P320\data\camo_p320_tan_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\P320\data\camo_p320.rvmat"};
	};
	class A6_P320_Tan2: A6_P320
	{
		scope = 2;
		hiddenSelections[]={"camo_p320"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\P320\data\camo_p320_twotone_tan_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\P320\data\camo_p320.rvmat"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_P320_17Rnd: Magazine_Base
	{
		scope=2;
		displayName="P320 Magazine";
		descriptionShort="17 round Magazine for the P320, loaded with 9x19mm rounds.";
		model="A6_Weapons\Pistols\P320\p320_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=110;
		itemSize[]={1,2};
		count=17;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]={"camo_magazine"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\P320\data\camo_magazine_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\P320\data\camo_magazine.rvmat"};
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
						{1.0,{"A6_Weapons\Pistols\P320\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\P320\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\P320\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\P320\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\P320\data\camo_magazine_destruct.rvmat"}}
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
	class A6_Mag_P320_Tan_17Rnd: Magazine_Base
	{
		scope=2;
		displayName="P320 Magazine";
		descriptionShort="17 round Magazine for the P320, loaded with 9x19mm rounds.";
		model="A6_Weapons\Pistols\P320\p320_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=110;
		itemSize[]={1,2};
		count=17;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]={"camo_magazine"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\P320\data\camo_magazine_tan_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\P320\data\camo_magazine.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\P320\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\P320\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\P320\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\P320\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\P320\data\camo_magazine_destruct.rvmat"}}
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
	class Proxyp320_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\P320\p320_mag.p3d";
	};
};
