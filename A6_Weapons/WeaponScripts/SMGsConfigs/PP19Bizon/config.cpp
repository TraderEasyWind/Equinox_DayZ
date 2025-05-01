class CfgPatches
{
	class A6_PP19Bizon
	{
		units[]={};
		weapons[] = {"A6_PP19Bizon"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Firearms_PP19"};
		magazines[]={"A6_Mag_PP19Bizon_64Rnd","A6_Mag_Gripped_PP19Bizon_64Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class A6_PP19Bizon_Base: Rifle_Base
	{
		scope=0;
		weight=2900;
		itemSize[]={6,3};
		repairableWithKits[]={1};
		repairCosts[]={25};
		WeaponLength=0.64;
		barrelArmor=1.35;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_380"};
		magazines[]={"A6_Mag_PP19Bizon_64Rnd","A6_Mag_Gripped_PP19Bizon_64Rnd"};
		magazineSwitchTime=0.3;
		initSpeedMultiplier=1.25;
		ejectType=1;
		PPDOFProperties[]={};
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,1};
		aimSpeedModifier[]={0.26,0.26,0.26};
		modes[]={"SemiAuto","FullAuto"};
		simpleHiddenSelections[] = {"hide_pistolgrip"};
		hasRailFunctionality = 1;
		isMlock = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptSideMount = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Bizon\w_bizon_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"PP19_Shot_1st_SoundSet","PP19_Shot_1st_iterior_SoundSet","PP19_Tail_SoundSet","PP19_InteriorTail_SoundSet","PP19_Slapback_SoundSet","PP19_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"PP19_1st_silencer_SoundSet","PP19_silencerTail_SoundSet","PP19_silencerInteriorTail_SoundSet"},{"PP19_1st_silencerHomeMade_SoundSet","PP19_silencerHomeMadeTail_SoundSet","PP19_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[] = {"PP19_Shot_1st_SoundSet","PP19_Shot_1st_iterior_SoundSet"};
			soundSetShot[] = {"PP19_Shot_SoundSet","PP19_Shot_iterior_SoundSet","PP19_Tail_SoundSet","PP19_InteriorTail_SoundSet","PP19_Slapback_SoundSet","PP19_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"PP19_1st_silencer_SoundSet"},{"PP19_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"PP19_silencer_SoundSet","PP19_silencerTail_SoundSet","PP19_silencerInteriorTail_SoundSet"},{"PP19_silencerHomeMade_SoundSet","PP19_silencerHomeMadeTail_SoundSet","PP19_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.098;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=66;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={75,150};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.06,-0.02,0.03};
				orientation[]={0,15,0};
			};
			class Melee
			{
				position[]={-0.06,-0.02,-0.05};
				orientation[]={0,-15,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz61_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=12;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.7;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0.1,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
	class A6_PP19Bizon: A6_PP19Bizon_Base
	{
		scope=2;
		displayName="PP-19 Bizon";
		descriptionShort="The PP-19 Bizon is a .380 ACP submachine gun developed in 1993 by the Russian company Izhmash.";
		model="A6_Weapons\SMGs\PP19Bizon\PP19Bizon.p3d";
		attachments[] = {"weaponWrap","weaponButtstockAK","weaponButtstockM4","weaponTubeStockAdapterAK","weaponAKPistolGrip","weaponOpticsAK","weaponOpticMountAK","weaponOptics","weaponLightLeft","weaponLightRight","weaponMuzzleAK"};
		itemSize[]={6,3};
		hiddenSelections[]= {"camo_bizon"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_PP19Bizon_64Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PP-19 Bizon Magazine";
		descriptionShort="64 round PP-19 Bizon Magazine, loaded with .380 ACP rounds.";
		model="dz\weapons\attachments\magazine\magazine_PP19.p3d";
		rotationFlags=12;
		weight=400;
		weightPerQuantityUnit=6;
		itemSize[]={1,4};
		count=64;
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.9,0.9,0.9};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine.rvmat"};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_magazine_destruct.rvmat"}}
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
	class A6_Mag_Gripped_PP19Bizon_64Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PP-19 Bizon Gripped Magazine";
		descriptionShort="64 round PP-19 Bizon Magazine, loaded with .380 ACP rounds.";
		model="A6_Weapons\SMGs\PP19Bizon\PP19Bizon_Mag.p3d";
		rotationFlags=12;
		weight=400;
		weightPerQuantityUnit=6;
		itemSize[]={1,4};
		count=64;
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};
		aimSpeedModifier[]={1.1,1.1,1.1};
		recoilModifier[]={0.69,0.69,0.69};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_destruct.rvmat"}}
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
	class ProxyPP19Bizon_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\SMGs\PP19Bizon\PP19Bizon_Mag.p3d";
	};
};			