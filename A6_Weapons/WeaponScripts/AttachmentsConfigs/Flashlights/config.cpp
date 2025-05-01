class CfgPatches
{
	class A6_Flashlights
	{
		units[]=
		{
			"A6_Foxtrot_PistolLight",
			"A6_Foxtrot_Tan_PistolLight",
			"A6_SureFire_M951V_Light",
			"A6_Klesh_Light"
		};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Supports","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {};
	};
};
class cfgVehicles
{
	class Switchable_Base;
	class A6_SureFire_M951V_Light : Switchable_Base
	{
		scope = 2;
		displayName = "SureFire M951V";
		descriptionShort = "The M951 Kit02 Millennium Universal WeaponLight is designed for Mil-Std 1913 Picatinny rail interface equipped shoulder-fired weapons. The included thumbscrew mount ensures quick attachment or removal during high stress conditions.";
		model = "DZ\weapons\attachments\light\weaponlight_universal.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		reversed=1;
		weight=80;
		itemSize[]={2,1};
		repairableWithKits[]={7};
		repairCosts[]={25};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop","helmetFlashlight"};
		hiddenSelections[]=
		{
			"reflector_far",
			"zbytek",
			"glass",
			"reflector"
		};
		hiddenSelectionsTextures[] = 
		{
			"dz\weapons\attachments\data\m4_flashlight_co.paa",
			"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\weapons\attachments\data\m4_flashlight_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"dz\weapons\attachments\data\m4_flashlight.rvmat",
			"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight.rvmat",
			"dz\gear\tools\data\flashlight_glass.rvmat",
			"dz\weapons\attachments\data\m4_flashlight.rvmat"
		};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.03,1.03,1.03};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.01;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Flashlights\VanillaTextures\universallight_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Klesh_Light : Switchable_Base
	{
		scope = 2;
		displayName = "ZenitCo Klesh-1 gen.2 Weapon Light";
		descriptionShort = "Superior quality Russian made ZenitCo Klesh-1 ultra lightweight universal tactical light. Extremely powerful for it’s size and weight.";
		model = "A6_Weapons\Attachments\Flashlights\Klesch\KleschFlashlight.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		reversed=1;
		weight=80;
		itemSize[]={2,1};
		repairableWithKits[]={7};
		repairCosts[]={25};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop","helmetFlashlight"};
		hiddenSelections[] = {"camo_pic_rail","camo_taclight_klesh_1","reflector","glass"};
		hiddenSelectionsTextures[] = 
		{
			"",
			"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1_co.paa",
			"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"",
			"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1.rvmat",
			"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1_reflect.rvmat",
			"dz\gear\tools\data\flashlight_glass.rvmat"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.01;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		soundImpactType="plastic";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Flashlights\Klesch\data\camo_taclight_klesh_1.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Foxtrot_PistolLight : Switchable_Base
	{
		scope = 2;
		displayName = "FOXTROT2R";
		descriptionShort = "FOXTROT2R Pistol Flashlight. Super bright and has auto paddles to toggle the flashlight when you point your weapon.";
		model = "A6_Weapons\Attachments\Flashlights\Foxtrot\foxtrot.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		reversed=1;
		weight=118;
		itemSize[]={1,1};
		inventorySlot[]={"pistolFlashlight"};
		repairableWithKits[]={7};
		repairCosts[]={25};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.03,1.03,1.03};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.01;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		soundImpactType="plastic";
		hiddenSelections[] = {"camo_foxtrot","reflector"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_co.paa","A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot.rvmat","A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_reflect.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_Foxtrot_Tan_PistolLight : A6_Foxtrot_PistolLight
	{
		hiddenSelections[] = {"camo_foxtrot","reflector"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_tan_co.paa","A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot.rvmat","A6_Weapons\Attachments\Flashlights\Foxtrot\data\camo_foxtrot_reflect.rvmat"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyfoxtrot: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolFlashlight";
		model = "A6_Weapons\Attachments\Flashlights\Foxtrot\foxtrot.p3d";
	};
	class ProxyKleschFlashlight: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponLightRight";
		model = "A6_Weapons\Attachments\Flashlights\Klesch\KleschFlashlight.p3d";
	};
	class ProxyPERSTLaser: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponLightTop";
		model = "A6_Weapons\Attachments\Lasers\PERST\PERSTLaser.p3d";
	};
	class ProxyANPEQ15_New: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponLightLeft";
		model = "A6_Weapons\Attachments\Lasers\ANPEQ15\ANPEQ15_New.p3d";
	};
};
class CfgSlots
{
	class Slot_weaponLightRight
	{
		name = "weaponLightRight";
		displayName = "Light or Laser";
		ghostIcon = "set:A6_Weapons image:laser";
	};
	class Slot_weaponLightLeft
	{
		name = "weaponLightLeft";
		displayName = "Light or Laser";
		ghostIcon = "set:A6_Weapons image:laser";
	};
	class Slot_weaponLightTop
	{
		name = "weaponLightTop";
		displayName = "Light or Laser";
		ghostIcon = "set:A6_Weapons image:laser";
	};
};	