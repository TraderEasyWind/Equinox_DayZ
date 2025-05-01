class CfgPatches
{
	class A6_Delta5
	{
		units[] = {};
		weapons[] = 
		{
			"A6_Delta5",
			"A6_Delta5_Camo1",
			"A6_Delta5_Camo2",
			"A6_Delta5_Camo3",
			"A6_Delta5_Camo4",
			"A6_Delta5_Camo5",
			"A6_Delta5_Camo6",
			"A6_Delta5_Camo7",
			"A6_Delta5_Camo8",
			"A6_Delta5_Camo9",
			"A6_Delta5_Camo10"
		};
		requiredVersion = 0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_Delta5_10Rnd"};
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
	class A6_Delta5_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight=5900;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		barrelArmor = 3.125;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[] = {"A6_Mag_Delta5_10Rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[] = {0.33,0.33,0.33};
		modes[] = {"Single"};
		simpleHiddenSelections[] = {"hide_barrel"};
		initSpeedMultiplier = 1.2;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SV98\w_SV98_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M24_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil="SV98Recoil";
			dispersion = 0.0001;
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
		class AnimationSources
		{
			class huntingscopetrans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
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
	};
	class A6_Delta5: A6_Delta5_Base
	{
		scope = 2;
		displayName = "Delta 5 Pro";
		descriptionShort = "The DELTA 5 PRO is the product of innovation, world-class cold hammer forged barrels, and the custom enhancements that elevate this firearm to professional level.  The DELTA 5 PRO delivers the science of accuracy with a .5, SUB-MOA Guarantee. Chambered for the .308 Winchester round and feeding from a 10-round detachable box magazine.";
		model = "A6_Weapons\Snipers\Delta5\Delta5.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[] = {9,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\Delta5\Data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\Delta5\Data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\Delta5\Data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Delta5_Camo1: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo1_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo2: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo2_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo3: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo3_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo4: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo4_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo5: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo5_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo6: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo6_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo7: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo7_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo8: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo8_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo9: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo9_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
	class A6_Delta5_Camo10: A6_Delta5
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Delta5\Data\camo10_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Delta5_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Delta 5 Pro Magazine";
		descriptionShort = "10 round magazine for the Delta 5 Pro, loaded with .308 Winchester rounds.";
		model = "A6_Weapons\Snipers\Delta5\Delta5_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight = 120;
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		tracersEvery = 0;
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\Delta5\Data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\Delta5\Data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\Delta5\Data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\Delta5\Data\camo_destruct.rvmat"}}
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
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyDelta5_mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\Delta5\Delta5_mag.p3d";
    };
};