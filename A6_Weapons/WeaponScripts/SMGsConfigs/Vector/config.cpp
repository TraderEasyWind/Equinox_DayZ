class CfgPatches
{
	class A6_Vector
	{
		units[]= {};
		weapons[] = 
		{
			"A6_Vector",
			"A6_Vector_Black",
			"A6_Vector_Tan",
			"A6_Vector_Green",
			"A6_Vector_White"
		};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {"A6_Mag_Vector_33Rnd","A6_Mag_Vector_50Rnd"};
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
	class A6_Vector_Base: Rifle_Base
	{
		scope=0;
		weight=1950;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[] = {};
		WeaponLength = 0.6;
		barrelArmor = 2.743;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[] = {"A6_Mag_Glock19_15Rnd","A6_Mag_Vector_33Rnd","A6_Mag_Vector_50Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1.4,1.1,1};
		swayModifier[]={1.4,1.1,1};
		aimSpeedModifier[]={0.23,0.23,0.23};
		reloadAction = "ReloadVSS";
		modes[] = {"SemiAuto","Burst","FullAuto"};
		simpleHiddenSelections[] = {"folding_lowered","folding_raised","hide_irons4laser"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"Vector_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ61_1st_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_1st_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
            soundSetShot1st[] = {"Vector_SoundSet","CZ61_Shot_1st_iterior_SoundSet"};
			soundSetShot[]={"Vector_SoundSet","CZ61_Shot_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"CZ61_1st_silencer_SoundSet"},{"CZ61_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			burst = 2;
			reloadTime = 0.033;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[] = {"Vector_SoundSet","CZ61_Shot_1st_iterior_SoundSet"};
			soundSetShot[]={"Vector_SoundSet","CZ61_Shot_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"CZ61_1st_silencer_SoundSet"},{"CZ61_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			reloadTime = 0.066;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
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
		class AnimationSources
		{
			class translation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
		};
	};
	class A6_Vector: A6_Vector_Base
	{
		scope=2;
		displayName="Vector";
		descriptionShort="The Vector uses an unconventional delayed blowback system combined with in-line design to reduce perceived recoil and muzzle climb. Has Semi, 2-Round Burst, and Full Auto capabilities. Chambered in 9x19mmm.";
		model="A6_Weapons\SMGs\Vector\Vector.p3d";
		attachments[] = {"weaponWrap","weaponVectorButtstock","weaponTubeStockAdapterVector","weaponButtstockM4","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","pistolMuzzle"};
		itemSize[]={5,3};
		hiddenSelections[] = {"camo_vector","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\Vector\data\camo_vector_co.paa","A6_Weapons\Rifles\ACR\Data\ACRIronsights_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\Vector\data\camo_vector_damage.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights_damaged.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\Vector\data\camo_vector_damage.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights_damaged.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\Vector\data\camo_vector_destruct.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Vector_Black: A6_Vector
	{
		scope=2;
		hiddenSelections[] = {"camo_vector","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\Vector\data\camo_vector_black_co.paa","A6_Weapons\Rifles\ACR\Data\ACRIronsights_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"};
	};
	class A6_Vector_Tan: A6_Vector
	{
		scope=2;
		hiddenSelections[] = {"camo_vector","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\Vector\data\camo_vector_tan_co.paa","A6_Weapons\Rifles\ACR\Data\ACRIronsights_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"};
	};	
	class A6_Vector_Green: A6_Vector
	{
		scope=2;
		hiddenSelections[] = {"camo_vector","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\Vector\data\camo_vector_green_co.paa","A6_Weapons\Rifles\ACR\Data\ACRIronsights_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"};
	};	
	class A6_Vector_White: A6_Vector
	{
		scope=2;
		hiddenSelections[] = {"camo_vector","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\Vector\data\camo_vector_white_co.paa","A6_Weapons\Rifles\ACR\Data\ACRIronsights_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat","A6_Weapons\Rifles\ACR\Data\ACRIronsights.rvmat"};
	};		
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_Vector_33Rnd: Magazine_Base
 	{
		scope=2;
		displayName="Vector / Glock Magazine";
		descriptionShort="33 round magazine for the Vector or Glock, loaded with 9x19mmm rounds.";
		model="A6_Weapons\SMGs\Vector\Vector_Mag_33Rnd.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=33;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		aimSpeedModifier[]={1.15,1.15,1.15};
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
						{1.0,{"A6_Weapons\SMGs\Vector\data\camo_magazine_33rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\Vector\data\camo_magazine_33rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\Vector\data\camo_magazine_33rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\Vector\data\camo_magazine_33rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\Vector\data\camo_magazine_33rnd_destruct.rvmat"}}
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
	class A6_Mag_Vector_50Rnd: Magazine_Base
 	{
		scope=2;
		displayName="Vector / Glock Drum Mag";
		descriptionShort="50 round drum magazine for the Vector or Glock, loaded with 9x19mmm rounds.";
		model="A6_Weapons\SMGs\Vector\Vector_Mag_50Rnd.p3d";
		weight=250;
		itemSize[]={2,3};
		count=50;
		aimSpeedModifier[]={1.35,1.35,1.35};
		recoilModifier[]={0.8,0.8,0.8};
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\Vector\data\camo_magazine_50rnd.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\Vector\data\camo_magazine_50rnd.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\Vector\data\camo_magazine_50rnd_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\Vector\data\camo_magazine_50rnd_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\Vector\data\camo_magazine_50rnd_destruct.rvmat"}}
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
    class ProxyVector_Mag_33Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\SMGs\Vector\Vector_Mag_33Rnd.p3d";
    };
    class ProxyVector_Mag_50Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\SMGs\Vector\Vector_Mag_50Rnd.p3d";
    };
};