class CfgPatches
{
	class A6_VSSK
	{
		units[]={};
		weapons[] = {"A6_VSSK"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]= {"A6_Mag_VSSK_5Rnd"};
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
	class A6_VSSK_Base: Rifle_Base
	{
		scope=0;
		weight=7000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		opticsFlare=0;
		ironsightsExcludingOptics[]= {"HuntingOptic"};
		WeaponLength=0.934214;
		value=0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_A6_127x55"};
		magazines[] = {"A6_Mag_VSSK_5Rnd"};
		magazineSwitchTime=0.45;
		barrelArmor = 1.6;
		ejectType=0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.0,1.9,1.1};
		aimSpeedModifier[]={0.42,0.42,0.42};
		modes[]={"SemiAuto"};
		simpleHiddenSelections[] = {"hide_barrel","folding_lowered","folding_raised"};
		initSpeedMultiplier = 2.0;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"VSSK_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.4;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 7;
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
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.05,0,0};
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
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
    class A6_VSSK: A6_VSSK_Base
	{
		scope=2;
        displayName="VSSK";
		descriptionShort="The VSSK is a Russian bullpup, magazine-fed sniper rifle chambered in 12.7×55mm STs-130 subsonic round.";
		model="A6_Weapons\Snipers\VSSK\VSSK.p3d";
		attachments[]={"weaponWrap","weaponOptics","weaponBipod"};
		itemSize[]={8,3};
		hiddenSelections[] = {"camo","suppressor","ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\VSSK\data\vssk_co.paa","A6_Weapons\Snipers\VSSK\data\suppressor_co.paa","A6_Weapons\Snipers\VSSK\data\irons_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\VSSK\data\vssk.rvmat","A6_Weapons\Snipers\VSSK\data\suppressor.rvmat","A6_Weapons\Snipers\VSSK\data\irons.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\VSSK\data\vssk.rvmat","A6_Weapons\Snipers\VSSK\data\suppressor.rvmat","A6_Weapons\Snipers\VSSK\data\irons.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\VSSK\data\vssk.rvmat","A6_Weapons\Snipers\VSSK\data\suppressor.rvmat","A6_Weapons\Snipers\VSSK\data\irons.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\VSSK\data\vssk_damaged.rvmat","A6_Weapons\Snipers\VSSK\data\suppressor_damaged.rvmat","A6_Weapons\Snipers\VSSK\data\irons_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\VSSK\data\vssk_damaged.rvmat","A6_Weapons\Snipers\VSSK\data\suppressor_damaged.rvmat","A6_Weapons\Snipers\VSSK\data\irons_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\VSSK\data\vssk_destruct.rvmat","A6_Weapons\Snipers\VSSK\data\suppressor_destruct.rvmat","A6_Weapons\Snipers\VSSK\data\irons_destruct.rvmat"}}
					};
				};
			};		
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_VSSK_5Rnd: Magazine_Base
 	{
		scope=2;
		displayName="VSSK Magazine";
		descriptionShort="5 round magazine for the VSSK, loaded with 12.7×55mm STs-130 subsonic rounds.";
		model="A6_Weapons\Snipers\VSSK\VSSK_5Rnd_Mag.p3d";
		weight=250;
		itemSize[]={2,1};
		count=5;
		ammo="Bullet_A6_127x55";
		ammoItems[]= {"Ammo_A6_127x55"};
		tracersEvery=0;
		mass=10;
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
						{1.0,{"A6_Weapons\Snipers\VSSK\data\mag.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\VSSK\data\mag.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\VSSK\data\mag_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\VSSK\data\mag_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\VSSK\data\mag_destruct.rvmat"}}
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
    class ProxyVSSK_5Rnd_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\Snipers\VSSK\VSSK_5Rnd_Mag.p3d";
    };
};