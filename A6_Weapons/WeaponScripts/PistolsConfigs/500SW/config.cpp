class CfgPatches
{
	class A6_500SW
	{
		units[]={"A6_500SW_Cylinder","A6_500SW_Ejector","A6_500SW_Black_Cylinder","A6_500SW_Black_Ejector"};
		weapons[]={"A6_500SW","A6_500SW_Gold","A6_500SW_Future"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","A6_Ammo"};
		magazines[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Magnum;
	class A6_500SW_Base: Magnum
	{
		scope=0;
		displayName=".500 S&W Magnum";
		descriptionShort="The Smith and Wesson 500 magnum is beautiful to behold for us gun people and it sports the great S&W grip angle that lends itself to control and accuracy on all Smith revolvers.";
		model="A6_Weapons\Pistols\500SW\SW500.p3d";
		chamberableFrom[]={"Ammo_A6_500SW"};
		attachments[] = {"RevolverCylinder","RevolverEjector"};
		weight = 1590;
		itemSize[]={4,2};
		recoilModifier[]={2.5,2.5,2.5};
		swayModifier[]={1.2,0.9,0.7};
		aimSpeedModifier[]={0.38,0.38,0.38};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"DesertEagle_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			reloadTime = 0.19;
			dispersion = 0.0045;
			magazineSlot="magazine";
		};
		class OpticsInfoMagnumBase: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoMagnumBase{};
	};
	class A6_500SW: A6_500SW_Base
	{
		scope=2;
		muzzles[] = {"this","SecondMuzzle","ThirdMuzzle","FourthMuzzle","FifthMuzzle","SixthMuzzle"};
		hiddenSelections[]= {"camo","furniture","handle"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Pistols\500SW\500SW_co.paa",
			"A6_Weapons\Pistols\500SW\500SW_co.paa",
			"A6_Weapons\Pistols\500SW\500SW_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Pistols\500SW\SW500.rvmat",
			"A6_Weapons\Pistols\500SW\SW500.rvmat",
			"A6_Weapons\Pistols\500SW\SW500Handle.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500.rvmat","A6_Weapons\Pistols\500SW\SW500.rvmat","A6_Weapons\Pistols\500SW\SW500Handle.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500.rvmat","A6_Weapons\Pistols\500SW\SW500.rvmat","A6_Weapons\Pistols\500SW\SW500Handle.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_damage.rvmat","A6_Weapons\Pistols\500SW\SW500_damage.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_damage.rvmat","A6_Weapons\Pistols\500SW\SW500_damage.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_destruct.rvmat","A6_Weapons\Pistols\500SW\SW500_destruct.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_destruct.rvmat"}}
					};
				};
			};
		};
		class SecondMuzzle: A6_500SW_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne";
			muzzleEnd = "konec hlavne";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
		};
		class ThirdMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_3";
			cartridgeVel = "nabojniceend_3";
		};
		class FourthMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_4";
			cartridgeVel = "nabojniceend_4";
		};
		class FifthMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_5";
			cartridgeVel = "nabojniceend_5";
		};
		class SixthMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_6";
			cartridgeVel = "nabojniceend_6";
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
	class A6_500SW_Gold: A6_500SW
	{
		scope=2;
		hiddenSelections[]= {"camo","furniture","handle"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Pistols\500SW\500SW_Gold_co.paa",
			"A6_Weapons\Pistols\500SW\500SW_Black_co.paa",
			"A6_Weapons\Pistols\500SW\500SW_Black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Pistols\500SW\SW500_Gold.rvmat",
			"A6_Weapons\Pistols\500SW\SW500_Black.rvmat",
			"A6_Weapons\Pistols\500SW\SW500Handle.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500_Gold.rvmat","A6_Weapons\Pistols\500SW\SW500_Black.rvmat","A6_Weapons\Pistols\500SW\SW500Handle.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500_Gold.rvmat","A6_Weapons\Pistols\500SW\SW500_Black.rvmat","A6_Weapons\Pistols\500SW\SW500Handle.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_Gold_damage.rvmat","A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_Gold_damage.rvmat","A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_Gold_destruct.rvmat","A6_Weapons\Pistols\500SW\SW500_Black_destruct.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_500SW_Future: A6_500SW
	{
		scope=2;
		hiddenSelections[]= {"camo","furniture","handle"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Weapons\Pistols\500SW\500SW_Gold_co.paa",
			"A6_Weapons\Pistols\500SW\500SW_Black_co.paa",
			"A6_Weapons\Pistols\500SW\500SW_Black_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"A6_Weapons\Pistols\500SW\SW500_Future.rvmat",
			"A6_Weapons\Pistols\500SW\SW500_Black.rvmat",
			"A6_Weapons\Pistols\500SW\SW500Handle.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500_Future.rvmat","A6_Weapons\Pistols\500SW\SW500_Black.rvmat","A6_Weapons\Pistols\500SW\SW500Handle.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500_Future.rvmat","A6_Weapons\Pistols\500SW\SW500_Black.rvmat","A6_Weapons\Pistols\500SW\SW500Handle.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_Future_damage.rvmat","A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_Future_damage.rvmat","A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_Future_destruct.rvmat","A6_Weapons\Pistols\500SW\SW500_Black_destruct.rvmat","A6_Weapons\Pistols\500SW\SW500Handle_destruct.rvmat"}}
					};
				};
			};
		};
	};	
};
class cfgVehicles
{
	class Inventory_Base;
	class Magnum_Cylinder;
	class Magnum_Ejector;
	class A6_500SW_Cylinder: Magnum_Cylinder
	{
		scope = 2;
		model="A6_Weapons\Pistols\500SW\proxy\cylinder\SW500_cylinder.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_500SW_Ejector: Magnum_Ejector
	{
		scope = 2;
		model="A6_Weapons\Pistols\500SW\proxy\ejector\SW500_ejector.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_500SW_Black_Cylinder: Magnum_Cylinder
	{
		scope = 2;
		model="A6_Weapons\Pistols\500SW\proxy\cylinder\SW500_cylinder.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Pistols\500SW\500SW_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Pistols\500SW\SW500_Black.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500_Black.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500_Black.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_Black_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_500SW_Black_Ejector: Magnum_Ejector
	{
		scope = 2;
		model="A6_Weapons\Pistols\500SW\proxy\ejector\SW500_ejector.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Pistols\500SW\500SW_Black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Pistols\500SW\SW500_Black.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Pistols\500SW\SW500_Black.rvmat"}},
						{0.7,{"A6_Weapons\Pistols\500SW\SW500_Black.rvmat"}},
						{0.5,{"A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat"}},
						{0.3,{"A6_Weapons\Pistols\500SW\SW500_Black_damage.rvmat"}},
						{0.0,{"A6_Weapons\Pistols\500SW\SW500_Black_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
