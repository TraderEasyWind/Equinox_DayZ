class CfgPatches
{
	class A6_MP9Pro
	{
		units[]={};
		weapons[]=
		{
			"A6_MP9Pro_Black",
			"A6_MP9Pro_Silver",
			"A6_MP9Pro_Tan",
			"A6_MP9Pro_Green"
		};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_MP9Pro_17Rnd"};
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
	class A6_MP9Pro_Base: Pistol_Base
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
		magazines[]={"A6_Mag_MP9Pro_17Rnd"};
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		aimSpeedModifier[]={0.17,0.17,0.17};
		reloadAction="ReloadGlock";
		modes[]={"Single"};
		initSpeedMultiplier = 1.1;
        weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"FNX45_Shot_SoundSet","FNX45_Tail_SoundSet","FNX45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNX45_silencerPro_SoundSet","FNX45_silencerTail_SoundSet","FNX45_silencerInteriorTail_SoundSet"}};
			reloadTime=0.13;
			recoil = "recoil_p1";
			recoilProne = "recoil_p1_prone";
			dispersion=0.002;
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
	class A6_MP9Pro_Black: A6_MP9Pro_Base
	{
		scope=2;
		displayName="M&P9 Pro";
		descriptionShort="The Military and Police 9mm (M&P9) is a striker-firing handgun that features a 17 round capacity. The Pro Series is a variant with a slightly longer 5 inch barrel and slide, designed mainly for competition shooting.";
		model="A6_Weapons\Pistols\MP9Pro\MP9Pro.p3d";
		attachments[]={"pistolFlashlight","pistolMuzzle"};
		itemSize[]={3,2};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\MP9Pro\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\MP9Pro\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\MP9Pro\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\MP9Pro\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\MP9Pro\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\MP9Pro\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\MP9Pro\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP9Pro_Silver: A6_MP9Pro_Black
	{
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\MP9Pro\data\camo_silver_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\MP9Pro\data\camo.rvmat"};
	};
	class A6_MP9Pro_Tan: A6_MP9Pro_Black
	{
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\MP9Pro\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\MP9Pro\data\camo.rvmat"};
	};
	class A6_MP9Pro_Green: A6_MP9Pro_Black
	{
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\MP9Pro\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\MP9Pro\data\camo.rvmat"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_MP9Pro_17Rnd: Magazine_Base
	{
		scope=2;
		displayName="M&P9 Pro Magazine";
		descriptionShort="13 round Magazine for the M&P9 Pro, loaded with 9x19mm rounds.";
		model="A6_Weapons\Pistols\MP9Pro\MP9Pro_mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=110;
		itemSize[]={1,2};
		count=17;
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
						{1.0,{"A6_Weapons\Pistols\MP9Pro\data\camo_magazine.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\MP9Pro\data\camo_magazine.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\MP9Pro\data\camo_magazine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\MP9Pro\data\camo_magazine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\MP9Pro\data\camo_magazine_destruct.rvmat"}}
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
	class ProxyMP9Pro_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\MP9Pro\MP9Pro_mag.p3d";
	};
};