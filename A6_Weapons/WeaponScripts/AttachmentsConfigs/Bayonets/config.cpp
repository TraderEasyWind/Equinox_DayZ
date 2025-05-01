class CfgPatches
{
	class A6_Bayonets
	{
		units[] = {"A6_M4_Bayonet","A6_AK_Bayonet","A6_SKS_Bayonet"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_M4_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M9A1_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_M9A1_Bayonet1";
		model = "dz\weapons\attachments\muzzle\bayonet_m9a1.p3d";
		debug_ItemCategory = 3;
		repairableWithKits[] = {4};
		repairCosts[] = {10.0};
		animClass = "Knife";
		suicideAnim = "onehanded";
		rotationFlags = 17;
		reversed = 0;
		weight = 450;
		itemSize[] = {1,3};
		itemModelLength = 0.3;
		itemAttachOffset = -0.18;
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {10,20};
		inventorySlot[] = {"weaponBayonet","Knife"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		itemInfo[] = {"Knife"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\attachments\data\m4_bayonet.rvmat"}},
						{0.7,{"DZ\weapons\attachments\data\m4_bayonet.rvmat"}},
						{0.5,{"DZ\weapons\attachments\data\m4_bayonet_damage.rvmat"}},
						{0.3,{"DZ\weapons\attachments\data\m4_bayonet_damage.rvmat"}},
						{0.0,{"DZ\weapons\attachments\data\m4_bayonet_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSharpLight_4";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeSharpHeavy_4";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeSharpHeavy_4";
				range = 3.3;
			};
		};
		soundImpactType = "metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset = "CombatKnife_drop_SoundSet";
					id = 898;
				};
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
			};
		};
	};
	class A6_AK_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_AK_Bayonet1";
		model = "A6_Weapons\Attachments\Bayonets\AK_Bayonet\AK_Bayonet.p3d";
		debug_ItemCategory = 3;
		repairableWithKits[] = {4};
		repairCosts[] = {10.0};
		animClass = "Knife";
		suicideAnim = "onehanded";
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		itemSize[] = {1,3};
		itemModelLength = 0.346;
		itemAttachOffset = -0.16;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {10,20};
		inventorySlot[] = {"weaponBayonetAK","Knife"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		itemInfo[] = {"Knife"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Bayonets\AK_Bayonet\data\camo_bayonet.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Bayonets\AK_Bayonet\data\camo_bayonet.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Bayonets\AK_Bayonet\data\camo_bayonet_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Bayonets\AK_Bayonet\data\camo_bayonet_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Bayonets\AK_Bayonet\data\camo_bayonet_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSharpLight_4";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeSharpHeavy_4";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeSharpHeavy_4";
				range = 3.3;
			};
		};
		soundImpactType = "metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset = "CombatKnife_drop_SoundSet";
					id = 898;
				};
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
			};
		};
	};
	class A6_SKS_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_SKS_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_SKS_Bayonet1";
		model = "dz\weapons\attachments\muzzle\bayonet_sks.p3d";
		debug_ItemCategory = 3;
		repairableWithKits[] = {4};
		repairCosts[] = {10.0};
		animClass = "Knife";
		suicideAnim = "onehanded";
		rotationFlags = 17;
		reversed = 0;
		weight = 450;
		itemSize[] = {1,4};
		itemModelLength = 0.372;
		itemAttachOffset = -0.05;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {10,20};
		inventorySlot[] = {"weaponBayonetSKS"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		itemInfo[] = {"Knife"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\attachments\data\Russian_AKM_Bayonet.rvmat"}},
						{0.7,{"DZ\weapons\attachments\data\Russian_AKM_Bayonet.rvmat"}},
						{0.5,{"DZ\weapons\attachments\data\Russian_AKM_Bayonet_damage.rvmat"}},
						{0.3,{"DZ\weapons\attachments\data\Russian_AKM_Bayonet_damage.rvmat"}},
						{0.0,{"DZ\weapons\attachments\data\Russian_AKM_Bayonet_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSharpLight_4";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeSharpHeavy_4";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeSharpHeavy_4";
				range = 3.3;
			};
		};
		soundImpactType = "metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset = "CombatKnife_drop_SoundSet";
					id = 898;
				};
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
			};
		};
	};
};	
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAK_Bayonet: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonetAK";
		model = "A6_Weapons\Attachments\Bayonets\AK_Bayonet\AK_Bayonet.p3d";
	};
};	