class CfgPatches
{
	class A6_MK14
	{
		units[]={};
		weapons[]={"A6_MK14"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_M14_10Rnd","A6_Mag_M14_20Rnd"};
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
	class A6_MK14_Base: Rifle_Base
	{
		scope=0;
		weight=5170;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 1.118;
		barrelArmor = 2.2;
		initSpeedMultiplier = 1.17;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[] = {"A6_Mag_M14_10Rnd","A6_Mag_M14_20Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.9,1.9,1.1};
		aimSpeedModifier[]={0.3,0.3,0.3};
		modes[]={"SemiAuto"};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		hasRailFunctionality = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptGrip = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M14\w_M14_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M14_Shot_SoundSet","M14_Tail_SoundSet","M14_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M14_silencerHomeMade_SoundSet","M14_silencerHomeMadeTail_SoundSet","M14_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion = 0.00045;
			magazineSlot="magazine";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {50,100,250};
			discreteDistanceInitIndex = 0;
		};
	};
	class A6_MK14: A6_MK14_Base
	{
		scope=2;
		displayName="MK-14 EBR";
		descriptionShort="The MK-14 Enhanced Battle Rifle (EBR) is an American selective fire military designated marksman rifle. It is a variant of the M14 battle rifle and was originally built for use with units of United States Special Operations Command, such as the United States Navy SEALs, Delta Force, and task specific ODA teams/units. Chambered in .308 Winchester rounds.";
		model="A6_Weapons\Rifles\MK14\MK14.p3d";
		attachments[]={"weaponWrap","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[]={8,3};
		hiddenSelections[] = {"color1","color2","color3"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\MK14\data\MK14_1_co.paa","A6_Weapons\Rifles\MK14\data\MK14_2_co.paa","A6_Weapons\Rifles\MK14\data\MK14_3_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\MK14\data\MK14_1.rvmat","A6_Weapons\Rifles\MK14\data\MK14_2.rvmat","A6_Weapons\Rifles\MK14\data\MK14_3.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\MK14\data\MK14_1.rvmat","A6_Weapons\Rifles\MK14\data\MK14_2.rvmat","A6_Weapons\Rifles\MK14\data\MK14_3.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MK14\data\MK14_1.rvmat","A6_Weapons\Rifles\MK14\data\MK14_2.rvmat","A6_Weapons\Rifles\MK14\data\MK14_3.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MK14\data\MK14_1_damage.rvmat","A6_Weapons\Rifles\MK14\data\MK14_2_damage.rvmat","A6_Weapons\Rifles\MK14\data\MK14_3_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MK14\data\MK14_1_damage.rvmat","A6_Weapons\Rifles\MK14\data\MK14_2_damage.rvmat","A6_Weapons\Rifles\MK14\data\MK14_3_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MK14\data\MK14_1_destruct.rvmat","A6_Weapons\Rifles\MK14\data\MK14_2_destruct.rvmat","A6_Weapons\Rifles\MK14\data\MK14_3_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class M14_Base: Rifle_Base
	{
		magazines[] = {"A6_Mag_M14_10Rnd","A6_Mag_M14_20Rnd","Mag_M14_10Rnd","Mag_M14_20Rnd"};
	};	
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_M14_10Rnd: Magazine_Base
 	{
 		scope=2;
		displayName="M14 Magazine";
		descriptionShort="M14 magazine for compliant DMR Rifles. Holds up to 10 7.62x51mm (.308 Winchester) rounds.";
		model = "DZ\weapons\attachments\magazine\magazine_m14_10rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=75;
		itemSize[]={1,2};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.95,0.95,0.95};
		count=10;
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		tracersEvery=0;
		mass=10;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"dz\weapons\attachments\magazine\data\m14_mag.rvmat"}},
						{0.7,{"dz\weapons\attachments\magazine\data\m14_mag.rvmat"}},
						{0.5,{"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"}},
						{0.3,{"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"}},
						{0.0,{"dz\weapons\attachments\magazine\data\m14_mag_destruct.rvmat"}}
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
	class A6_Mag_M14_20Rnd: Magazine_Base
 	{
 		scope=2;
		displayName="M14 Magazine";
		descriptionShort="M14 magazine for compliant DMR Rifles. Holds up to 20 7.62x51mm (.308 Winchester) rounds.";
		model = "DZ\weapons\attachments\magazine\magazine_m14_20rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=100;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
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
                    healthLevels[]= 
					{
						{1.0,{"dz\weapons\attachments\magazine\data\m14_mag.rvmat"}},
						{0.7,{"dz\weapons\attachments\magazine\data\m14_mag.rvmat"}},
						{0.5,{"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"}},
						{0.3,{"dz\weapons\attachments\magazine\data\m14_mag_damage.rvmat"}},
						{0.0,{"dz\weapons\attachments\magazine\data\m14_mag_destruct.rvmat"}}
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