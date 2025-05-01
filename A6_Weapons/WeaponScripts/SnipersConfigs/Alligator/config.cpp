class CfgPatches
{
	class A6_Alligator_Snipex
	{
		units[] = {};
		weapons[] = {"A6_Alligator_Snipex","A6_Alligator_Snipex_Black"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {"A6_Mag_Alligator_Snipex_5Rnd"};
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
	class A6_Alligator_Snipex_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight = 8000;
		absorbency = 0;
		repairableWithKits[] = {1};
		PPDOFProperties[] = {};
		repairCosts[] = {25.0};
		WeaponLength = 1.1;
		barrelArmor = 1.6;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_A6_145x114"};
		magazines[] = {"A6_Mag_Alligator_Snipex_5Rnd"};
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {3.1,3.1,2.1};
		aimSpeedModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"Single"};
		initSpeedMultiplier = 1.0;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Alligator_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			reloadTime = 1;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.0002;
			magazineSlot = "magazine";
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
		class NoiseShoot
		{
			strength = 350;
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
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class A6_Alligator_Snipex: A6_Alligator_Snipex_Base
	{
		scope = 2;
		displayName = "Snipex Alligator";
		descriptionShort = "Bolt action rifle with magazine feed. Designed to meet all requirements for a precision firearm. Chambered for 14.5x114mm caliber.";
		model = "A6_Weapons\Snipers\Alligator\alligator.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponBipod"};
		itemSize[] = {15,4};
		hiddenSelections[] = {"camo","camo_grit"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Alligator\data\alligator_co.paa","A6_Weapons\Snipers\Alligator\data\alligator_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Alligator\data\alligator.rvmat","A6_Weapons\Snipers\Alligator\data\alligatorgrit.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\Alligator\data\alligator.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\Alligator\data\alligator.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\Alligator\data\alligator_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\Alligator\data\alligator_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\Alligator\data\alligator_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Alligator_Snipex_Black: A6_Alligator_Snipex
	{
		scope = 2;
		hiddenSelections[] = {"camo","camo_grit"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\Alligator\data\alligator_black_co.paa","A6_Weapons\Snipers\Alligator\data\alligator_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\Alligator\data\alligator.rvmat","A6_Weapons\Snipers\Alligator\data\alligatorgrit.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Alligator_Snipex_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Alligator Snipex Magazine";
		descriptionShort = "5 round magazine for the Alligator Snipex. Holds up to 5 rounds of 14.5x114mm caliber.";
		model = "A6_Weapons\Snipers\Alligator\alligator_mag.p3d";
		weight = 500;
		itemSize[] = {3,3};
		count = 5;
		ammo = "Bullet_A6_145x114";
		ammoItems[] = {"Ammo_A6_145x114"};
		tracersEvery = 0;
		mass = 10;
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\Alligator\data\alligator.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\Alligator\data\alligator.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\Alligator\data\alligator_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\Alligator\data\alligator_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\Alligator\data\alligator_destruct.rvmat"}}
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
	class Proxyalligator_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "A6_Weapons\Snipers\Alligator\alligator_mag.p3d";
	};
};