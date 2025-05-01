class CfgPatches
{
	class A6_M1911Compact
	{
		units[] = {};
		weapons[] = {"A6_M1911_Compact"};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_M1911_Compact_9Rnd"};
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
	class A6_M1911_Compact_Base: Pistol_Base
	{
		scope = 0;
		weight = 1106;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.9,10,250,4,10};
		WeaponLength = 0.21;
		ShoulderDistance = 0.4;
		barrelArmor = 1.523;
		initSpeedMultiplier = 0.85;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"A6_Mag_M1911_Compact_9Rnd"};
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		magazineSwitchTime = 0.24;
		ejectType = 1;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,0.6};
		aimSpeedModifier[]={0.15,0.15,0.15};
		modes[] = {"SemiAuto"};
        weaponStateAnim = "dz\anims\anm\player\reloads\1911\w_1911_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Colt1911_Shot_SoundSet","Colt1911_Tail_SoundSet","Colt1911_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Colt1911_silencerPro_SoundSet","Colt1911_silencerTail_SoundSet","Colt1911_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.13;
			recoil = "recoil_1911";
			recoilProne = "recoil_1911_prone";
			dispersion = 0.0045;
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
	class A6_M1911_Compact: A6_M1911_Compact_Base
	{
		scope = 2;
		displayName = "M1911 Compact 9mm";
		descriptionShort = "The Compact 9mm M1911. Everything great about a 1911 but in 9x19mm barrel configuration.";
		model="A6_Weapons\Pistols\M1911Compact\M1911Compact.p3d";
		attachments[] = {"pistolMuzzle"};
		itemSize[] = {2,2};
		hiddenSelections[] = {"camo_frame","camo_slide"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Pistols\M1911Compact\data\camo_frame_co.paa","A6_Weapons\Pistols\M1911Compact\data\camo_slide_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Pistols\M1911Compact\data\camo_frame.rvmat","A6_Weapons\Pistols\M1911Compact\data\camo_slide.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\M1911Compact\data\camo_frame.rvmat","A6_Weapons\Pistols\M1911Compact\data\camo_slide.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\M1911Compact\data\camo_frame.rvmat","A6_Weapons\Pistols\M1911Compact\data\camo_slide.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\M1911Compact\data\camo_frame_damage.rvmat","A6_Weapons\Pistols\M1911Compact\data\camo_slide_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\M1911Compact\data\camo_frame_damage.rvmat","A6_Weapons\Pistols\M1911Compact\data\camo_slide_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\M1911Compact\data\camo_frame_destruct.rvmat","A6_Weapons\Pistols\M1911Compact\data\camo_slide_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M1911_Compact_9Rnd: Magazine_Base
	{
		scope=2;
		displayName="M1911 Compact 9mm Magazine";
		descriptionShort="9 round Magazine for the M1911 Compact 9mm, loaded with 9x19mm rounds.";
		model="A6_Weapons\Pistols\M1911Compact\M1911Compact_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight = 68;
		weightPerQuantityUnit = 12.0;
		itemSize[] = {1,2};
		count = 9;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery = 0;
		mass = 10;
		hiddenSelections[]={"camo_magazine"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\M1911Compact\data\camo_magazine_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\M1911Compact\data\camo_magazine.rvmat"};
		aimSpeedModifier[]={1.05,1.05,1.05};
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
						{1.0,{"A6_Weapons\Pistols\M1911Compact\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\M1911Compact\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\M1911Compact\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\M1911Compact\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\M1911Compact\data\camo_magazine_destruct.rvmat"}}
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
	class ProxyM1911Compact: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model="A6_Weapons\Pistols\M1911Compact\M1911Compact.p3d";
	};
	class ProxyM1911Compact_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\M1911Compact\M1911Compact_Mag.p3d";
	};
};	