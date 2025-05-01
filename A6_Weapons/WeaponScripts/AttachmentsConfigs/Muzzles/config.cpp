class CfgPatches
{
	class A6_Muzzles
	{
		units[] = 
		{
			"A6_PP19Bizon_Muzzle",
			"A6_G36_FlashHider",
			"A6_FAL_Muzzle",
			"A6_FAL_Muzzle_2",
			"A6_M4A1_A2_FlashHider",
			"A6_M16_FlashHider",
			"A6_CAR15_FlashHider",
			"A6_M4A1_Surefire_FlashHider",
			"A6_M4A1_AEMB_Muzzle",
			"A6_M4A1_KAW_Compensator",
			"A6_M4A1_MK18_Muzzle",
			"A6_AKM_Muzzle",
			"A6_AK74_Muzzle",
			"A6_AKS74u_Muzzle",
			"A6_RPK_Muzzle",
			"A6_PP19_Muzzle",
			"A6_AK203_Muzzle",
			"A6_AWR_Muzzle",
			"A6_TBA_30CB_Muzzle",
			"A6_HKG28_Prolonged_Flash_Hider",
			"A6_SureFire762_Muzzle",
			"A6_AX_Muzzle",
			"A6_ELR_Muzzle",
			"A6_SRSQD_Muzzle",
			"A6_Tank_Muzzle",
			"A6_CheyTac_Muzzle",
			"A6_Salvo12_Muzzle"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class A6_FAL_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzleFAL";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
	};
	class A6_FAL_Muzzle: A6_FAL_Muzzle_Base
	{
		scope = 2;
		displayName = "G1 FAL Flash Hider";
		descriptionShort = "Standard Issue FAL Flash Hider can attach to all FAL & SA58 Weapons.";
		model = "A6_Weapons\Rifles\FAL\FAL_Muzzle.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.07,1.07,1.07};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\Data\camo_fal.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\Data\camo_fal.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\Data\camo_fal_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\Data\camo_fal_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\Data\camo_fal_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Muzzle_2: A6_FAL_Muzzle_Base
	{
		scope = 2;
		displayName = "FAL Belgium Flash Hider";
		descriptionShort = "Standard Issue FAL Flash Hider can attach to all FAL & SA58 Weapons.";
		model = "A6_Weapons\Rifles\FAL\FAL_Muzzle_2.p3d";
		recoilModifier[] = {0.89,0.89,0.89};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\Data\camo_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\Data\camo_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\Data\camo_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\Data\camo_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\Data\camo_muzzle_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SKS_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzleSKS";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
	};
	class A6_SKS_Muzzle: A6_SKS_Muzzle_Base
	{
		scope = 2;
		displayName = "SKS Muzzle Brake";
		descriptionShort = "Standard Issue SKS Muzzle can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\OPSKS\OPSKS_Muzzle.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\OPSKS\Data\camo_sks.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\OPSKS\Data\camo_sks.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\OPSKS\Data\camo_sks_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\OPSKS\Data\camo_sks_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\OPSKS\Data\camo_sks_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzleAK";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		CanAcceptBayonet = 1;
	};
	class A6_AKM_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "AK Muzzle Brake";
		descriptionShort = "Standard Issue AKM Muzzle can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Muzzle.p3d";
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_barrel_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ak74_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
			};
		};
	};	
	class A6_AK74_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "AK Muzzle Brake/Flash Hider";
		descriptionShort = "Standard Issue AK-74 Muzzle can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\AK74_Muzzle.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.03,1.03,1.03};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_ak74_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_ak74_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_ak74_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_ak74_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_ak74_muzzle_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_PP19Bizon_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "PP-19 Bizon Muzzle Brake/Flash Hider";
		descriptionShort = "Standard Issue PP-19 Bizon Muzzle Brake/Flash Hider can attach to all AK Style Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\PP19Bizon_Muzzle.p3d";
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\PP19Bizon\data\camo_bizon_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_AKS74u_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "AKS Muzzle Brake/Flash Hider";
		descriptionShort = "Standard Issue AKS-74U Muzzle Brake/Flash Hider can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\AKS74u_FlashHider.p3d";
		recoilModifier[] = {0.93,0.93,0.93};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_aks74u_barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_aks74u_barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_aks74u_barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_aks74u_barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_aks74u_barrel_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_RPK_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "RPK FlashHider";
		descriptionShort = "Standard Issue RPK Flash Hider can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\RPK_Muzzle.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_rpk_barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_rpk_barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_rpk_barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_rpk_barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_rpk_barrel_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_PP19_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "PP-19 Vityaz Muzzle Brake/Flash Hider";
		descriptionShort = "Standard Issue PP-19-01 Vityaz Muzzle Brake/FlashHider can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\PP19_Muzzle.p3d";
		recoilModifier[] = {0.94,0.94,0.94};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_pp19.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_pp19.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_pp19_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_pp19_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_pp19_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_AK203_Muzzle: A6_AK_Muzzle_Base
	{
		scope = 2;
		displayName = "AK-203 Muzzle Brake/Flash Hider";
		descriptionShort = "Standard Issue AK-203 Muzzle Brake/FlashHider can attach to all AK Style Weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\AK203_Muzzle.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.06,1.06,1.06};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_muzzle_203.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_muzzle_203.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_muzzle_203_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_muzzle_203_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_muzzle_203_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_M4A1_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot[] = {"weaponMuzzleM4","HoneyBadgerSuppressor"};
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		CanAcceptBayonet = 1;
	};
	class A6_M4A1_A2_FlashHider: A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "A2 Flash Hider";
		descriptionShort = "Standard Issue Flash Hider";
		model = "A6_Weapons\Attachments\Muzzles\A2_Muzzle.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\camo_A2.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\camo_A2.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\camo_A2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\camo_A2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\camo_A2_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_M16_FlashHider: A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "M16 3-Prong Flash Hider";
		descriptionShort = "Standard Issue Flash Hider";
		model = "A6_Weapons\Attachments\Muzzles\M16_Muzzle.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M16\data\camo_m16.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M16\data\camo_m16.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M16\data\camo_m16_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M16\data\camo_m16_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M16\data\camo_m16_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_CAR15_FlashHider: A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "607 Flash Hider";
		descriptionShort = "Standard Issue Flash Hider";
		model = "A6_Weapons\Attachments\Muzzles\CAR15_Muzzle.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\camo_car15_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\camo_car15_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\camo_car15_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\camo_car15_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\camo_car15_muzzle_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_G36_FlashHider: A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "HK G36 4-Prong Flash Hider";
		descriptionShort = "A four-prong flash hider for G36 manufactured by Heckler & Koch.";
		model = "A6_Weapons\Attachments\Muzzles\HK_G36_FlashHider.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\camo_g36_flashhider.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\camo_g36_flashhider.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\camo_g36_flashhider_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\camo_g36_flashhider_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\camo_g36_flashhider_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_M4A1_Surefire_FlashHider: A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "Surefire SOCOM 3 Prong Flash Hider";
		descriptionShort = "Three-prong flash hiders with SureFire's renowned performance and durability. Compatible with 5.56x45mm, 6.8 SPC, .308, & 7.62x54mmR.";
		model = "A6_Weapons\Rifles\M4A1\Parts\SureFireFlashHider.p3d";
		recoilModifier[] = {0.89,0.89,0.89};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
		inventorySlot[] = {"weaponMuzzleM4","weaponMuzzle308","HoneyBadgerSuppressor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\Surefire.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\Surefire.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\Surefire_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\Surefire_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\Surefire_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_M4A1_KAW_Compensator : A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "KAW VALLEY Precision Compensator";
		descriptionShort = "KAW VALLEY Precision Compensator. Compatible with 5.56x45mm, 6.8 SPC, .308, & 7.62x54mmR.";
		model = "A6_Weapons\Rifles\M4A1\Parts\PrecisionCompensator.p3d";
		recoilModifier[] = {0.87,0.87,0.87};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
		inventorySlot[] = {"weaponMuzzleM4","weaponMuzzle308","HoneyBadgerSuppressor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AR10\Data\compensator.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AR10\Data\compensator.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AR10\Data\compensator_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AR10\Data\compensator_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AR10\Data\compensator_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
			};
		};
	};
	class A6_M4A1_AEMB_Muzzle : A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "AEMB Muzzle Brake / Flash Hider";
		descriptionShort = "AEMB Muzzle Brake / Flash Hidery.";
		model = "A6_Weapons\Rifles\M4A1\Parts\AMEBBreak.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\MK12\Data\handguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\MK12\Data\handguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\MK12\Data\handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\MK12\Data\handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\MK12\Data\handguard_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_M4A1_MK18_Muzzle : A6_M4A1_Muzzle_Base
	{
		scope = 2;
		displayName = "MK18 Muzzle Brake / Flash Hider";
		descriptionShort = "MK18 Muzzle Brake / Flash Hidery. Compatible only with the SCAR-L and SCAR-H Weapons.";
		model = "A6_Weapons\Rifles\M4A1\Parts\MK18Muzzle.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.08,1.08,1.08};
		inventorySlot[] = {"weaponMuzzleM4","weaponMuzzle308"};
		itemSize[] = {2,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR\Data\Barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR\Data\Barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR\Data\Barrel_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_308_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzle308";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
	};
	class A6_HKG28_Prolonged_Flash_Hider: A6_308_Muzzle_Base
	{
		scope = 2;
		displayName = "HK Prolonged 7.62x51 Flash Hider";
		descriptionShort = "The Heckler & Koch Prolonged 7.62x51 flash hider. For HK .308 Platform Weapons only.";
		model = "A6_Weapons\Attachments\Muzzles\HK_G28_FlashHider.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.06,1.06,1.06};
		inventorySlot[] = {"weaponMuzzle308","weaponMuzzleFAL"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\camo_hkg28_flashhider.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\camo_hkg28_flashhider.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\camo_hkg28_flashhider_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\camo_hkg28_flashhider_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\camo_hkg28_flashhider_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_TBA_30CB_Muzzle: A6_308_Muzzle_Base
	{
		scope = 2;
		displayName = "Thunder Beast CB Muzzle Brake";
		descriptionShort = "Muzzle Brake for 6.8 SPC, .308, 7.62x54mmR, & .277 Fury Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\TBA30CB_Muzzle.p3d";
		recoilModifier[] = {0.88,0.88,0.88};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
		inventorySlot[] = {"weaponMuzzle308","weaponMuzzleFAL","weaponMuzzle277"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\camo_tba_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\camo_tba_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\camo_tba_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\camo_tba_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\camo_tba_muzzle_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_AWR_Muzzle: A6_308_Muzzle_Base
	{
		scope = 2;
		displayName = "PSR Muzzle Brake";
		descriptionShort = "Muzzle Brake for 6.8 SPC, .308, 7.62x54mmR, & .277 Fury Weapons. Hides muzzle flash when firing.";
		model = "A6_Weapons\Attachments\Muzzles\AWRMuzzle.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
		inventorySlot[] = {"weaponMuzzle308","weaponMuzzleFAL","weaponMuzzle277"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\SA58\data\camo_sa58_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SA58\data\camo_sa58_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SA58\data\camo_sa58_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SA58\data\camo_sa58_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SA58\data\camo_sa58_muzzle_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_SureFire762_Muzzle: A6_308_Muzzle_Base
	{
		scope = 2;
		displayName = "SureFire PROCOMP 762 Muzzle Brake";
		descriptionShort = "Muzzle Brake for 6.8 SPC, .308, 7.62x54mmR, & .277 Fury Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\SureFire762Muzzle.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.03,1.03,1.03};
		inventorySlot[] = {"weaponMuzzle308","weaponMuzzleFAL","weaponMuzzle277"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SCAR20S\data\camo_barrel_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_338_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzle338";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
	};
	class A6_AX_Muzzle: A6_338_Muzzle_Base
	{
		scope = 2;
		displayName = "Accuracy International Tactical Muzzle Brake";
		descriptionShort = "Muzzle Brake for High Caliber Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\AXMuzzle.p3d";
		recoilModifier[] = {0.87,0.87,0.87};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.07,1.07,1.07};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\AX\Data\camo_rifle.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\AX\Data\camo_rifle.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\AX\Data\camo_rifle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\AX\Data\camo_rifle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\AX\Data\camo_rifle_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_SRSQD_Muzzle: A6_338_Muzzle_Base
	{
		scope = 2;
		displayName = "SRS-QD Muzzle Brake";
		descriptionShort = "Muzzle Brake for High Caliber Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\SRSQDMuzzle.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.04,1.04,1.04};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\SRSA2\Data\muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SRSA2\Data\muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SRSA2\Data\muzzle_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SRSA2\Data\muzzle_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SRSA2\Data\muzzle_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_ELR_Muzzle: A6_338_Muzzle_Base
	{
		scope = 2;
		displayName = "Muzzle Brake-QD ELR";
		descriptionShort = "Muzzle Brake for High Caliber Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\ELRMuzzle.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.05,1.05,1.05};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\MBQD338.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\MBQD338.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\MBQD338_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\MBQD338_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\MBQD338_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};
	class A6_Tank_Muzzle: A6_338_Muzzle_Base
	{
		scope = 2;
		displayName = "Tank Muzzle Brake";
		descriptionShort = "Muzzle Brake for High Caliber Weapons.";
		model = "A6_Weapons\Attachments\Muzzles\TankMuzzle.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.1,1.1,1.1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\Beowulf\Data\beowulf.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\Beowulf\Data\beowulf.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\Beowulf\Data\beowulf_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\Beowulf\Data\beowulf_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\Beowulf\Data\beowulf_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_408_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzle408";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
	};
	class A6_CheyTac_Muzzle: A6_408_Muzzle_Base
	{
		scope = 2;
		displayName = "CheyTac 408 Muzzle Brake";
		descriptionShort = "Muzzle Brake for .408 Calibers.";
		model = "A6_Weapons\Attachments\Muzzles\CheyTacMuzzle.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\M200\Data\camo_barrel.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\M200\Data\camo_barrel.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\M200\Data\camo_barrel_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\M200\Data\camo_barrel_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\M200\Data\camo_barrel_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
		};
	};	
	class A6_Shotgun_Muzzle_Base: ItemSuppressor
	{
		scope = 0;
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		barrelArmor = 3000;
		inventorySlot = "weaponMuzzleShotgun";
		soundImpactType = "metal";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
	};
	class A6_Salvo12_Muzzle: A6_Shotgun_Muzzle_Base
	{
		scope = 2;
		displayName = "Salvo 12 Choke";
		descriptionShort = "Choke for Compatible Shotguns. Decreases dispresion, making a more tight spread on buckshot rounds.";
		model = "A6_Weapons\Attachments\Muzzles\Salvo12Muzzle.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={1.02,1.02,1.02};
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};	
};	
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyHK_G28_FlashHider: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzle308";
		model = "A6_Weapons\Attachments\Muzzles\HK_G28_FlashHider.p3d";
	};
	class ProxyTBA30CB_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzle308";
		model = "A6_Weapons\Attachments\Muzzles\TBA30CB_Muzzle.p3d";
	};
	class ProxyFAL_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleFAL";
		model = "A6_Weapons\Rifles\FAL\FAL_Muzzle.p3d";
	};
	class ProxyFAL_Muzzle_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleFAL";
		model = "A6_Weapons\Rifles\FAL\FAL_Muzzle_2.p3d";
	};
	class ProxyOPSKS_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleSKS";
		model = "A6_Weapons\Rifles\OPSKS\OPSKS_Muzzle.p3d";
	};
	class ProxySalvo12Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleShotgun";
		model = "A6_Weapons\Attachments\Muzzles\Salvo12Muzzle.p3d";
	};
	class ProxyAKM_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Muzzle.p3d";
	};
	class ProxyAK74_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\AK74_Muzzle.p3d";
	};
	class ProxyAKS74u_FlashHider: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKS74u_FlashHider.p3d";
	};
	class ProxyRPK_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\RPK_Muzzle.p3d";
	};
	class ProxyPP19_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\PP19_Muzzle.p3d";
	};
	class ProxyAK203_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\AK203_Muzzle.p3d";
	};
	class ProxyPP19Bizon_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Attachments\Muzzles\PP19Bizon_Muzzle.p3d";
	};
	class ProxyA2_Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "A6_Weapons\Attachments\Muzzles\A2_Muzzle.p3d";
	};
	class ProxySureFireFlashHider: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\SureFireFlashHider.p3d";
	};
	class ProxyPrecisionCompensator: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\PrecisionCompensator.p3d";
	};
	class ProxyAMEBBreak: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\AMEBBreak.p3d";
	};
	class ProxyMK18Muzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\MK18Muzzle.p3d";
	};
	class ProxyHK_G36_FlashHider: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "A6_Weapons\Attachments\Muzzles\HK_G36_FlashHider.p3d";
	};
	class ProxyCheyTacMuzzle: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzle408";
		model = "A6_Weapons\Attachments\Muzzles\CheyTacMuzzle.p3d";
	};
};		