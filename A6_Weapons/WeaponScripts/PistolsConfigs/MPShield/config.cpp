class CfgPatches
{
	class A6_MPShield
	{
		units[]={};
		weapons[]={"A6_MPShield"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_MPShield_13Rnd"};
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
	class A6_MPShield_Base: Pistol_Base
	{
		scope=0;
		weight=538;
		absorbency=0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[]={};
		WeaponLength=0.63;
		barrelArmor = 1.5;
		chamberSize=1;
		chamberedRound="";
		magazines[]={"A6_Mag_MPShield_13Rnd"};
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		aimSpeedModifier[]={0.13,0.13,0.13};
		reloadAction="ReloadGlock";
		modes[]={"Single"};
		initSpeedMultiplier = 0.85;
        weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"WaltherP1_Shot_SoundSet","WaltherP1_Tail_SoundSet","WaltherP1_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"WaltherP1_silencerPro_SoundSet","WaltherP1_silencerTail_SoundSet","WaltherP1_silencerInteriorTail_SoundSet"},{"WaltherP1_silencerHomeMade_SoundSet","WaltherP1_silencerHomeMadeTail_SoundSet","WaltherP1_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.13;
			recoil = "recoil_p1";
			recoilProne = "recoil_p1_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_cz75_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class A6_MPShield: A6_MPShield_Base
	{
		scope=2;
		displayName="M&P Shield";
		descriptionShort="The M&P Shield is an easy to conceal pistol that offers professional grade features with simple operation and reliable performance day or night. Chambered in 9x19mm.";
		model="A6_Weapons\Pistols\MPShield\MPShield.p3d";
		attachments[]={"pistolMuzzle"};
		itemSize[]={2,2};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\MPShield\data\camo_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\MPShield\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\MPShield\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\MPShield\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\MPShield\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\MPShield\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\MPShield\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_MPShield_13Rnd: Magazine_Base
	{
		scope=2;
		displayName="M&P Shield Magazine";
		descriptionShort="13 round Magazine for the M&P Shield, loaded with 9x19mm rounds.";
		model="A6_Weapons\Pistols\MPShield\MPShield_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=110;
		itemSize[]={1,2};
		count=13;
		ammo="Bullet_9x19";
        ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};
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
						{1.0,{"A6_Weapons\Pistols\MPShield\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\MPShield\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\MPShield\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\MPShield\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\MPShield\data\camo_destruct.rvmat"}}
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
	class ProxyMPShield_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\MPShield\MPShield_mag.p3d";
	};
};