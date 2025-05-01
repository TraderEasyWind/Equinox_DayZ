class CfgPatches
{
	class A6_FiveSeven
	{
		units[]={};
		weapons[]={"A6_FiveSeven","A6_FiveSeven_Tan"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={"A6_Mag_FiveSeven_20Rnd"};
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
	class A6_FiveSeven_Base: Pistol_Base
	{
		scope=0;
		weight=610;
		absorbency=0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[]={};
		WeaponLength=0.63;
		barrelArmor = 1.5;
		chamberSize=1;
		chamberedRound="";
		magazines[]={"A6_Mag_FiveSeven_20Rnd"};
		chamberableFrom[]={"Ammo_A6_57x28"};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		aimSpeedModifier[]={0.2,0.2,0.2};
		reloadAction="ReloadGlock";
		modes[]={"Single"};
		initSpeedMultiplier = 0.85;
        weaponStateAnim = "dz\anims\anm\player\reloads\Glock\w_Glock19_states.anm";
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"FiveSeven_SoundSet","Glock19_Tail_SoundSet","Glock19_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Glock19_silencerPro_SoundSet","Glock19_silencerTail_SoundSet","Glock19_silencerInteriorTail_SoundSet"}};
			reloadTime=0.13;
			recoil="recoil_Glock";
			recoilProne="recoil_Glock_prone";
			dispersion=0.003;
			magazineSlot="magazine";
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
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					overrideParticle="weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=7;
				overheatingDecayInterval=1;
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
	};
	class A6_FiveSeven: A6_FiveSeven_Base
	{
		scope=2;
		displayName="FN Five-seveN";
		descriptionShort="The FN Five-seven, trademarked as the Five-seveN, is a semi-automatic pistol designed and manufactured by FN Herstal in Belgium. The pistol is named for its 5.7-mm (.224 in) bullet diameter, and the trademark capitalization style is intended to emphasize the manufacturer's initials—FN. Chambered in 5.7x28mm FN rounds.";
		model="A6_Weapons\Pistols\FiveSeven\FiveSeven.p3d";
		attachments[]={"pistolFlashlight","pistolMuzzle"};
		itemSize[]={3,2};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\FiveSeven\data\camo_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\FiveSeven\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\FiveSeven\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\FiveSeven\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\FiveSeven\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\FiveSeven\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\FiveSeven\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FiveSeven_Tan: A6_FiveSeven
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"A6_Weapons\Pistols\FiveSeven\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]={"A6_Weapons\Pistols\FiveSeven\data\camo.rvmat"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class A6_Mag_FiveSeven_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="FN Five-seveN Magazine";
		descriptionShort="20 round Magazine for the FN Five-seveN, loaded with 5.7x28mm FN rounds.";
		model="A6_Weapons\Pistols\FiveSeven\FiveSeven_Mag.p3d";
		inventorySlot[] = {"magazine","magazine2","magazine3","PisMagPouch1"};
		weight=110;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_A6_57x28";
        ammoItems[]={"Ammo_A6_57x28"};
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
						{1.0,{"A6_Weapons\Pistols\FiveSeven\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\FiveSeven\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\FiveSeven\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\FiveSeven\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\FiveSeven\data\camo_destruct.rvmat"}}
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
	class ProxyFiveSeven_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="A6_Weapons\Pistols\FiveSeven\FiveSeven_Mag.p3d";
	};
};