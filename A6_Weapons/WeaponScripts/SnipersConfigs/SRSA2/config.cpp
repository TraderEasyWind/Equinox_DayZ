class CfgPatches
{
	class A6_SRSA2
	{
		units[]={};
		weapons[] = {"A6_SRSA2"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]= {"A6_Mag_SRSA2_8Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class A6_SRSA2_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		weight=4000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		opticsFlare=0;
		ironsightsExcludingOptics[]={"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","HuntingOptic"};
		WeaponLength=0.75;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_A6_338"};
		magazines[] = {"A6_Mag_SRSA2_8Rnd"};
		magazineSwitchTime=0.38;
		barrelArmor = 3.125;
		ejectType=0;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.38,0.38,0.38};
		reloadAction="Reloadcz527";
		shotAction="Reloadcz527Shot";
		modes[]= {"Single"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		simpleHiddenSelections[] = {"hide_barrel"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_SRSA2_Shot_SoundSet","PolarExpress_Tail_SoundSet","PolarExpress_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_AX_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"A6_AX_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 200;
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
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class AnimationSources
		{
			class huntingscopetrans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_SRSA2: A6_SRSA2_Base
	{
		scope=2;
        displayName="DT SRS-A2";
		descriptionShort="The Desert Tech Stealth Recon Scout (SRS) is a bolt-action sniper rifle developed by the Utah-based firearm manufacturer Desert Tech (formerly Desert Tactical Arms). It was unveiled at the 2008 SHOT Show. It is known for its bullpup design. Chambered in .338 Lapua Magnum Rounds.";
		model="A6_Weapons\Snipers\SRSA2\SRSA2.p3d";
		attachments[]={"weaponWrap","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponmuzzle338"};
		itemSize[]={7,3};
		hiddenSelections[] = {"camo","barrel","handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\SRSA2\Data\body_co.paa","A6_Weapons\Snipers\SRSA2\Data\barrel_co.paa","A6_Weapons\Snipers\SRSA2\Data\handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\SRSA2\Data\body.rvmat","A6_Weapons\Snipers\SRSA2\Data\barrel.rvmat","A6_Weapons\Snipers\SRSA2\Data\handguard.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\SRSA2\Data\body.rvmat","A6_Weapons\Snipers\SRSA2\Data\barrel.rvmat","A6_Weapons\Snipers\SRSA2\Data\handguard.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SRSA2\Data\body.rvmat","A6_Weapons\Snipers\SRSA2\Data\barrel.rvmat","A6_Weapons\Snipers\SRSA2\Data\handguard.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SRSA2\Data\body_damaged.rvmat","A6_Weapons\Snipers\SRSA2\Data\barrel_damaged.rvmat","A6_Weapons\Snipers\SRSA2\Data\handguard_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SRSA2\Data\body_damaged.rvmat","A6_Weapons\Snipers\SRSA2\Data\barrel_damaged.rvmat","A6_Weapons\Snipers\SRSA2\Data\handguard_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SRSA2\Data\body_destruct.rvmat","A6_Weapons\Snipers\SRSA2\Data\barrel_destruct.rvmat","A6_Weapons\Snipers\SRSA2\Data\handguard_destruct.rvmat"}}
					};
				};
			};		
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_SRSA2_8Rnd: Magazine_Base
 	{
		scope=2;
		displayName="SRS-A2 Magazine";
		descriptionShort="8 round magazine for the SRSA2, loaded with .338 Lapua Magnum rounds.";
		model="A6_Weapons\Snipers\SRSA2\SRSA2_8Rnd_Mag.p3d";
		weight=250;
		itemSize[]={1,2};
		count=8;
		ammo = "Bullet_A6_338";
		ammoItems[] = {"Ammo_A6_338"};
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
						{1.0,{"A6_Weapons\Snipers\SRSA2\Data\magazine.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SRSA2\Data\magazine.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SRSA2\Data\magazine_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SRSA2\Data\magazine_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SRSA2\Data\magazine_destruct.rvmat"}}
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
    class ProxySRSA2_8Rnd_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\Snipers\SRSA2\SRSA2_8Rnd_Mag.p3d";
    };
};