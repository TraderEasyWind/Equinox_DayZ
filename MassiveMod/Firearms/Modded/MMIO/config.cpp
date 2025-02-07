class CfgPatches
{
	class MassiveMod_Firearms_Modded_MMIO
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"Mass_Guns"
        };
	};
};//meow
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class MassM300_Base;
	class Mass_M98B_Base;
	class Mass_PKM_Base;
	class JD_M249_Base;
	class MassiveMod_PKM: JD_M249_Base
	{
		scope=2;
		displayName="PKM";
		descriptionShort="The Russian PKM, boasting 650 RPM shooting 7.62x54 to mow down all of your foes. Modified to allow Russian optics.";
		model="MassiveMod\Firearms\Modded\MMIO\PKM\PKM.p3d";
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"KobraOptic"
		};
		WeaponLength=1.18986;
		barrelArmor=1.6;
		chamberSize=1;
		initSpeedMultiplier=0.89999998;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
		};
		magazines[]=
		{
			"Mass_Mag_PKM_100Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"beltammo",
			"BipodStanding",
			"BipodProne",
			"BipodCrouch"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadAKM";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\akm\Akm_reload",
			0.80000001,
			1,
			20
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"PKM_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.092307687;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
		attachments[]=
		{
			"weaponOpticsAK"
		};
		itemSize[]={10,3};
		spawnDamageRange[]={0,0.60000002};
		hiddenSelectionsTextures[]=
		{
			"MassGuns\Weapons\PKM\data\PKM_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassGuns\Weapons\PKM\data\PKM.rvmat"
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.0,
							{
								"MassGuns\Weapons\PKM\data\pkm.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{
								"MassGuns\Weapons\PKM\data\pkm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0,
							{
								"MassGuns\Weapons\PKM\data\pkm_damage.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MassM300: MassM300_Base
	{
		itemSize[]={10,3};
	};
	class Mass_M98B: Mass_M98B_Base
	{
		itemSize[]={10,3};
	};
};
//class CfgSlots
//{
//    class Slot_Melee
//	{
//		name = "Melee";
//		displayName = "Melee";
//		ghostIcon="set:MassiveModATlas image:MM_Melee";
//	};
//	class Slot_Shoulder
//	{
//		name = "Shoulder";
//		displayName = "#STR_CfgShoulder0";
//		ghostIcon = "set:dayz_inventory image:shoulderleft";
//	};
//};
//class CfgWeapons
//{
//    class RifleCore;
//    class Rifle_Base : RifleCore
//    {
//        inventorySlot[] -= 
//        {
//            "Melee"
//        };
//    };
//};
