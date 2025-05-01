class CfgPatches
{
	class A6_AR10
	{
		units[]={};
		weapons[]={"A6_AR10","A6_AR10_Forest","A6_AR10_Desert"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"A6_Mag_308_Stanag_20Rnd","A6_Mag_308_PMAG_20Rnd"};
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
	class A6_AR10_Base: Rifle_Base
	{
		scope=0;
		weight=4036;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength = 0.85;
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		magazines[]={"A6_Mag_308_Stanag_20Rnd","A6_Mag_308_PMAG_20Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2.3,2.3,1.3};
		aimSpeedModifier[]={0.43,0.43,0.43};
		simpleHiddenSelections[] = {"hide_pistolgrip","hide_biggasblock","hide_gasblock","hide_tubestock"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		initSpeedMultiplier = 1.0;
		modes[] = {"SemiAuto"};
		CanAcceptCAR15Buttstock = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\M4A1\w_M4A1_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"AR10_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"G308_Suppressed_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.002;
			magazineSlot="magazine";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class lighttranslation
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
			class grip_trans
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 0;
			};
	};
	class A6_AR10: A6_AR10_Base
	{
		scope=2;
		displayName="AR-10";
		descriptionShort="The ArmaLite AR-10 is a .308 Winchester battle rifle developed by Eugene Stoner in the late 1950s and manufactured by ArmaLite, then a division of the Fairchild Aircraft Corporation. Semi-Auto.";
		model="A6_Weapons\Rifles\AR10\ar10.p3d";
		attachments[] = {"weaponWrap","weaponButtstockM4","weaponM4PistolGrip","weaponOptics","weaponHandguardM4","weaponForegrip","weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponMuzzle308"};
		itemSize[]={9,3};
		hiddenSelections[]= {"barrel","buttstock","camo_pistolgrip","lowerreceiver","upperreceiver","camo_frontironsights","camo_gasblock"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Rifles\AR10\data\barrel_co.paa",
			"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\AR10\data\lowerreceiver_co.paa",
			"A6_Weapons\Rifles\AR10\data\upperreceiver_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\AR10\data\barrel.rvmat",
			"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\AR10\data\lowerreceiver.rvmat",
			"A6_Weapons\Rifles\AR10\data\upperreceiver.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
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
								"A6_Weapons\Rifles\AR10\data\barrel.rvmat",
								"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\AR10\data\lowerreceiver.rvmat",
								"A6_Weapons\Rifles\AR10\data\upperreceiver.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.7,
							{
								"A6_Weapons\Rifles\AR10\data\barrel.rvmat",
								"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
								"A6_Weapons\Rifles\AR10\data\lowerreceiver.rvmat",
								"A6_Weapons\Rifles\AR10\data\upperreceiver.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
							}
						},
						{
							0.5,
							{
								"A6_Weapons\Rifles\AR10\data\barrel_damage.rvmat",
								"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_damaged.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\AR10\data\lowerreceiver_damage.rvmat",
								"A6_Weapons\Rifles\AR10\data\upperreceiver_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.3,
							{
								"A6_Weapons\Rifles\AR10\data\barrel_damage.rvmat",
								"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_damaged.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_damage.rvmat",
								"A6_Weapons\Rifles\AR10\data\lowerreceiver_damage.rvmat",
								"A6_Weapons\Rifles\AR10\data\upperreceiver_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_damage.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_damage.rvmat"
							}
						},
						{
							0.0,
							{
								"A6_Weapons\Rifles\AR10\data\barrel_destruct.rvmat",
								"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_destruct.rvmat",
								"A6_Weapons\Rifles\AR10\data\lowerreceiver_destruct.rvmat",
								"A6_Weapons\Rifles\AR10\data\upperreceiver_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_destruct.rvmat",
								"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class A6_AR10_Forest: A6_AR10
	{
		hiddenSelections[]= {"barrel","buttstock","camo_pistolgrip","lowerreceiver","upperreceiver","camo_frontironsights","camo_gasblock"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Rifles\AR10\data\barrel_co.paa",
			"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\AR10\data\Forest\lowerreceiver_forest_co.paa",
			"A6_Weapons\Rifles\AR10\data\Forest\upperreceiver_forest_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\AR10\data\barrel.rvmat",
			"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\AR10\data\lowerreceiver.rvmat",
			"A6_Weapons\Rifles\AR10\data\upperreceiver.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
		};
	};
	class A6_AR10_Desert: A6_AR10
	{
		hiddenSelections[]= {"barrel","buttstock","camo_pistolgrip","lowerreceiver","upperreceiver","camo_frontironsights","camo_gasblock"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Rifles\AR10\data\barrel_co.paa",
			"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip_co.paa",
			"A6_Weapons\Rifles\AR10\data\Desert\lowerreceiver_desert_co.paa",
			"A6_Weapons\Rifles\AR10\data\Desert\upperreceiver_desert_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight_co.paa",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"A6_Weapons\Rifles\AR10\data\barrel.rvmat",
			"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Rifle\pistolgrip.rvmat",
			"A6_Weapons\Rifles\AR10\data\lowerreceiver.rvmat",
			"A6_Weapons\Rifles\AR10\data\upperreceiver.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\frontsight.rvmat",
			"A6_Weapons\Rifles\M4A1\Data\Parts\gasblock.rvmat"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_308_Stanag_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName=".308 Stanag Magazine";
		descriptionShort="20 round .308 Stanag magazine for .308 AR Platforms ( AR-10 & M110 ), loaded with .308 Winchester rounds.";
		model="A6_Weapons\Rifles\AR10\ar10_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=250;
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
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AR10\data\magazine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AR10\data\magazine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AR10\data\magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AR10\data\magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AR10\data\magazine_destruct.rvmat"}}
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
	class A6_Mag_308_PMAG_20Rnd: Magazine_Base
 	{
		scope=2;
		displayName="PMAG 20 LR/SR Gen M3";
		descriptionShort="20 round magazine for .308 AR Platforms ( AR-10 & M110 ), loaded with .308 Winchester rounds.";
		model="A6_Weapons\Rifles\AR10\ar10_pmag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","MagPouch1","MagPouch2","MagPouch3"};
		weight=250;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
		aimSpeedModifier[]={1.05,1.05,1.05};
		recoilModifier[]={0.9,0.9,0.9};
		tracersEvery=0;
		mass=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Rifles\AR10\data\pmag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AR10\data\pmag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AR10\data\pmag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AR10\data\pmag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AR10\data\pmag_destruct.rvmat"}}
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
	class Proxyar10_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AR10\ar10_mag.p3d";
	};
	class Proxyar10_pmag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Rifles\AR10\ar10_pmag.p3d";
	};
};	