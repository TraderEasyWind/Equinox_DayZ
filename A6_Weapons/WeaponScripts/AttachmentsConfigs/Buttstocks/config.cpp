class CfgPatches
{
	class A6_Buttstocks
	{
		units[]=
		{
			"A6_G36_Buttstock",
			"A6_G36_Buttstock_KV",
			"A6_SVD_TubeStock_Adapter",
			"A6_AK_TubeStock_Adapter",
			"A6_ASVAL_TubeStock_Adapter",
			"A6_Vector_TubeStock_Adapter",
			"A6_SCAR_TubeStock_Adapter_Black",
			"A6_SCAR_TubeStock_Adapter_Tan",
			"A6_Zhukov_Buttstock",
			"A6_AK_Plastic_Buttstock",
			"A6_AKM_Buttstock",
			"A6_AKMS_Buttstock",
			"A6_AKS74U_Buttstock",
			"A6_RPK_Buttstock",
			"A6_PT1_Buttstock",
			"A6_MFT_Min_Buttstock",
			"A6_MFT_Min_Buttstock_Black",
			"A6_CAR15_OE_Buttstock",
			"A6_CAR15_Wire_Buttstock",
			"A6_PRS_Buttstock",
			"A6_PRS_Buttstock_Tan",
			"A6_PRS_Buttstock_Green",
			"A6_DD_Buttstock",
			"A6_DD_Buttstock_Tan",
			"A6_M4OE_Buttstock",
			"A6_M4OE_Buttstock_Green",
			"A6_M4OE_Buttstock_Tan",
			"A6_MFT_Buttstock",
			"A6_MFT_Buttstock_Tan",
			"A6_M110_Buttstock",
			"A6_B5Bravo_Buttstock_Black",
			"A6_B5Bravo_Buttstock_Tan",
			"A6_B5Bravo_Buttstock_Green",
			"A6_Carbine_Buttstock",
			"A6_Carbine_Buttstock_Green",
			"A6_Carbine_Buttstock_Tan",
			"A6_MOESLK_Buttstock",
			"A6_MOESLK_Buttstock_Green",
			"A6_MOESLK_Buttstock_Tan",
			"A6_DS150_Buttstock",
			"A6_DS150_Buttstock_Green",
			"A6_DS150_Buttstock_Tan",
			"A6_BCM_Buttstock",
			"A6_BCM_Buttstock_Green",
			"A6_BCM_Buttstock_Tan",
			"A6_Vector_Buttstock",
			"A6_Vector_Buttstock_Tan",
			"A6_Vector_Buttstock_Green",
			"A6_Vector_Buttstock_White",
			"A6_Scorpion_Evo_Buttstock",
			"A6_Scorpion_Evo_Buttstock_Green",
			"A6_Scorpion_Evo_Buttstock_Tan",
			"A6_Scorpion_Evo_Buttstock_Grey",
			"A6_Scorpion_Evo_Buttstock_White",
			"A6_Scorpion_Evo_Tactical_Buttstock",
			"A6_Scorpion_Evo_Tactical_Buttstock_Green",
			"A6_Scorpion_Evo_Tactical_Buttstock_Tan",
			"A6_Scorpion_Evo_Tactical_Buttstock_Grey",
			"A6_Scorpion_Evo_Tactical_Buttstock_White",
			"A6_UMP45_Buttstock",
			"A6_UMP45_Buttstock_Winter",
			"A6_FAL_Wood_Buttstock",
			"A6_FAL_Plastic_Buttstock",
			"A6_FAL_Folding_Buttstock",
			"A6_SA58_BRS_Buttstock",
			"A6_SA58_SPR_Buttstock",
			"A6_Spas12_Buttstock",
			"A6_Spas12_Buttstock_Winter",
			"A6_Mossberg_Buttstock_Wood",
			"A6_Mossberg_Buttstock_Plastic",
			"A6_Mossberg_Buttstock_Plastic_2",
			"A6_Mossberg_Buttstock_Pistolgrip",
			"A6_Mossberg_Buttstock_Handle_Plastic",
			"A6_MP5_Buttstock",
			"A6_MP5_Buttstock_Wood",
			"A6_MP5_Buttstock_Folding",
			"A6_MP5_Buttstock_Retractable",
			"A6_SCAR_16S17S_Buttstock_Black",
			"A6_SCAR_16S17S_Buttstock_Tan",
			"A6_SCAR_SSR_Buttstock_Black",
			"A6_SCAR_SSR_Buttstock_Tan",
			"A6_HK_E1_Buttstock_Black",
			"A6_HK_E1_Buttstock_Tan",
			"A6_HK_E1_Buttstock_Green",
			"A6_HK_Slim_Line_Buttstock_Black",
			"A6_HK_Slim_Line_Buttstock_Tan",
			"A6_HK_Slim_Line_Buttstock_Green",
			"A6_HKG28_Buttstock_Black",
			"A6_HKG28_Buttstock_Tan"
		};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Supports","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Scripts"};
		magazines[] = {};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_SVD_TubeStock_Adapter: Inventory_Base
	{
		scope = 2;
		displayName = "SVD Tube Stock Adapter";
		descriptionShort = "Tube Stock Adapter SVD Rifles. Allows for Tube Stock Style Buttstocks to be Attached.";
		model = "A6_Weapons\Snipers\SVD\SVD_Buffer.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponTubeStockAdapterSVD";
		weight = 354;
		itemSize[] = {3,2};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0}; 
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {0.75,0.75,0.75};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\SVD\data\camo_handgrip.rvmat","A6_Weapons\Snipers\SVD\data\camo_handgrip_adaptor.rvmat","A6_Weapons\Snipers\SVD\data\camo_tube.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SVD\data\camo_handgrip.rvmat","A6_Weapons\Snipers\SVD\data\camo_handgrip_adaptor.rvmat","A6_Weapons\Snipers\SVD\data\camo_tube.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SVD\data\camo_handgrip_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_handgrip_adaptor_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_tube_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SVD\data\camo_handgrip_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_handgrip_adaptor_damage.rvmat","A6_Weapons\Snipers\SVD\data\camo_tube_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SVD\data\camo_handgrip_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_handgrip_adaptor_destruct.rvmat","A6_Weapons\Snipers\SVD\data\camo_tube_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_AK_TubeStock_Adapter: Inventory_Base
	{
		scope = 2;
		displayName = "AK Tube Stock Adapter";
		descriptionShort = "Tube Stock Adapter AK Rifles. Allows for Tube Stock Style Buttstocks to be Attached.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_tubestockadapter.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponTubeStockAdapterAK";
		weight = 354;
		itemSize[] = {2,1};
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
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_tubestockadapter.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_tubestockadapter.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_tubestockadapter_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_tubestockadapter_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_tubestockadapter_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_ASVAL_TubeStock_Adapter: Inventory_Base
	{
		scope = 2;
		displayName = "AS-VAL Tube Stock Adapter";
		descriptionShort = "Tube Stock Adapter AS-VAL Rifles. Allows for Tube Stock Style Buttstocks & AK Pistol Grips to be Attached.";
		model = "A6_Weapons\Rifles\ASVAL\ASVAL_TubeStock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponTubeStockAdapterASVAL";
		weight = 354;
		itemSize[] = {3,2};
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
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\ASVAL\data\ASVAL_mods.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ASVAL\data\ASVAL_mods.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ASVAL\data\ASVAL_mods.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ASVAL\data\ASVAL_mods.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ASVAL\data\ASVAL_mods.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Vector_TubeStock_Adapter: Inventory_Base
	{
		scope = 2;
		displayName = "Vector Tube Stock Adapter";
		descriptionShort = "Tube Stock Adapter Vector Sub Machine Guns. Allows for Tube Stock Style Buttstocks to be Attached.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\TubeStockAdapterVector.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponTubeStockAdapterVector";
		weight = 354;
		itemSize[] = {2,1};
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
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_bufferadapter.rvmat","A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_buffertube.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_bufferadapter.rvmat","A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_buffertube.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_bufferadapter_damage.rvmat","A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_buffertube_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_bufferadapter_damage.rvmat","A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_buffertube_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_bufferadapter_destruct.rvmat","A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\data\camo_buffertube_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_SCAR_TubeStock_Adapter: Inventory_Base
	{
		scope = 0;
		displayName = "VLTOR SCAR Tube Stock Adapter";
		descriptionShort = "The VLTOR SCAR Receiver Extension/ Stock Adapter provides a rock solid solution to installing a standard M4/AR15 collapsible stock onto the SCAR.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\ScarTubeStockAdapter.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponTubeStockAdapterScar";
		weight = 354;
		itemSize[] = {2,1};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
		hiddenSelections[] = {"camo_tubestockadapter"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_SCAR_TubeStock_Adapter_Black: A6_SCAR_TubeStock_Adapter
	{
		scope = 2;
		hiddenSelections[] = {"camo_tubestockadapter"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter.rvmat"};
	};
	class A6_SCAR_TubeStock_Adapter_Tan: A6_SCAR_TubeStock_Adapter
	{
		scope = 2;
		hiddenSelections[] = {"camo_tubestockadapter"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\data\camo_tubestockadapter.rvmat"};
	};
	class A6_AK_Buttstock: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		weight = 354;
		itemSize[] = {2,1};
		isMeleeWeapon = 1;
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_AK_Plastic_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = "AK Plastic Buttstock";
		descriptionShort = "Plastic Buttstock for the AK Rifles";
		model = "DZ\weapons\attachments\support\buttstock_ak_plastic.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.94,0.94,0.94};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Retextures\ak_plastic_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AKM_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = "AK Wooden Buttstock";
		descriptionShort = "Wooden Buttstock for the AK Rifles.";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Stock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.96,0.96,0.96};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akm_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AKMS_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = "AKMS Buttstock";
		descriptionShort = "AKMS shoulder piece for the AK Rifles.";
		model = "A6_Weapons\Rifles\AK\Parts\AKMS_Stock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.82,0.82,0.82};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akms_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akms_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akms_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akms_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_akms_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AKS74U_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = "AKS Buttstock";
		descriptionShort = "AKS-74U metal skeleton stock for the AK Rifles.";
		model = "A6_Weapons\Rifles\AK\Parts\AKS74u_Stock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.87,0.87,0.87};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_aks74u_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_aks74u_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_aks74u_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_aks74u_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_aks74u_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_RPK_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = "RPK Buttstock";
		descriptionShort = "RPK stock for the AK Rifles";
		model = "A6_Weapons\Rifles\AK\Parts\RPK_Stock.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {1.07,1.07,1.07};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_rpk_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_rpk_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_rpk_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_rpk_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_rpk_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Zhukov_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = " AK Magpul Zhukov-S Buttstock";
		descriptionShort = "Magpul Zhukov-S Buttstock for the AK Rifles";
		model = "A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\zhukovbuttstock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.82,0.82,0.82};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\Data\buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\Data\buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\Data\buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\Data\buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\Data\buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_PT1_Buttstock: A6_AK_Buttstock
	{
		scope = 2;
		displayName = "AK Zenitco PT-1 Buttstock";
		descriptionShort = "AK Zenitco PT-1 stock stock for the AK Rifles";
		model = "A6_Weapons\Rifles\AK\Parts\Zenitco_PT1_Stock.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.91,0.91,0.91};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_pt1.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_pt1.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_pt1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_pt1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_pt1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4_Buttstock: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 354;
		itemSize[] = {2,1};
		isMeleeWeapon = 1;
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_M4OE_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "M4A1 OE Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The M4A1 OE Buttstock, the most generic starter buttstock for all M4 platforms.";
		model = "DZ\weapons\attachments\support\buttstock_m4_oe.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.97,0.97,0.97};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4OE_Buttstock_Green: A6_M4OE_Buttstock
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DZ\weapons\attachments\data\m4_stock_green_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock.rvmat"};
	};
	class A6_M4OE_Buttstock_Tan: A6_M4OE_Buttstock
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Retextures\m4_stock.rvmat"};
	};
	class A6_CAR15_OE_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "CAR-15 OE Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The CAR-15 OE Buttstock, the most generic starter buttstock for all M4 platforms.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\CAR15_Stock.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_2_destruct.rvmat"}}
					};	
				};
			};
		};
	};
	class A6_MFT_Min_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "MFT Battlelink Minimalist Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The MFT Battlelink Minimalist Buttstock is mostly about speed in the battlefield.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MFTMin\MFTMin_buttstock.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.82,0.82,0.82};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
	};
	class A6_CAR15_Wire_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "CAR-15 Wire Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The CAR-15 Wire Buttstock is mostly about speed in the battlefield.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\CAR15_Bone_Stock.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.73,0.73,0.73};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_3.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_3.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_3_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_3_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\CAR15Buttstocks\data\camo_stock_3_destruct.rvmat"}}
					};
				};
			};		
		};
	};
	class A6_MFT_Min_Buttstock_Black: A6_MFT_Min_Buttstock
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MFTMin\buttstock_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\MFTMin\buttstock.rvmat"};
	};
	class A6_Carbine_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "MOE Carbine Mil-Spec Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The MOE Carbine Mil-Spec Buttstock is a commonly used buttstock that gets the job done.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\MOECarbineStock.p3d";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.91,0.91,0.91};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Carbine_Buttstock_Green: A6_Carbine_Buttstock
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo.rvmat"};
	};
	class A6_Carbine_Buttstock_Tan: A6_Carbine_Buttstock
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\data\camo.rvmat"};
	};
	class A6_M110_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "Magpul STR Mil-Spec Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The Magpul STR Mil-Spec Buttstock offers stability across the board.";
		model = "A6_Weapons\Rifles\M110\M110_Buttstock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.98,0.98,0.98};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M110\data\M110.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M110\data\M110.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M110\data\M110_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M110\data\M110_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M110\data\M110_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HKG28_Buttstock_Black: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "HK G28 Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The HK G28 Buttstock designed and produced by Heckler and Koch.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\HKG28\New_HKG28_Buttstock.p3d";
		hiddenSelections[]= {"camo_hk_g28_buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock.rvmat"};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HKG28_Buttstock_Tan: A6_HKG28_Buttstock_Black
	{
		hiddenSelections[]= {"camo_hk_g28_buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HKG28\data\camo_hk_g28_buttstock.rvmat"};
	};
	class A6_HK_E1_Buttstock_Black: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "HK E1 Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The Telescopic stock E1 designed and produced by Heckler and Koch.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\HK_E1\New_HK_E1_Buttstock.p3d";
		hiddenSelections[]= {"camo_hk_e1"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1.rvmat"};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.97,0.97,0.97};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_E1_Buttstock_Tan: A6_HK_E1_Buttstock_Black
	{
		hiddenSelections[]= {"camo_hk_e1"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1.rvmat"};
	};
	class A6_HK_E1_Buttstock_Green: A6_HK_E1_Buttstock_Black
	{
		hiddenSelections[]= {"camo_hk_e1"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_E1\data\camo_hk_e1.rvmat"};
	};
	class A6_HK_Slim_Buttstock_Black: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "HK Slim Line Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, Telescopic stock from Slim Line series designed and produced by Heckler and Koch..";
		model = "A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\New_HK_Slim_Buttstock.p3d";
		hiddenSelections[]= {"camo_hk_slim"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim.rvmat"};
		recoilModifier[] = {0.73,0.73,0.73};
		swayModifier[] = {0.79,0.79,0.79};
		aimSpeedModifier[] = {0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Slim_Buttstock_Tan: A6_HK_Slim_Buttstock_Black
	{
		hiddenSelections[]= {"camo_hk_slim"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim.rvmat"};
	};
	class A6_HK_Slim_Buttstock_Green: A6_HK_Slim_Buttstock_Black
	{
		hiddenSelections[]= {"camo_hk_slim"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\data\camo_hk_slim.rvmat"};
	};
	class A6_MFT_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "MFT Battlelink Utility Low Profile Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The MFT Battlelink Utility Low Profile is great recoil.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MFT\MFT_Buttstock.p3d";
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.97,0.97,0.97};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MFT_Buttstock_Tan: A6_MFT_Buttstock
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\MFT\Data\buttstock.rvmat"};
	};
	class A6_B5Bravo_Buttstock_Black: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "B5 Systems Enhanced SOPMOD Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The B5 Systems Enhanced SOPMOD Buttstock is great for recoil.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\B5Bravo\B5Bravo_New.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.94,0.94,0.94};
		hiddenSelections[]= {"buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_B5Bravo_Buttstock_Tan: A6_B5Bravo_Buttstock_Black
	{
		hiddenSelections[]= {"buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat"};
	};
	class A6_B5Bravo_Buttstock_Green: A6_B5Bravo_Buttstock_Black
	{
		hiddenSelections[]= {"buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\MK18\data\camo_mk18_misc_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\MK18\data\camo_mk18_misc.rvmat"};
	};
	class A6_BCM_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "BCM GUNFIGHTER Mod 0";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The BCM Gunfighter is a fast acting buttstock.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\BCM\BCM_Buttstock.p3d";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.85,0.85,0.85};
		hiddenSelections[]= {"camo_bcm"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_BCM_Buttstock_Green: A6_BCM_Buttstock
	{
		hiddenSelections[]= {"camo_bcm"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm.rvmat"};
	};
	class A6_BCM_Buttstock_Tan: A6_BCM_Buttstock
	{
		hiddenSelections[]= {"camo_bcm"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\BCM\data\camo_bcm.rvmat"};
	};
	class A6_DS150_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "KRISS Defiance DS150 Stock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, TheDefiance DS150 is a recoil enhancing buttstock.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\DefianceDS150_Buttstock.p3d";
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.79,0.79,0.79};
		aimSpeedModifier[] = {0.9,0.9,0.9};
		hiddenSelections[]= {"camo_stock_defiance"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_DS150_Buttstock_Green: A6_DS150_Buttstock
	{
		hiddenSelections[]= {"camo_stock_defiance"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance.rvmat"};
	};
	class A6_DS150_Buttstock_Tan: A6_DS150_Buttstock
	{
		hiddenSelections[]= {"camo_stock_defiance"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\data\camo_stock_defiance.rvmat"};
	};
	class A6_MOESLK_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "MOE SL-K Carbine Stock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, The MOE SL-K Carbine is a fast acting buttstock.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MOESLK\MOESLK_Buttstock.p3d";
		recoilModifier[] = {0.72,0.72,0.72};
		swayModifier[] = {0.87,0.87,0.87};
		aimSpeedModifier[] = {0.83,0.83,0.83};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOESLK\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MCXSpear\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MCXSpear\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MCXSpear\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MOESLK_Buttstock_Green: A6_MOESLK_Buttstock
	{
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\MOESLK\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"};
	};
	class A6_MOESLK_Buttstock_Tan: A6_MOESLK_Buttstock
	{
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\MCXSpear\data\camo_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\MCXSpear\data\camo.rvmat"};
	};
	class A6_DD_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "Daniel Defense Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns";
		model = "A6_Weapons\Rifles\Beowulf\Beowulf_Buttstock.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.91,0.91,0.91};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_DD_Buttstock_Tan: A6_DD_Buttstock
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Rifles\Beowulf\data\beowulf_buttstock.rvmat"};
	};
	class A6_PRS_Buttstock: A6_M4_Buttstock
	{
		scope = 2;
		displayName = "Magpul PRS GEN3 Precision-Adjustable Buttstock";
		descriptionShort = "Buttstock for Tube Stock Style Guns, the PRS is unmatched for stability of your firearm.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\PRS\PRSButtstock.p3d";
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.07,1.07,1.07};
		hiddenSelections[]= {"buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_PRS_Buttstock_Tan: A6_PRS_Buttstock
	{
		hiddenSelections[]= {"buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat"};
	};
	class A6_PRS_Buttstock_Green: A6_PRS_Buttstock
	{
		hiddenSelections[]= {"buttstock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Buttstocks\Models\PRS\data\buttstock.rvmat"};
	};
	class A6_Vector_Buttstock: Inventory_Base
	{
		scope = 2;
		displayName = "Vector Buttstock";
		descriptionShort = "Buttstock for the Vector";
		model = "A6_Weapons\SMGs\Vector\Vector_Buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponVectorButtstock"};
		weight = 150;
		itemSize[] = {3,1};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.94,0.94,0.94};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\Vector\data\camo_vector_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\Vector\data\camo_vector_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\Vector\data\camo_vector_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Vector_Buttstock_Tan: A6_Vector_Buttstock
	{
		hiddenSelections[]= {"camo_vector"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\Vector\data\camo_vector_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat"};
	};
	class A6_Vector_Buttstock_Green: A6_Vector_Buttstock
	{
		hiddenSelections[]= {"camo_vector"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\Vector\data\camo_vector_green_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat"};
	};
	class A6_Vector_Buttstock_White: A6_Vector_Buttstock
	{
		hiddenSelections[]= {"camo_vector"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\Vector\data\camo_vector_white_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\Vector\data\camo_vector.rvmat"};
	};
	class A6_Scorpion_Evo_Buttstock: Inventory_Base
	{
		scope = 2;
		displayName = "Scorpion Evo Buttstock";
		descriptionShort = "Buttstock for the Scorpion EVO 3 A1";
		model = "A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoButtstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponevobuttstock"};
		weight = 150;
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.94,0.94,0.94};
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Scorpion_Evo_Buttstock_Green: A6_Scorpion_Evo_Buttstock
	{
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_green_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"};
	};
	class A6_Scorpion_Evo_Buttstock_Tan: A6_Scorpion_Evo_Buttstock
	{
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"};
	};
	class A6_Scorpion_Evo_Buttstock_Grey: A6_Scorpion_Evo_Buttstock
	{
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_grey_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"};
	};
	class A6_Scorpion_Evo_Buttstock_White: A6_Scorpion_Evo_Buttstock
	{
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock_white_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_buttstock.rvmat"};
	};
	class A6_Scorpion_Evo_Tactical_Buttstock: Inventory_Base
	{
		scope = 2;
		displayName = "Scorpion Evo Ergo Buttstock";
		descriptionShort = "Buttstock for the Scorpion EVO 3 A1";
		model = "A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoTacticalButtstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponevobuttstock"};
		weight = 150;
		itemSize[] = {2,1};
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {0.83,0.83,0.83};
		hiddenSelections[] = {"camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Scorpion_Evo_Tactical_Buttstock_Green: A6_Scorpion_Evo_Tactical_Buttstock
	{
		hiddenSelections[] = {"camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_green_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"};
	};
	class A6_Scorpion_Evo_Tactical_Buttstock_Tan: A6_Scorpion_Evo_Tactical_Buttstock
	{
		hiddenSelections[] = {"camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"};
	};
	class A6_Scorpion_Evo_Tactical_Buttstock_Grey: A6_Scorpion_Evo_Tactical_Buttstock
	{
		hiddenSelections[] = {"camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_grey_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"};
	};
	class A6_Scorpion_Evo_Tactical_Buttstock_White: A6_Scorpion_Evo_Tactical_Buttstock
	{
		hiddenSelections[] = {"camo_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock_white_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_stock.rvmat"};
	};
	class A6_UMP45_Buttstock: Inventory_Base
	{
		scope = 2;
		displayName = "HK UMP45 Buttstock";
		descriptionShort = "Buttstock for the HK UMP45";
		model = "A6_Weapons\SMGs\UMP45\UMP45_stock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponump45buttstock"};
		weight = 150;
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		hiddenSelections[]= {"camo_ump45_stock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock.rvmat"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_UMP45_Buttstock_Winter: A6_UMP45_Buttstock
	{
		scope = 2;
		hiddenSelections[]= {"camo_ump45_stock"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock_winter_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\UMP45\data\camo_ump45_stock.rvmat"};
	};
	class A6_G36_Buttstock_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockG36"};
		weight = 354;
		itemSize[] = {2,1};
		isMeleeWeapon = 1;
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_G36_Buttstock: A6_G36_Buttstock_Base
	{
		scope = 2;
		displayName = "HK G36 Polymer Stock";
		descriptionShort = "A polymer stock for the G36, manufactured by Heckler & Koch.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\G36_Buttstock.p3d";
		recoilModifier[] = {0.82,0.82,0.82};
		swayModifier[] = {0.74,0.74,0.74};
		aimSpeedModifier[] = {0.82,0.82,0.82};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_G36_Buttstock_KV: A6_G36_Buttstock_Base
	{
		scope = 2;
		displayName = "HK G36 KV Stock";
		descriptionShort = "A polymer adjustable 4-position stock for the G36, manufactured by Heckler & Koch.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\G36_Buttstock_2.p3d";
		recoilModifier[] = {0.67,0.67,0.67};
		swayModifier[] = {0.61,0.61,0.61};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_2.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_2.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\data\camo_buttstock_2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Buttstock: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockFal"};
		weight = 354;
		itemSize[] = {2,1};
		isMeleeWeapon = 1;
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_FAL_Wood_Buttstock: A6_FAL_Buttstock
	{
		scope = 2;
		displayName = "FAL Wood Buttstock";
		descriptionShort = "Buttstock for the SA58 and FAL Rifles";
		model = "A6_Weapons\Rifles\FAL\FAL_Wood_Buttstock.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_fal_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_fal_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_fal_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Plastic_Buttstock: A6_FAL_Buttstock
	{
		scope = 2;
		displayName = "FAL Plastic Buttstock";
		descriptionShort = "Buttstock for the SA58 and FAL Rifles";
		model = "A6_Weapons\Rifles\FAL\FAL_Plastic_Buttstock.p3d";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.91,0.91,0.91};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Folding_Buttstock: A6_FAL_Buttstock
	{
		scope = 2;
		displayName = "FAL Folding Buttstock";
		descriptionShort = "Buttstock for the SA58 and FAL Rifles";
		model = "A6_Weapons\Rifles\FAL\FAL_Folding_Buttstock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.82,0.82,0.82};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_stock_folding.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_stock_folding.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_stock_folding_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_stock_folding_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_stock_folding_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SA58_BRS_Buttstock: A6_FAL_Buttstock
	{
		scope = 2;
		displayName = "BRS PARA Buttstock";
		descriptionShort = "Buttstock for the SA58 and FAL Rifles";
		model = "A6_Weapons\Rifles\SA58\brs_buttstock.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.84,0.84,0.84};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\SA58\data\camo_brs_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SA58\data\camo_brs_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SA58\data\camo_brs_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SA58\data\camo_brs_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SA58\data\camo_brs_buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SA58_SPR_Buttstock: A6_FAL_Buttstock
	{
		scope = 2;
		displayName = "DSA SPR Buttstock";
		descriptionShort = "Buttstock for the SA58 and FAL Rifles";
		model = "A6_Weapons\Rifles\SA58\sprbuttstock.p3d";
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.08,1.08,1.08};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\SA58\data\sprbuttstock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SA58\data\sprbuttstock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SA58\data\sprbuttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SA58\data\sprbuttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SA58\data\sprbuttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Spas12_Buttstock: Inventory_Base
	{
		scope = 2;
		displayName = "SPAS-12 Buttstock";
		descriptionShort = "Buttstock for the SPAS-12";
		model = "A6_Weapons\Attachments\Buttstocks\Models\Spas12Buttstock\Spas12Buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponSpas12Buttstock"};
		weight = 150;
		itemSize[] = {3,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Spas12\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Spas12\data\camo.rvmat"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\Shotguns\Spas12\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Spas12\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Spas12\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Spas12\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Spas12\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Spas12_Buttstock_Winter: A6_Spas12_Buttstock
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Spas12\data\camo_winter_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Spas12\data\camo.rvmat"};
	};
	class A6_Mossberg_Buttstock_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"MossbergStock"};
		weight = 354;
		itemSize[] = {3,1};
		isMeleeWeapon = 1;
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Mossberg_Buttstock_Wood: A6_Mossberg_Buttstock_Base
	{
		scope = 2;
		displayName = "Mossberg Wooden Buttstock";
		descriptionShort = "Wooden Buttstock for the Mossberg 590. Compatible with the MP-153.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_stock_1.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {1.25,1.25,1.25};
		hiddenSelections[] = {"camo_stock_1"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_wood_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Buttstock_Plastic: A6_Mossberg_Buttstock_Base
	{
		scope = 2;
		displayName = "Mossberg Plastic Buttstock";
		descriptionShort = "Plastic Buttstock for the Mossberg 590. Compatible with the MP-153.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_stock_1.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.55,0.55,0.55};
		aimSpeedModifier[] = {1.16,1.16,1.16};
		hiddenSelections[] = {"camo_stock_1"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_1_plastic_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Buttstock_Plastic_2: A6_Mossberg_Buttstock_Base
	{
		scope = 2;
		displayName = "Mossberg Magpul Buttstock";
		descriptionShort = "Plastic Buttstock for the Mossberg 590. Compatible with the MP-153.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_stock_2.p3d";
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.12,1.12,1.12};
		hiddenSelections[] = {"camo_stock_2"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_stock_2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Buttstock_Pistolgrip: A6_Mossberg_Buttstock_Base
	{
		scope = 2;
		displayName = "Mossberg Pistol Grip"; 
		descriptionShort = "Pistol Grip for the Mossberg 590. Really just for flexing. Compatible with the MP-153.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_pistolgrip_1.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {0.84,0.84,0.84};
		itemSize[] = {1,1};
		hiddenSelections[] = {"camo_pistolgrip_1"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_1_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Buttstock_Handle_Plastic: A6_Mossberg_Buttstock_Base
	{
		scope = 2;
		displayName = "Mossberg Plastic Handle"; 
		descriptionShort = "Plastic Handle for the Mossberg 590. Really just for flexing.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_pistolgrip_2.p3d";
		itemSize[] = {1,1};
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[] = {0.72,0.72,0.72};	
		hiddenSelections[] = {"camo_pistolgrip_2"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_pistolgrip_2_plastic_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Buttstock_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponMP5Buttstock"};
		weight = 150;
		itemSize[] = {2,1};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{}},
						{0.7,{}},
						{0.5,{}},
						{0.3,{}},
						{0.0,{}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_MP5_Buttstock: A6_MP5_Buttstock_Base
	{
		scope = 2;
		displayName = "MP5 Buttstock";
		descriptionShort = "Plastic Buttstock for the MP5 & MP5SD.";
		model = "A6_Weapons\SMGs\MP5\MP5_Stock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		hiddenSelections[] = {"camo_mp5"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mp5.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mp5_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mp5_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Buttstock_Wood: A6_MP5_Buttstock_Base
	{
		scope = 2;
		displayName = "MP5 Wood Buttstock";
		descriptionShort = "Wood Buttstock for the MP5 & MP5SD";
		model = "A6_Weapons\SMGs\MP5\MP5_Wood_Stock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.96,0.96,0.96};
		hiddenSelections[] = {"camo_stock_wood"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_stock_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_stock_wood.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_stock_wood.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_stock_wood.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_stock_wood_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_stock_wood_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_stock_wood_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Buttstock_Folding: A6_MP5_Buttstock_Base
	{
		scope = 2;
		displayName = "MP5 Folding Buttstock";
		descriptionShort = "Folding Buttstock for the MP5 & MP5SD";
		model = "A6_Weapons\SMGs\MP5\MP5_Folding_Stock.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.89,0.89,0.89};
		hiddenSelections[] = {"camo_stock_folding"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_stock_folding_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_stock_folding.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_stock_folding.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_stock_folding.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_stock_folding_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_stock_folding_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_stock_folding_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Buttstock_Retractable: A6_MP5_Buttstock_Base
	{
		scope = 2;
		displayName = "MP5 Retractable Buttstock";
		descriptionShort = "Retracable Buttstock for the MP5 & MP5SD";
		model = "A6_Weapons\SMGs\MP5\MP5_Retractable_Stock.p3d";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.83,0.83,0.83};
		hiddenSelections[] = {"camo_retractable_stock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_retractable_stock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_retractable_stock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_retractable_stock.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_retractable_stock.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_retractable_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_retractable_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_retractable_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SCAR_Buttstock_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponScarButtstock"};
		weight = 150;
		itemSize[] = {2,1};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[]= 
					{
						{1.0,{}},
						{0.7,{}},
						{0.5,{}},
						{0.3,{}},
						{0.0,{}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_SCAR_16S17S_Buttstock_Black: A6_SCAR_Buttstock_Base
	{
		scope = 2;
		displayName = "FNH SCAR 16S/17S Stock";
		descriptionShort = "FNH SCAR 16S / 17S Polymer Stock for SCAR applications.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\Scar16S17SButtstock.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {0.92,0.92,0.92};
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SCAR_16S17S_Buttstock_Tan: A6_SCAR_16S17S_Buttstock_Black
	{
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\data\buttstock.rvmat"};
	};
	class A6_SCAR_SSR_Buttstock_Black: A6_SCAR_Buttstock_Base
	{
		scope = 2;
		displayName = "FN SCAR SSR Stock";
		descriptionShort = "FN SCAR SSR Stock for SCAR applications.";
		model = "A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\ScarSSRButtstock.p3d";
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.82,0.82,0.82};
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SCAR_SSR_Buttstock_Tan: A6_SCAR_SSR_Buttstock_Black
	{
		hiddenSelections[] = {"camo_buttstock"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\data\camo_buttstock.rvmat"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyG36_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockG36";
		model = "A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\G36_Buttstock.p3d";
	};
	class ProxyG36_Buttstock_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockG36";
		model = "A6_Weapons\Attachments\Buttstocks\Models\G36Buttstocks\G36_Buttstock_2.p3d";
	};
	class ProxyDefianceDS150_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\DefianceDS150\DefianceDS150_Buttstock.p3d";
	};
	class ProxyMOESLK_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MOESLK\MOESLK_Buttstock.p3d";
	};
	class ProxyScarTubeStockAdapter: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponTubeStockAdapterScar";
		model = "A6_Weapons\Attachments\Buttstocks\Models\ScarTubeStockAdapter\ScarTubeStockAdapter.p3d";
	};
	class ProxyNew_HKG28_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\HKG28\New_HKG28_Buttstock.p3d";
	};
	class ProxyNew_HK_E1_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\HK_E1\New_HK_E1_Buttstock.p3d";
	};
	class ProxyNew_HK_Slim_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\HK_Slim\New_HK_Slim_Buttstock.p3d";
	};
	class ProxyScar16S17SButtstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponScarButtstock";
		model = "A6_Weapons\Attachments\Buttstocks\Models\Scar16S17SButtstock\Scar16S17SButtstock.p3d";
	};
	class ProxyScarSSRButtstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponScarButtstock";
		model = "A6_Weapons\Attachments\Buttstocks\Models\ScarSSRButtstock\ScarSSRButtstock.p3d";
	};
	class ProxyMossberg_pistolgrip_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergStock";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_pistolgrip_1.p3d";
	};
	class ProxyMossberg_pistolgrip_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergStock";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_pistolgrip_2.p3d";
	};
	class ProxyMossberg_stock_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergStock";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_stock_1.p3d";
	};
	class ProxyMossberg_stock_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergStock";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_stock_2.p3d";
	};
	class ProxySpas12Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponSpas12Buttstock";
		model = "A6_Weapons\Attachments\Buttstocks\Models\Spas12Buttstock\Spas12Buttstock.p3d";
	};
	class ProxyFAL_Wood_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "A6_Weapons\Rifles\FAL\FAL_Wood_Buttstock.p3d";
	};
	class ProxyFAL_Plastic_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "A6_Weapons\Rifles\FAL\FAL_Plastic_Buttstock.p3d";
	};
	class ProxyFAL_Folding_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "A6_Weapons\Rifles\FAL\FAL_Folding_Buttstock.p3d";
	};
	class Proxybrs_buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "A6_Weapons\Rifles\SA58\brs_buttstock.p3d";
	};
	class Proxysprbuttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockFal";
		model = "A6_Weapons\Rifles\SA58\sprbuttstock.p3d";
	};
	class ProxyBeowulf_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Rifles\Beowulf\Beowulf_Buttstock.p3d";
	};
	class ProxyMFTMin_buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MFTMin\MFTMin_buttstock.p3d";
	};
	class ProxyPRSButtstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\PRS\PRSButtstock.p3d";
	};
	class ProxyMOECarbineStock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MOECarbine\MOECarbineStock.p3d";
	};
	class ProxyBCM_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\BCM\BCM_Buttstock.p3d";
	};
	class ProxyM110_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Rifles\M110\M110_Buttstock.p3d";
	};
	class ProxyB5Bravo_New: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\B5Bravo\B5Bravo_New.p3d";
	};
	class ProxyMFT_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "A6_Weapons\Attachments\Buttstocks\Models\MFT\MFT_Buttstock.p3d";
	};
	class ProxySVD_Buffer: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponTubeStockAdapterSVD";
		model = "A6_Weapons\Snipers\SVD\SVD_Buffer.p3d";
	};
	class ProxyAK_tubestockadapter: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponTubeStockAdapterAK";
		model = "A6_Weapons\Rifles\AK\Parts\AK_tubestockadapter.p3d";
	};
	class ProxyTubeStockAdapterVector: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponTubeStockAdapterVector";
		model = "A6_Weapons\Attachments\Buttstocks\Models\VectorTubeStockAdapter\TubeStockAdapterVector.p3d";
	};
	class Proxyzhukovbuttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "A6_Weapons\Attachments\Buttstocks\Models\ZhukovButtstock\zhukovbuttstock.p3d";
	};
	class ProxyAKM_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Stock.p3d";
	};
	class ProxyAKMS_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKMS_Stock.p3d";
	};
	class ProxyAKS74u_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKS74u_Stock.p3d";
	};
	class ProxyRPK_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "A6_Weapons\Rifles\AK\Parts\RPK_Stock.p3d";
	};
	class ProxyZenitco_PT1_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockAK";
		model = "A6_Weapons\Rifles\AK\Parts\Zenitco_PT1_Stock.p3d";
	};
	class ProxyVector_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponVectorButtstock";
		model = "A6_Weapons\SMGs\Vector\Vector_Buttstock.p3d";
	};
	class ProxyScorpionEvoButtstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponevobuttstock";
		model = "A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoButtstock.p3d";
	};
	class ProxyScorpionEvoTacticalButtstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponevobuttstock";
		model = "A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoTacticalButtstock.p3d";
	};
	class ProxyUMP45_stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponump45buttstock";
		model = "A6_Weapons\SMGs\UMP45\UMP45_stock.p3d";
	};
	class ProxyMP5_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMP5Buttstock";
		model = "A6_Weapons\SMGs\MP5\MP5_Stock.p3d";
	};
	class ProxyMP5_Wood_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMP5Buttstock";
		model = "A6_Weapons\SMGs\MP5\MP5_Wood_Stock.p3d";
	};
	class ProxyMP5_Folding_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMP5Buttstock";
		model = "A6_Weapons\SMGs\MP5\MP5_Folding_Stock.p3d";
	};
	class ProxyMP5_Retractable_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMP5Buttstock";
		model = "A6_Weapons\SMGs\MP5\MP5_Retractable_Stock.p3d";
	};
};
class CfgSlots
{
	class Slot_MossbergStock
	{
		name = "MossbergStock";
		displayName = "Handle Grip";
		ghostIcon = "set:A6_Weapons image:pistolgrip";
	};
	class Slot_weaponTubeStockAdapterSVD
	{
		name="weaponTubeStockAdapterSVD";
		displayName="Tube Stock Adapter";
		ghostIcon = "set:A6_Weapons image:tubestock";
	};
	class Slot_weaponTubeStockAdapterAK
	{
		name="weaponTubeStockAdapterAK";
		displayName="Tube Stock Adapter";
		ghostIcon = "set:A6_Weapons image:tubestock";
	};
	class Slot_weaponTubeStockAdapterASVAL
	{
		name="weaponTubeStockAdapterASVAL";
		displayName="Tube Stock Adapter";
		ghostIcon = "set:A6_Weapons image:tubestock";
	};
	class Slot_weaponTubeStockAdapterVector
	{
		name="weaponTubeStockAdapterVector";
		displayName="Tube Stock Adapter";
		ghostIcon = "set:A6_Weapons image:tubestock";
	};
	class Slot_weaponVectorButtstock
	{
		name = "weaponVectorButtstock";
		displayName = "Vector Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
	class Slot_weaponTubeStockAdapterScar
	{
		name = "weaponTubeStockAdapterScar";
		displayName = "Tube Stock Adapter";
		ghostIcon = "set:A6_Weapons image:tubestock";
	};
	class Slot_weaponButtstockG36
	{
		name = "weaponButtstockG36";
		displayName = "HK G36 Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
	class Slot_weaponevobuttstock
	{
		name = "weaponevobuttstock";
		displayName = "Scorpion Evo Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
	class Slot_weaponump45buttstock
	{
		name = "weaponump45buttstock";
		displayName = "HK UMP45 Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
	class Slot_weaponSpas12Buttstock
	{
		name = "weaponSpas12Buttstock";
		displayName = "SPAS-12 Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
	class Slot_weaponMP5Buttstock
	{
		name = "weaponMP5Buttstock";
		displayName = "MP5 Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
	class Slot_weaponScarButtstock
	{
		name = "weaponScarButtstock";
		displayName = "SCAR Buttstock";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};
};	