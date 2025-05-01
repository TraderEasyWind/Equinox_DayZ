class CfgPatches
{
	class A6_PX4
	{
		units[] = {};
		weapons[] = {"A6_PX4"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_PX4_14Rnd"};
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
	class A6_PX4_Base: Pistol_Base
	{
		scope = 0;
		weight = 538;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.560518;
		barrelArmor = 1.5;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"A6_Mag_PX4_14Rnd"};
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		ejectType = 1;
		recoilModifier[] = {1.1,1.1,1};
		swayModifier[] = {1,1,0.7};
		aimSpeedModifier[]={0.18,0.18,0.18};
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 0.9;
        weaponStateAnim = "dz\anims\anm\player\reloads\CZ75\w_CZ75_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"Colt1911_Shot_SoundSet","Colt1911_Tail_SoundSet","Colt1911_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Colt1911_silencerPro_SoundSet","Colt1911_silencerTail_SoundSet","Colt1911_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			recoil="recoil_cz75";
			recoilProne="recoil_cz75_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
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
				shotsToStartOverheating = 3;
				maxOverheatingValue = 7;
				overheatingDecayInterval = 1;
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
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
	};
	class A6_PX4: A6_PX4_Base
	{
		scope = 2;
		displayName = "Beretta Px4";
		descriptionShort = "The PX4 Thunder is as tough and reliable as it is accurate, safe and easy to use. Chambered in 9x19mm.";
		model="A6_Weapons\Pistols\PX4\PX4.p3d";
		attachments[]={"pistolMuzzle","pistolFlashlight"};
		itemSize[]={2,2};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\PX4\px4_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\PX4\px4.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\PX4\PX4.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\PX4\PX4.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\PX4\PX4_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\PX4\PX4_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\PX4\PX4_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_PX4_14Rnd: Magazine_Base
	{
		scope=2;
		displayName="Beretta Px4 Magazine";
		descriptionShort="14 Round Magazine for the Beretta Px4 Thunder, loaded with 9x19mm rounds.";
		model="A6_Weapons\Pistols\PX4\PX4_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=120;
		itemSize[]={1,2};
		count=14;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\PX4\PX4.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\PX4\PX4.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\PX4\PX4_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\PX4\PX4_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\PX4\PX4_destruct.rvmat"}}
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
	class ProxyPX4_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\PX4\PX4_Mag.p3d";
	};
};