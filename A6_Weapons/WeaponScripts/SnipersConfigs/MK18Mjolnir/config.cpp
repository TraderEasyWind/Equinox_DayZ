class CfgPatches
{
	class A6_MK18_Mjolnir
	{
		units[] = {};
		weapons[] = {"A6_MK18_Mjolnir_Tan","A6_MK18_Mjolnir_Black","A6_MK18_Mjolnir_Green","A6_MK18_Mjolnir_F6"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[] = {"A6_Mag_MK18_Mjolnir_10Rnd"};
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
	class A6_MK18_Mjolnir_Base: Rifle_Base
	{
		scope = 0;
		weight = 9500;
		absorbency = 0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.934214;
		barrelArmor = 1.6;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_A6_338"};
		magazines[] = {"A6_Mag_MK18_Mjolnir_10Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.4,2.4,1.4};
		aimSpeedModifier[] = {0.53,0.53,0.53};
		reloadAction = "ReloadFal";
		simpleHiddenSelections[] = {"hide_barrel","hide_pistolgrip"};
		modes[] = {"SemiAuto"};
		initSpeedMultiplier = 0.95;
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptGrip = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_MK18_Mjolnir_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_MK18_Mjolnir_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"A6_MK18_Mjolnir_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.4;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion=0.0005;
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
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class huntingscopetrans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
		displayName = "MK-18 Mod 1 Mjölnir";
		descriptionShort = "The Mk-18 Mod 1 Extreme Distance Capable Semi Automatic Rifle was designed to take advantage of the ballistic capabilities of the 338 Lapua Magnum, 338 Norma Magnum and 300 Norma Magnum cartridges. The system provides extreme distance capability in a light weight and mobile semi-auto platform.";
		model = "A6_Weapons\Snipers\MK18Mjolnir\MK18Mjolnir.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponmuzzle338"};
		itemSize[] = {10,3};
		hiddenSelections[] = {"camo_barrel","camo_buffertube","camo_handguard","camo_mk18_receiver","camo_pistolgrip"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_co.paa",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = 
					{
						{
							1.0,
							{
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
								"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
								"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_damage.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_damage.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_damage.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_damage.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_damage.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_damage.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_destruct.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_destruct.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_destruct.rvmat",
								"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class A6_MK18_Mjolnir_Tan: A6_MK18_Mjolnir_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_co.paa",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
		};
	};
	class A6_MK18_Mjolnir_Black: A6_MK18_Mjolnir_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_black_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_black_co.paa",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
		};
	};
	class A6_MK18_Mjolnir_Green: A6_MK18_Mjolnir_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_green_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_green_co.paa",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
		};
	};
	class A6_MK18_Mjolnir_F6: A6_MK18_Mjolnir_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard_F6_co.paa",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver_F6_co.paa",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_barrel.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_buffertube.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_handguard.rvmat",
			"A6_Weapons\Snipers\MK18Mjolnir\data\camo_mk18_receiver.rvmat",
			"A6_Weapons\Rifles\M4A1\data\Rifle\pistolgrip.rvmat"
		};
	};	
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_MK18_Mjolnir_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "MK-18 Mod 1 Mjölnir Magazine";
		descriptionShort = "10 round magazine for the MK-18 Mod 1 Mjölnir, loaded with .338 Lapua Magnum rounds.";
		model = "A6_Weapons\Snipers\MK18Mjolnir\MK18Mjolnir_mag.p3d";
		weight = 300;
		itemSize[] = {2,2};
		count = 10;
		ammo = "Bullet_A6_338";
		ammoItems[] = {"Ammo_A6_338"};
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
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\MK18Mjolnir\data\camo_magazine_destruct.rvmat"}}
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
    class ProxyMK18Mjolnir_mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "A6_Weapons\Snipers\MK18Mjolnir\MK18Mjolnir_mag.p3d";
    };
};