class CfgPatches
{
	class A6_SCAR
	{
		units[]={};
		weapons[]={"A6_SCARL","A6_SCARL_Tan","A6_SCARH","A6_SCARH_Tan"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_SCARH_20Rnd","A6_Mag_SCARH_Tan_20Rnd"};
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
	class A6_SCARL_Base: Rifle_Base
	{
		scope=0;
		weight=3288;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		simpleHiddenSelections[]={"hide_pistolgrip","hide_buttstockplate","folding_raised","folding_lowered"};
		WeaponLength=0.875;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
		magazines[]={"A6_Mag_Stanag_20Rnd","A6_Mag_Stanag_30Rnd","A6_Mag_Stanag_60Rnd","A6_Mag_556_PMAG_20Rnd","A6_Mag_556_PMAG_30Rnd","A6_Mag_556_PMAG_60Rnd","A6_Mag_HK_PMG2_30Rnd","A6_Mag_XM8_100Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1};
		aimSpeedModifier[]={0.32,0.32,0.32};
		reloadAction="ReloadFal";
		modes[]={"SemiAuto","FullAuto"};
		initSpeedMultiplier = 1.0;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"SCARL_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"SCARL_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.099;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
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
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
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
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
	};
	class A6_SCARH_Base: Rifle_Base
	{
		scope=0;
		weight=3628;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		simpleHiddenSelections[]={"hide_pistolgrip","hide_buttstockplate","folding_raised","folding_lowered"};
		WeaponLength=0.875;
		barrelArmor = 2.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_SCARH_20Rnd","A6_Mag_SCARH_Tan_20Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1.3,1.3,1.3};
		swayModifier[] = {2.1,1.9,1.2};
		aimSpeedModifier[]={0.39,0.39,0.39};
		reloadAction="ReloadFal";
		modes[]={"SemiAuto","FullAuto"};
		initSpeedMultiplier = 0.9;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\FNFaL\w_FNFaL_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SCARH_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SCARH_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.098;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.002;
			magazineSlot="magazine";
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
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
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
	};
	class A6_SCARL: A6_SCARL_Base
	{
		scope=2;
		displayName="SCAR-L";
		descriptionShort="The FN SCAR-L (Special Operations Forces Combat Assault Rifle) is a gas-operated (short-stroke gas piston) self-loading rifle with a rotating bolt. It is constructed to be extremely modular, including barrel change to switch between calibers. Chambered in 5.56x45mm NATO rounds.";
		model="A6_Weapons\Rifles\SCAR\SCARL.p3d";
		attachments[]={"weaponWrap","weaponTubeStockAdapterScar","weaponButtstockM4","weaponScarButtstock","weaponM4PistolGrip","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzleM4"};
		itemSize[]={7,3};
		hiddenSelections[] = {"camo_reciever","camo_barrel"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever_co.paa","A6_Weapons\Rifles\SCAR\Data\Barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\Reciever_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\Reciever_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever_destruct.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SCARL_Tan: A6_SCARL
	{
		scope = 2;
		hiddenSelections[] = {"camo_reciever","camo_barrel"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_co.paa","A6_Weapons\Rifles\SCAR\Data\Barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_destruct.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SCARH: A6_SCARH_Base
	{
		scope=2;
		displayName="SCAR-H";
		descriptionShort="The FN SCAR-H (Special Operations Forces Combat Assault Rifle) is a gas-operated (short-stroke gas piston) self-loading rifle with a rotating bolt. It is constructed to be extremely modular, including barrel change to switch between calibers. Chambered in .308 Winchester rounds.";
		model="A6_Weapons\Rifles\SCAR\SCARH.p3d";
		attachments[]={"weaponWrap","weaponTubeStockAdapterScar","weaponButtstockM4","weaponScarButtstock","weaponM4PistolGrip","weaponOptics","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[]={8,3};
		hiddenSelections[] = {"camo_reciever","camo_barrel"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever_co.paa","A6_Weapons\Rifles\SCAR\Data\Barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\Reciever.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\Reciever_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\Reciever_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever_destruct.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_SCARH_Tan: A6_SCARH
	{
		scope = 2;
		hiddenSelections[] = {"camo_reciever","camo_barrel"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_co.paa","A6_Weapons\Rifles\SCAR\Data\Barrel_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_damage.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\Reciever_Tan_destruct.rvmat","A6_Weapons\Rifles\SCAR\Data\Barrel_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_SCARH_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="SCAR-H Magazine";
		descriptionShort="20 round magazine for the SCAR-H, loaded with .308 Winchester rounds.";
		model="A6_Weapons\Rifles\SCAR\SCARMag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
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
					hitpoints = 100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\SCARMag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\SCARMag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\SCARMag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\SCARMag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\SCARMag_destruct.rvmat"}}
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
	class A6_Mag_SCARH_Tan_20Rnd: Magazine_Base
 	{
 		scope=2;
 		displayName="SCAR-H Magazine";
		descriptionShort="20 round magazine for the SCAR-H, loaded with .308 Winchester rounds.";
		model="A6_Weapons\Rifles\SCAR\SCARMag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=150;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		tracersEvery=0;
		mass=10;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\SCAR\Data\ScarMag_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\SCAR\Data\SCARMag.rvmat"};
		aimSpeedModifier[]={1.1,1.1,1.1};
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
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\SCARMag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\SCARMag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\SCARMag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\SCARMag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\SCARMag_destruct.rvmat"}}
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
	class ProxySCARMag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\SCAR\SCARMag.p3d";
	};
};