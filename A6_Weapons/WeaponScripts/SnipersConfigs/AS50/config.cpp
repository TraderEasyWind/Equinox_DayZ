class CfgPatches
{
	class A6_AS50
	{
		units[]={};
		weapons[]={"A6_AS50","A6_AS50_Green","A6_AS50_White","A6_AS50_Purple","A6_AS50_Camo"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={};
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
	class A6_AS50_Base: Rifle_Base
	{
		scope=0;
		weight=14100;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25.0};
		PPDOFProperties[]={};
		simpleHiddenSelections[]={"hide_pistolgrip","hide_barrel"};
		WeaponLength=0.934214;
		barrelArmor = 2.2;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"Ammo_A6_127x99"};
		magazines[]={"A6_Mag_AX50_5Rnd"};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		aimSpeedModifier[] = {0.6,0.6,0.6};
		reloadAction="ReloadAKM";
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.0;
		canReceiveHuntingOptic = 1;
		hasRailFunctionality = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
        weaponStateAnim = "dz\anims\anm\player\reloads\AKM\w_AKM_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"A6_AS50_Shot_SoundSet","PolarExpress_Tail_SoundSet","PolarExpress_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"A6_AS50_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"},{"A6_AS50_Suppressed_Shot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.35;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion=0.0005;
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
	};
	class A6_AS50: A6_AS50_Base
	{
		scope=2;
		displayName="AS50";
		descriptionShort="The AS50 is a semi-automatic .50 BMG anti-materiel precision rifle manufactured by British firearms producer Accuracy International.";
		model="A6_Weapons\Snipers\AS50\AS50.p3d";
		attachments[]={"weaponWrap","weaponM4PistolGrip","weaponOptics","weaponLightLeft","weaponLightRight","weaponBipod","QDLSuppressor"};
		itemSize[]={12,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Snipers\AS50\data\as50.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AS50\data\as50.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AS50\data\as50_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AS50\data\as50_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AS50\data\as50_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_AS50_Green: A6_AS50
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\AS50\data\AS50_Green_co.paa"};
	};
	class A6_AS50_White: A6_AS50
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\AS50\data\AS50_White_co.paa"};
	};
	class A6_AS50_Purple: A6_AS50
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\AS50\data\AS50_Purple_co.paa"};
	};
	class A6_AS50_Camo: A6_AS50
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\AS50\data\AS50_Camo_co.paa"};
	};
};