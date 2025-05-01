class CfgPatches
{
	class A6_Scorpion_Evo
	{
		units[]={};
		weapons[]=
		{
			"A6_Scorpion_Evo",
			"A6_Scorpion_Evo_Green",
			"A6_Scorpion_Evo_Tan",
			"A6_Scorpion_Evo_Grey",
			"A6_Scorpion_Evo_White"
		};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_Scorpion_Evo_30Rnd","A6_Mag_Scorpion_Evo_40Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class A6_Scorpion_Evo_Base: Rifle_Base
	{
		scope=0;
		weight=2100;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength=0.54108799;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_9x19","Ammo_9x19AP63"};
		magazines[]={"A6_Mag_Scorpion_Evo_30Rnd","A6_Mag_Scorpion_Evo_40Rnd"};
		magazineSwitchTime = 0.45;
		barrelArmor = 2.743;
		ejectType=1;
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {1.6,1.6,1.3};
		aimSpeedModifier[]={0.23,0.23,0.23};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_irons4laser"};
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadAction = "ReloadUMP";
		modes[]={"SemiAuto","Burst","FullAuto"};
		initSpeedMultiplier = 1.05;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\UMP45\w_UMP45_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"P90_SoundSet","CZ61_Shot_1st_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			reloadTime=0.125;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[]={"P90_SoundSet","CZ61_Shot_1st_iterior_SoundSet"};
			soundSetShot[]={"P90_SoundSet","CZ61_Shot_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"CZ61_1st_silencer_SoundSet"},{"CZ61_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.033;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]={"P90_SoundSet","CZ61_Shot_1st_iterior_SoundSet"};
			soundSetShot[]={"P90_SoundSet","CZ61_Shot_iterior_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet","CZ61_Slapback_SoundSet","CZ61_Tail_2D_SoundSet"};
			soundSetShotExt1st[] = {{"CZ61_1st_silencer_SoundSet"},{"CZ61_1st_silencerHomeMade_SoundSet"}};
			soundSetShotExt[] = {{"CZ61_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerHomeMadeInteriorTail_SoundSet"}};
			reloadTime=0.066;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					ignoreIfSuppressed = 1;
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
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
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
	};
	class A6_Scorpion_Evo: A6_Scorpion_Evo_Base
	{
		scope=2;
		displayName="Scorpion EVO 3 A1";
		descriptionShort="The Scorpion EVO 3 A1 is a 9x19mm carbine manufactured by Česká zbrojovka Uherský Brod, the select-fire submachine gun variant is designated A1. Has Single, Burst, & Full Auto.";
		model="A6_Weapons\SMGs\ScorpionEvo\ScorpionEvo.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponevobuttstock","weaponevopistolgrip","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","pistolMuzzle"};
		itemSize[]={6,3};
		hiddenSelections[] = {"camo_receiver","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_co.paa","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_damage.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_damage.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_destruct.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Scorpion_Evo_Green: A6_Scorpion_Evo
	{
		scope=2;
		hiddenSelections[] = {"camo_receiver","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_green_co.paa","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"};
	};
	class A6_Scorpion_Evo_Tan: A6_Scorpion_Evo
	{
		scope=2;
		hiddenSelections[] = {"camo_receiver","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_tan_co.paa","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"};
	};
	class A6_Scorpion_Evo_Grey: A6_Scorpion_Evo
	{
		scope=2;
		hiddenSelections[] = {"camo_receiver","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_grey_co.paa","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"};
	};
	class A6_Scorpion_Evo_White: A6_Scorpion_Evo
	{
		scope=2;
		hiddenSelections[] = {"camo_receiver","camo_ironsights"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver_white_co.paa","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_receiver.rvmat","A6_Weapons\SMGs\ScorpionEvo\data\camo_ironsights.rvmat"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_Scorpion_Evo_30Rnd: Magazine_Base
 	{
		scope=2;
		displayName="Scorpion EVO 3 A1 Magazine";
		descriptionShort="30 round magazine for the Scorpion EVO 3 A1, loaded with 9x19mm Rounds";
		model="A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoMag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=30;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
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
						{1.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_mag.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_mag.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_mag_destruct.rvmat"}}
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
	class A6_Mag_Scorpion_Evo_40Rnd: Magazine_Base
 	{
		scope=2;
		displayName="Scorpion EVO 3 A1 PMAG";
		descriptionShort="40 round magazine for the Scorpion EVO 3 A1, loaded with 9x19mm Rounds";
		model="A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoPMag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,3};
		count=40;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19","Ammo_9x19AP63"};
		tracersEvery=0;
		mass=10;
		aimSpeedModifier[]={1.07,1.07,1.07};
		recoilModifier[]={0.85,0.85,0.85};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_magazine_destruct.rvmat"}}
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
	class ProxyScorpionEvoMag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoMag.p3d";
	};
	class ProxyScorpionEvoPMag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoPMag.p3d";
	};
};	
