class CfgPatches
{
	class A6_G36
	{
		units[]={};
		weapons[]={"A6_G36C","A6_G36K","A6_G36"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_XM8_100Rnd"};
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
	class A6_G36_Base: Rifle_Base
	{
		scope=0;
		weight=2900;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		barrelArmor = 2.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		reloadAction="ReloadFal";
		modes[] = {"SemiAuto","Burst","FullAuto"};
		simpleHiddenSelections[] = {"hide_irons4laser"};
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class NoiseShoot
		{
			strength = 82;
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
	};
	class A6_G36C: A6_G36_Base
	{
		scope=2;
		displayName="HK G36C";
		descriptionShort="G36 is a 5.56x45mm assault rifle designed in the early 1990s by German company Heckler & Koch as a replacement for the heavier 7.62x51mm G3 battle rifle. It was accepted into service with the Bundeswehr in 1997, replacing the G3. Since then, it has also been a popular export, and the G36 has seen active service in military and police units in several countries, including Germany, Spain, and the United Kingdom.";
		model="A6_Weapons\Rifles\G36\G36C_New.p3d";
		attachments[] = {"weaponWrap","weaponButtstockG36","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponMuzzleM4"};
		itemSize[]={7,3};
		WeaponLength = 0.7;
		initSpeedMultiplier = 0.85;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.75,1.75,1};
		aimSpeedModifier[]={0.27,0.27,0.27};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"G36C_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst : Mode_Burst
		{
			soundSetShot[] = {"G36C_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"G36C_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		hiddenSelections[]= 
		{
			"camo_barrel_228",
			"camo_gasblock",
			"camo_handguard_228",
			"camo_handguard_pics",
			"camo_magwell",
			"camo_receiver",
			"camo_magwell",
		};
		hiddenSelectionsTextures[]= 
		{
			"A6_Weapons\Rifles\G36\data\camo_barrel_228_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_gasblock_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_handguard_228_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_handguard_pics_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_magwell_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_receiver_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_magwell_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\G36\data\camo_barrel_228.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_handguard_228.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_228.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_228.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_228.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_228.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_228_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_228_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_228_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_228_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_228_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_228_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class A6_G36K: A6_G36_Base
	{
		scope=2;
		displayName="HK G36K";
		descriptionShort="G36 is a 5.56x45mm assault rifle designed in the early 1990s by German company Heckler & Koch as a replacement for the heavier 7.62x51mm G3 battle rifle. It was accepted into service with the Bundeswehr in 1997, replacing the G3. Since then, it has also been a popular export, and the G36 has seen active service in military and police units in several countries, including Germany, Spain, and the United Kingdom.";
		model="A6_Weapons\Rifles\G36\G36K_New.p3d";
		attachments[] = {"weaponWrap","weaponButtstockG36","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleM4"};
		itemSize[]={8,3};
		WeaponLength = 0.8;
		initSpeedMultiplier = 0.95;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.85,1.85,1.05};
		aimSpeedModifier[]={0.32,0.32,0.32};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"G36K_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst : Mode_Burst
		{
			soundSetShot[] = {"G36K_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"G36K_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		hiddenSelections[]= 
		{
			"camo_barrel_318",
			"camo_gasblock",
			"camo_handguard_318",
			"camo_handguard_pics",
			"camo_magwell",
			"camo_receiver",
			"camo_magwell",
		};
		hiddenSelectionsTextures[]= 
		{
			"A6_Weapons\Rifles\G36\data\camo_barrel_318_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_gasblock_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_handguard_318_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_handguard_pics_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_magwell_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_receiver_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_magwell_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\G36\data\camo_barrel_318.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_handguard_318.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]= 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_318.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_318.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_318.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_318.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_318_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_318_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_318_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_318_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_318_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_318_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class A6_G36: A6_G36_Base
	{
		scope=2;
		displayName="HK G36";
		descriptionShort="G36 is a 5.56x45mm assault rifle designed in the early 1990s by German company Heckler & Koch as a replacement for the heavier 7.62x51mm G3 battle rifle. It was accepted into service with the Bundeswehr in 1997, replacing the G3. Since then, it has also been a popular export, and the G36 has seen active service in military and police units in several countries, including Germany, Spain, and the United Kingdom.";
		model="A6_Weapons\Rifles\G36\G36_New.p3d";
		attachments[] = {"weaponWrap","weaponButtstockG36","weaponOptics","weaponLightTop","weaponBipod","weaponMuzzleM4"};
		itemSize[]={9,3};
		WeaponLength = 0.9;
		initSpeedMultiplier = 1.15;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[]={0.4,0.4,0.4};
		hasRailFunctionality = 1;
		CanAcceptTopFlashlight = 1;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"G36_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Burst : Mode_Burst
		{
			soundSetShot[] = {"G36_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"G36_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		hiddenSelections[]= 
		{
			"camo_barrel_480",
			"camo_gasblock",
			"camo_handguard_480",
			"camo_handguard_pics",
			"camo_magwell",
			"camo_receiver",
			"camo_magwell",
		};
		hiddenSelectionsTextures[]= 
		{
			"A6_Weapons\Rifles\G36\data\camo_barrel_480_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_gasblock_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_handguard_480_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_handguard_pics_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_magwell_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_receiver_co.paa",
			"A6_Weapons\Rifles\G36\data\camo_magwell_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\G36\data\camo_barrel_480.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_handguard_480.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
			"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=450;
					healthLevels[]= 
					{
						{
							1.0,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_480.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_480.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_480.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_480.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_480_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_480_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_480_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_480_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_damage.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\G36\data\camo_barrel_480_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_gasblock_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_480_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_handguard_pics_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_receiver_destruct.rvmat",
								"A6_Weapons\Rifles\G36\data\camo_magwell_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_XM8_100Rnd: Magazine_Base
	{
		scope=2;
		displayName="XM8 Drum Magazine 5.56x45mm";
		descriptionShort="100 round 5.56x45mm Drum Magazine.";
		model="A6_Weapons\Rifles\G36\XM8_Magazine.p3d";
		weight=800;
		itemSize[]={3,2};
		recoilModifier[]={0.75,0.75,0.75};
		aimSpeedModifier[] = {1.43,1.43,1.43};
		count=100;
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]={"camo_magazine"};
		hiddenSelectionsTextures[]={"A6_Weapons\Rifles\G36\data\camo_magazine_co.paa",""};
		hiddenSelectionsMaterials[]={"A6_Weapons\Rifles\G36\data\camo_magazine.rvmat",""};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=100;
                    healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\G36\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\G36\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\G36\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\G36\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\G36\data\camo_magazine_destruct.rvmat"}}
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
	class ProxyXM8_Magazine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\G36\XM8_Magazine.p3d";
	};
};	