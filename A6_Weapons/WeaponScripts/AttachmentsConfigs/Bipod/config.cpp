class CfgPatches
{
	class A6_Bipod
	{
		units[] = 
		{
			"A6_Bipod_RIS_Black",
			"A6_Bipod_RIS_Tan",
			"A6_Bipod_Rotator",
			"A6_Bipod_M249",
			"A6_Bipod_AS50",
			"A6_Bipod_VSSK",
			"A6_Bipod_M200",
			"A6_Bipod_M200_Tan",
			"A6_Bipod_SV98",
			"A6_Bipod_G36"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_Bipod_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 12;
		reversed = 0;
		inventorySlot[] = {"weaponBipod"};
		weight = 354;
		itemSize[] = {1,2};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimationSources
		{
			class bipod
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class A6_Bipod_RIS_Black: A6_Bipod_Base
	{
		scope = 2;
		displayName="Magpul Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. Attach it to your Gun & Deploy it. When near objects the bipod will mount & remove all sway & lower recoil. When in prone position it will also grant these affects.";
		model = "A6_Weapons\Attachments\Bipod\bipod.p3d";
		hiddenSelections[]= {"camo_pic_rail","zbytek"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Bipod\data\bipod_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Bipod\data\bipod.rvmat"};
		hasRailFunctionality = 1;
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_Bipod_RIS_Tan: A6_Bipod_Base
	{
		scope = 2;
		displayName="Magpul Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. Attach it to your Gun & Deploy it. When near objects the bipod will mount & remove all sway & lower recoil. When in prone position it will also grant these affects.";
		model = "A6_Weapons\Attachments\Bipod\bipod.p3d";
		hiddenSelections[]= {"camo_pic_rail","zbytek"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Bipod\data\bipod_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Bipod\data\bipod.rvmat"};
		hasRailFunctionality = 1;
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_Bipod_Rotator: A6_Bipod_Base
	{
		scope = 2;
		displayName="Harris Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it. Fits on Rotator Applications.";
		model = "A6_Weapons\Attachments\Bipod\bipod_rotator.p3d";
		ROT = 1;
		aimSpeedModifier[] = {1.04,1.04,1.04};
	};
	class A6_Bipod_M249: A6_Bipod_Base
	{
		scope = 2;
		displayName="M249 Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_m249.p3d";
		swayModifier[] = {1,1,1};
	};
	class A6_Bipod_AS50: A6_Bipod_Base
	{
		scope = 2;
		displayName="AS50 Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_as50.p3d";
		swayModifier[] = {1,1,1};
	};
	class A6_Bipod_G36: A6_Bipod_Base
	{
		scope = 2;
		displayName="HK G36 Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_g36.p3d";
		swayModifier[] = {1,1,1};
	};
	class A6_Bipod_VSSK: A6_Bipod_Base
	{
		scope = 2;
		displayName="VSSK Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_vssk.p3d";
		swayModifier[] = {1,1,1};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\VSSK\data\bipod_co.paa"};
	};
    class A6_Bipod_Snipex: A6_Bipod_Base
	{
		scope = 2;
		displayName="Snipex Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_m200.p3d";
		swayModifier[] = {1,1,1};
		hiddenSelections[]= {"camo_barrel"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\Alligator\data\bipod_co.paa"};
	};
	class A6_Bipod_M200: A6_Bipod_Base
	{
		scope = 2;
		displayName="M200 Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_m200.p3d";
		swayModifier[] = {1,1,1};
		hiddenSelections[]= {"camo_barrel"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\M200\data\camo_barrel_black_co.paa"};
	};
	class A6_Bipod_M200_Tan: A6_Bipod_Base
	{
		scope = 2;
		displayName="M200 Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_m200.p3d";
		swayModifier[] = {1,1,1};
		hiddenSelections[]= {"camo_barrel"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\M200\data\camo_barrel_tan_co.paa"};
	};
	class A6_Bipod_SV98: A6_Bipod_Base
	{
		scope = 2;
		displayName="SV-98 Bipod";
		descriptionShort="This bipod provides solid support for longer range engagements. When Bipod is deployed and the firer is prone, weapon accuracy is increased dramatically, place bipod in hand to deploy it.";
		model = "A6_Weapons\Attachments\Bipod\bipod_sv98.p3d";
		swayModifier[] = {1,1,1};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Snipers\SV98\data\camo_co.paa"};
	};
};	
class CfgSlots
{	
	class Slot_weaponBipod
	{
		name = "weaponBipod";
		displayName = "Bipod";
		ghostIcon = "set:A6_Weapons image:bipod";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybipod_atlas: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "DZ\weapons\attachments\support\bipod_atlas.p3d";
	};
	class Proxybipod: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod.p3d";
	};
	class Proxybipod_rotator: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_rotator.p3d";
	};
	class Proxybipod_m249: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_m249.p3d";
	};
	class Proxybipod_as50: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_m249.p3d";
	};
	class Proxybipod_vssk: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_vssk.p3d";
	};
	class Proxybipod_m200: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_m200.p3d";
	};
	class Proxybipod_sv98: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_sv98.p3d";
	};
	class Proxybipod_g36: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBipod";
		model = "A6_Weapons\Attachments\Bipod\bipod_g36.p3d";
	};
};	