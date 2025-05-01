class CfgPatches
{
	class A6_GM6Lynx
	{
		units[]={};
		weapons[]={"A6_GM6Lynx"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_GM6Lynx_5Rnd"};
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
	class A6_GM6Lynx_Base: Rifle_Base
	{
		scope=0;
		weight=11500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		WeaponLength=0.75222802;
		barrelArmor = 1.6;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_127x99"};
		magazines[]={"A6_Mag_GM6Lynx_5Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.52,0.52,0.52};
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.1;
		hasRailFunctionality = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptBipod = 1;
		simpleHiddenSelections[] = {"hide_barrel"};
		canReceiveHuntingOptic = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_GM6Lynx_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M82_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"M82_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.35;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion=0.0005;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 250;
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
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
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
	class A6_GM6Lynx: A6_GM6Lynx_Base
	{
		scope=2;
		displayName="GM6 Lynx";
		descriptionShort="The GM6 'Lynx' is a semi-automatic anti-material rifle. The rifle was designed to be compact, lightweight, accurate, low-recoil, portable and easily deployable for immediate use.";
		model="A6_Weapons\Snipers\GM6Lynx\gm6lynx.p3d";
		attachments[]={"weaponOptics","weaponWrap","weaponLightLeft","weaponBipod","QDLSuppressor"};
		itemSize[]={9,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\GM6Lynx\data\gm6lynx_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class A6_Mag_GM6Lynx_5Rnd: Magazine_Base
 	{
		scope=2;
		displayName="GM6 Lynx Magazine";
		descriptionShort="5 round magazine for the GM6 Lynx, loaded with 12.7x99mm Rounds";
		model="A6_Weapons\Snipers\GM6Lynx\gm6lynx_mag.p3d";
		weight=250;
		itemSize[]={2,2};
		count=5;
		ammo="Bullet_A6_127x99";
		ammoItems[]={"Ammo_A6_127x99"};
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
						{1.0,{"A6_Weapons\Snipers\GM6Lynx\data\mag.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\GM6Lynx\data\mag.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\GM6Lynx\data\mag_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\GM6Lynx\data\mag_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\GM6Lynx\data\mag_destruct.rvmat"}}
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
    class Proxygm6lynx_mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\Snipers\GM6Lynx\gm6lynx_mag.p3d";
    };
};