class CfgPatches
{
	class A6_DesertEagle
	{
		units[]={};
		weapons[]={"A6_DesertEagle","A6_DesertEagle_Gold"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_DesertEagle_9Rnd"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class A6_DesertEagle_Base: Pistol_Base
	{
		scope=0;
		weight = 1500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength=0.634148;
		barrelArmor = 0.8;
		chamberSize=1;
		chamberedRound="";
		magazines[]={"A6_Mag_DesertEagle_9Rnd"};
		chamberableFrom[]={"Ammo_A6_50AE"};
		ejectType=1;
		recoilModifier[] = {1.35,1.35,1.35};
		swayModifier[] = {1.3,1.3,0.9};
		aimSpeedModifier[]={0.34,0.34,0.34};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[]={"SemiAuto"};
		initSpeedMultiplier = 1.0;
        weaponStateAnim = "dz\anims\anm\player\reloads\Deagle\w_Deagle_states.anm";
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"DesertEagle_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			reloadTime = 0.18;
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 7;
				overheatingDecayInterval = 1;
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
	class A6_DesertEagle: A6_DesertEagle_Base
	{
		scope=2;
		displayName="Desert Eagle";
		descriptionShort="The Desert Eagle is a semi-automatic handgun notable for chambering the largest centerfire cartridge of any magazine-fed, self-loading pistol. Chambered in .50 Action Express rounds.";
		model="A6_Weapons\Pistols\DesertEagle\DesertEagle.p3d";
		attachments[] = {"weaponOpticsMarkIV"};
		itemSize[]={4,2};
		hiddenSelections[]= {"camo","zbytek"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Pistols\DesertEagle\DesertEagle_co.paa","A6_Weapons\Pistols\DesertEagle\DesertEagle_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Pistols\DesertEagle\DesertEagle.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\DesertEagle\DesertEagle.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\DesertEagle\DesertEagle.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\DesertEagle\DesertEagle_damaged.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\DesertEagle\DesertEagle_damaged.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\DesertEagle\DesertEagle_destruct.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_DesertEagle_Gold: A6_DesertEagle
	{
		scope=2;
		hiddenSelections[]= {"camo","zbytek"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Pistols\DesertEagle\DesertEagle_co.paa","A6_Weapons\Pistols\DesertEagle\DesertEagle_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Pistols\DesertEagle\DeagleGold.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\DesertEagle\DeagleGold.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\DesertEagle\DeagleGold.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\DesertEagle\DeagleGold_damaged.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\DesertEagle\DeagleGold_damaged.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\DesertEagle\DeagleGold_destruct.rvmat","A6_Weapons\Pistols\DesertEagle\DesertEagleGrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class A6_Mag_DesertEagle_9Rnd: Magazine_Base
	{
		scope=2;
		displayName="Desert Eagle Magazine";
		descriptionShort="A 9 round detachable box magazine for the DesertEagle, loaded with .50 Action Express rounds.";
		model="A6_Weapons\Pistols\DesertEagle\DesertEagleMag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=150;
		itemSize[]={1,2};
		count=9;
		ammo="Bullet_A6_50AE";
        ammoItems[]={"Ammo_A6_50AE"};
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
						{1.0,{"A6_Weapons\Pistols\DesertEagle\DesertEagle.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\DesertEagle\DesertEagle.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\DesertEagle\DesertEagle_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\DesertEagle\DesertEagle_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\DesertEagle\DesertEagle_destruct.rvmat"}}
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
    class ProxyDesertEagleMag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="A6_Weapons\Pistols\DesertEagle\DesertEagleMag.p3d";
    };
};