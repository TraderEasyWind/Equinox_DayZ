class CfgPatches
{
	class A6_Handguards
	{
		units[] = 
		{
			"A6_FAL_Handguard_Wood",
			"A6_FAL_Handguard_Plastic",
			"A6_FAL_Handguard_Rail",
			"A6_MP5k_Forearm",
			"A6_MP5k_Forearm_Proto",
			"A6_MP5k_Forearm_SP",
			"A6_MP5_Forearm",
			"A6_MP5_Forearm_RIS",
			"A6_MP5_Forearm_Slimline",
			"A6_MP5_Forearm_Vented",
			"A6_MP5_Forearm_Wood",
			"A6_Mossberg_Shroud",
			"A6_Mossberg_Forearm_Plastic",
			"A6_Mossberg_Forearm_Plastic_2",
			"A6_MP153_Forearm_Plastic",
			"A6_AK_Handguard_AKM",
			"A6_AK_Handguard_RPK",
			"A6_AK_Handguard_MOE",
			"A6_AK_Handguard_Tactical_Polymer_Black",
			"A6_AK_Handguard_Tactical_Polymer_Tan",
			"A6_AK_Handguard_Wood_Zentico",
			"A6_AK_Handguard_Zentico",
			"A6_AK_Handguard_Zentico_Long_Black",
			"A6_AK_Handguard_Zentico_Long_Tan",
			"A6_M4A1_Handguard_Plastic",
			"A6_M4A1_Handguard_MP",
			"A6_M4A1_Handguard_MP_Green",
			"A6_M4A1_Handguard_MP_Tan",
			"A6_M4A1_Handguard_KAC_Black",
			"A6_M4A1_Handguard_DD95_Tan",
			"A6_M4A1_Handguard_DD95_Black",
			"A6_M4A1_Handguard_DD125_Tan",
			"A6_M4A1_Handguard_DD125_Black",
			"A6_M4A1_Handguard_DDFSP_Tan",
			"A6_M4A1_Handguard_DDFSP_Black",
			"A6_M4A1_Handguard_DD95_MLOK_Tan",
			"A6_M4A1_Handguard_DD95_MLOK_Black",
			"A6_M4A1_Handguard_DD95_MLOK_Green",
			"A6_M4A1_Handguard_DD125_MLOK_Tan",
			"A6_M4A1_Handguard_DD125_MLOK_Black",
			"A6_M4A1_Handguard_DD125_MLOK_Green",
			"A6_M4A1_Handguard_DDFSP_MLOK_Tan",
			"A6_M4A1_Handguard_DDFSP_MLOK_Black",
			"A6_M4A1_Handguard_DDFSP_MLOK_Green",
			"A6_ASVAL_Handguard",
			"A6_M16_A2_Handguard",
			"A6_M16_A3_Handguard",
			"A6_M16_A4_Handguard",
			"A6_HK_Handguard_MI_9_Black",
			"A6_HK_Handguard_MI_9_Tan",
			"A6_HK_Handguard_MI_135_Black",
			"A6_HK_Handguard_MI_135_Tan",
			"A6_HK_Handguard_Quad_Rail_Black",
			"A6_HK_Handguard_Quad_Rail_Tan",
			"A6_HK_Handguard_Extended_Quad_Rail_Black",
			"A6_HK_Handguard_Extended_Quad_Rail_Tan",
			"A6_HKG28_Handguard_Quad_Rail",
			"A6_HKG28_Handguard_Extended_Quad_Rail"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_HKG28_Handguard_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponHandguardHKG28"};
		itemSize[] = {4,1};
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
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 1;
			};
		};
		soundImpactType = "metal";
	};
	class A6_HKG28_Handguard_Quad_Rail: A6_HKG28_Handguard_Base
	{
		scope = 2;
		displayName = "HK 417/G28 Patrol RIS Handguard";
		descriptionShort = "HK 417/G28 Patrol RIS Handguard. Fits on HK 417 and G28 weapons. Allows for RIS Style Attachments";
		model = "A6_Weapons\Attachments\Handguards\HKG28\HKG28_Handguard_Patrol.p3d";
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		hiddenSelections[] = {"camo_hk_g28_patrol_handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_patrol_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HKG28_Handguard_Extended_Quad_Rail: A6_HKG28_Handguard_Base
	{
		scope = 2;
		displayName = "HK 417/G28 Extended RIS Handguard";
		descriptionShort = "HHK 417/G28 Extended RIS Handguard. Fits on HK 417 and G28 weapons.";
		model = "A6_Weapons\Attachments\Handguards\HKG28\HKG28_Handguard_LG.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hiddenSelections[] = {"camo_hk_g28_handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		isMlockBipod = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HKG28\data\camo_hk_g28_handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponHandguardHK"};
		itemSize[] = {4,1};
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
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 1;
			};
		};
		soundImpactType = "metal";
	};
	class A6_HK_Handguard_MI_9_Black: A6_HK_Handguard_Base
	{
		scope = 2;
		displayName = "HK 416A5 Midwest Industries 9 inch Handguard";
		descriptionShort = "HK M-LOK Handguard. Fits on HK 416 weapons.";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_MLOCK_SH.p3d";
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		hiddenSelections[] = {"camo_hk_handguard_mlock_sh"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_black_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_MI_9_Tan: A6_HK_Handguard_MI_9_Black
	{
		hiddenSelections[] = {"camo_hk_handguard_mlock_sh"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_sh_tan_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_MI_135_Black: A6_HK_Handguard_Base
	{
		scope = 2;
		displayName = "HK 416A5 Midwest Industries 13.5 inch Handguard";
		descriptionShort = "HK M-LOK Handguard. Fits on HK 416 weapons.";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_MLOCK_LG.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hiddenSelections[] = {"camo_hk_handguard_mlock_lg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_black_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_MI_135_Tan: A6_HK_Handguard_MI_135_Black
	{
		hiddenSelections[] = {"camo_hk_handguard_mlock_lg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_handguard_mlock_lg_tan_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_Quad_Rail_Black: A6_HK_Handguard_Base
	{
		scope = 2;
		displayName = "HK 416A5 Quad Rail Handguard";
		descriptionShort = "HK RIS Handguard. Fits on HK 416 weapons. Allows for RIS Style Attachments";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_RIS_SH.p3d";
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		hiddenSelections[] = {"camo_hk_handguard_ris_sh"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		isMlockBipod = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_black_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_Quad_Rail_Tan: A6_HK_Handguard_Quad_Rail_Black
	{
		hiddenSelections[] = {"camo_hk_handguard_ris_sh"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_sh_tan.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_sh_tan.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_sh_tan.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_sh_tan_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_sh_tan_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_sh_tan_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_Extended_Quad_Rail_Black: A6_HK_Handguard_Base
	{
		scope = 2;
		displayName = "HK 416A5 Extended Quad Rail Handguard";
		descriptionShort = "HK RIS Handguard. Fits on HK 416 weapons. Allows for RIS Style Attachments";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_RIS_LG.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hiddenSelections[] = {"camo_hk_handguard_ris_lg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		isMlockBipod = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_black_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_Handguard_Extended_Quad_Rail_Tan: A6_HK_Handguard_Extended_Quad_Rail_Black
	{
		hiddenSelections[] = {"camo_hk_handguard_ris_lg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\HK\data\camo_hk_handguard_ris_lg_tan.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_lg_tan.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_lg_tan.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_lg_tan_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_lg_tan_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\HK\data\camo_HK_handguard_ris_lg_tan_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M16_Handguard_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponHandguardM16"};
		itemSize[] = {4,1};
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
		soundImpactType = "metal";
	};
	class A6_M16_A2_Handguard: A6_M16_Handguard_Base
	{
		scope = 2;
		displayName = "M16A2 Handguard";
		descriptionShort = "M16A2 Handguard";
		model = "A6_Weapons\Attachments\Handguards\M16\M16_Handguard.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.98,0.98,0.98};
		hiddenSelections[] = {"camo_handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M16_A3_Handguard: A6_M16_Handguard_Base
	{
		scope = 2;
		displayName = "M16A3 Handguard";
		descriptionShort = "M16A3 Handguard";
		model = "A6_Weapons\Attachments\Handguards\M16\M16_Handguard_2.p3d";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo_handguard_2"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M16_A4_Handguard: A6_M16_Handguard_Base
	{
		scope = 2;
		displayName = "M16A3 Handguard";
		descriptionShort = "M16A3 Handguard";
		model = "A6_Weapons\Attachments\Handguards\M16\M16_Handguard_3.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={1,1,1};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		hiddenSelections[] = {"camo_handguard_2"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\M16\data\camo_handguard_3_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Handguard_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponHandguardFAL"};
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
		soundImpactType = "metal";
	};
	class A6_FAL_Handguard_Wood: A6_FAL_Handguard_Base
	{
		scope = 2;
		displayName = "FAL Wood Handguard";
		descriptionShort = "FAL Wood Handguard.";
		model = "A6_Weapons\Rifles\FAL\FAL_Wood_Handguard.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.98,0.98,0.98};
		hiddenSelections[] = {"camo_fal"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\FAL\data\camo_fal_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\FAL\data\camo_fal.rvmat"};
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
	class A6_FAL_Handguard_Plastic: A6_FAL_Handguard_Base
	{
		scope = 2;
		displayName = "FAL Plastic Handguard";
		descriptionShort = "FAL Plastic Handguard.";
		model = "A6_Weapons\Rifles\FAL\FAL_Plastic_Handguard.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo_handguard_standard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\FAL\data\camo_handguard_standard_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\FAL\data\camo_handguard_standard.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_handguard_standard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_handguard_standard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_handguard_standard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_handguard_standard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_handguard_standard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_Handguard_Rail: A6_FAL_Handguard_Base
	{
		scope = 2;
		displayName = "FAL Rail Handguard";
		descriptionShort = "FAL Rail Handguard. Allows for rail attachments.";
		model = "A6_Weapons\Rifles\FAL\FAL_Rail_Handguard.p3d";
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[]={1,1,1};
		hiddenSelections[] = {"camo_railguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\FAL\data\camo_railguard_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\FAL\data\camo_railguard.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_railguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_railguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_railguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_railguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_railguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5k_Forearm_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponForearmMP5k"};
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
		soundImpactType = "metal";
	};
	class A6_MP5k_Forearm: A6_MP5k_Forearm_Base
	{
		scope = 2;
		displayName = "MP5k Forearm";
		descriptionShort = "MP5k Plastic Forearm Grip.";
		model = "A6_Weapons\SMGs\MP5\MP5k_Forearm.p3d";
		itemSize[] = {1,2};
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo_mp5k"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5k_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_mp5k.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5k.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_mp5k.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_mp5k_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_mp5k_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_mp5k_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5k_Forearm_Proto: A6_MP5k_Forearm_Base
	{
		scope = 2;
		displayName = "MP5k Proto Forearm";
		descriptionShort = "MP5k Proto Forearm Grip.";
		model = "A6_Weapons\SMGs\MP5\MP5k_ProtoGrip.p3d";
		itemSize[] = {1,2};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo_protogrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_protogrip_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_protogrip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_protogrip.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_protogrip.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_protogrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_protogrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_protogrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5k_Forearm_SP: A6_MP5k_Forearm_Base
	{
		scope = 2;
		displayName = "MP5k SP Forearm";
		descriptionShort = "MP5k SP Forearm Grip.";
		model = "A6_Weapons\SMGs\MP5\MP5k_Forearm_SP.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.8,0.8,0.8};
		BlocksSuppressor = 1;
		hiddenSelections[] = {"camo_sp5k_forearm"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_sp5k_forearm_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Forearm_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponForearmMP5"};
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
		soundImpactType = "metal";
	};
	class A6_MP5_Forearm: A6_MP5_Forearm_Base
	{
		scope = 2;
		displayName = "MP5 Forearm";
		descriptionShort = "MP5 Plastic Forearm.";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[]={0.95,0.95,0.95};
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
	class A6_MP5_Forearm_RIS: A6_MP5_Forearm_Base
	{
		scope = 2;
		displayName = "MP5 RIS Forearm";
		descriptionShort = "MP5 RIS Forearm. Allows for more attachments to be put on.";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_RIS.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={1,1,1};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		hiddenSelections[] = {"camo_forearm_ris"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_ris_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_ris.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_ris.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_forearm_ris.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_forearm_ris_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_forearm_ris_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_ris_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Forearm_Slimline: A6_MP5_Forearm_Base
	{
		scope = 2;
		displayName = "MP5 Slimline Forearm";
		descriptionShort = "MP5 Slimline Forearm.";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_Slimline.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.9,0.9,0.9};
		hiddenSelections[] = {"camo_forearm_slimline"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_slimline_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Forearm_Vented: A6_MP5_Forearm_Base
	{
		scope = 2;
		displayName = "MP5 Vented Forearm";
		descriptionShort = "MP5 Vented Forearm.";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_Vented.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[]={0.9,0.9,0.9};
		hiddenSelections[] = {"camo_forearm_vented"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_vented_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_vented.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_vented.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_forearm_vented.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_forearm_vented_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_forearm_vented_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_vented_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP5_Forearm_Wood: A6_MP5_Forearm_Base
	{
		scope = 2;
		displayName = "MP5 Wood Forearm";
		descriptionShort = "MP5 Wood Forearm.";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_Wood.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo_forearm_wood"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_wood_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\MP5\data\camo_forearm_wood.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_wood.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_forearm_wood.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_forearm_wood_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_forearm_wood_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_forearm_wood_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Shroud_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"MossbergShroud"};
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
	class A6_Mossberg_Shroud: A6_Mossberg_Shroud_Base
	{
		scope = 2;
		displayName = "Mossberg 590 Heat Shroud";
		descriptionShort = "Heat Shroud for the Mossberg 590.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_shroud.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={1.05,1.05,1.05};
		itemSize[] = {4,1};
		hiddenSelections[] = {"camo_mossberg_590"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Forearm_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"MossbergForearm"};
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
	class A6_Mossberg_Forearm_Plastic: A6_Mossberg_Forearm_Base
	{
		scope = 2;
		displayName = "Mossberg 590 Plastic Forearm";
		descriptionShort = "Plastic Forearm for the Mossberg 590.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_forearm_1.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"camo_forearm_1"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_1_plastic_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Forearm_Plastic_2: A6_Mossberg_Forearm_Base
	{
		scope = 2;
		displayName = "Mossberg 590 Mapgul Forearm";
		descriptionShort = "Polymer Forearm for the Mossberg 590. Allows for MLOK Grips to attach.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_forearm_2.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[]={0.9,0.9,0.9};
		hiddenSelections[] = {"camo_forearm_2"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2.rvmat"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_forearm_2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP153_Forearm_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"MP153Forearm"};
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
	class A6_MP153_Forearm_Plastic: A6_MP153_Forearm_Base
	{
		scope = 2;
		displayName = "MP153 Plastic Forearm";
		descriptionShort = "Plastic Forearm for the MP153 590.";
		model = "A6_Weapons\Shotguns\MP153\MP153_Forearm.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.9,0.9,0.9};
		hiddenSelections[] = {"camo_mp153"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\MP153\data\camo_MP153_plastic_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"WeaponHandguardAK"};
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
		soundImpactType = "metal";
	};
	class A6_AK_Handguard_Plastic: A6_AK_Handguard_Base
	{
		scope = 2;
		displayName = "AK Plastic Handguard";
		descriptionShort = "AK Plastic Handguard, fits on all AK Style weapons.";
		model = "DZ\weapons\attachments\support\handguard_ak_plastic.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[]={0.98,0.98,0.98};
		CanAcceptBayonet = 1;
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
	class A6_AK_Handguard_AKM: A6_AK_Handguard_Base
	{
		scope = 2;
		displayName = "AK Wooden Handguard";
		descriptionShort = "AK Wooden Handguard, fits on all AK Style weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Handguard.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={0.97,0.97,0.97};
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_RPK: A6_AK_Handguard_Base
	{
		scope = 2;
		displayName = "RPK Wooden Handguard";
		descriptionShort = "RPK Wooden Handguard, fits on all AK Style weapons.";
		model = "A6_Weapons\Rifles\AK\Parts\RPK_Handguard.p3d";
		itemSize[] = {2,2};
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[]={1.1,1.1,1.1};
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_rpk_handguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_rpk_handguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_rpk_handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_rpk_handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_rpk_handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_MOE: A6_AK_Handguard_Base
	{
		scope = 2;
		displayName = "MOE AK Handguard";
		descriptionShort = "MOE AK Wooden Handguard, fits on all AK Style weapons. Allows for MLOK Style Attachments.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_MOE_Handguard.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[]={0.95,0.95,0.95};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptBayonet = 1;
		isMlock = 1;
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
	class A6_AK_Handguard_Tactical_Polymer_Base: A6_AK_Handguard_Base
	{
		scope = 0;
		displayName = "AK RIS Polymer Handguard";
		descriptionShort = "AK RIS Polymer Handguard, fits on all AK Style weapons. Allows for mounting extra attachments.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_RIS_Poly_Handguard.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[]={1,1,1};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_poly_handguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_poly_handguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_poly_handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_poly_handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_poly_handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_Tactical_Polymer_Black: A6_AK_Handguard_Tactical_Polymer_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_poly_handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\Data\Parts\camo_poly_handguard_co.paa"};
	};
	class A6_AK_Handguard_Tactical_Polymer_Tan: A6_AK_Handguard_Tactical_Polymer_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_poly_handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\Data\Parts\camo_poly_handguard_tan_co.paa"};
	};
	class A6_AK_Handguard_Wood_Zentico: A6_AK_Handguard_Base
	{
		scope = 2;
		displayName = "AK Wooden / Zenitco Handguard";
		descriptionShort = "AK Wooden Zentico Handguard, fits on all AK Style weapons. Allows for mounting extra attachments.";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Zenitco_handguard.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		aimSpeedModifier[]={0.98,0.98,0.98};
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard.rvmat","A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard.rvmat","A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard_damage.rvmat","A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard_damage.rvmat","A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_handguard_destruct.rvmat","A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_Zentico: A6_AK_Handguard_Base
	{
		scope = 2;
		displayName = "AK Zenitco Handguard";
		descriptionShort = "AK Zenitco Handguard, fits on all AK Style weapons. Allows for mounting extra attachments.";
		model = "A6_Weapons\Rifles\AK\Parts\Zenitco_handguard.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {1,1,1};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_handguard_zen_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_Zentico_Long_Base: A6_AK_Handguard_Base
	{
		scope = 0;
		displayName = "AK Zenitco Long Handguard";
		descriptionShort = "AK Zenitco Long Handguard, fits on all AK Style weapons. Allows for mounting extra attachments including the Bipod Attachment.";
		model = "A6_Weapons\Rifles\AK\Parts\Zenitco_handguard_long.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.07,1.07,1.07};
		aimSpeedModifier[]={1.04,1.04,1.04};
		hasRailFunctionality = 1;
		CanAcceptBipod = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_b30b31.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_b30b31.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_b30b31_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_b30b31_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_b30b31_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Handguard_Zentico_Long_Black: A6_AK_Handguard_Zentico_Long_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_b30b31"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\Data\Parts\camo_b30b31_co.paa"};
	};
	class A6_AK_Handguard_Zentico_Long_Tan: A6_AK_Handguard_Zentico_Long_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_b30b31"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AK\Data\Parts\camo_b30b31_tan_co.paa"};
	};
	class A6_M4A1_Handguard_Base: Inventory_Base 
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		inventorySlot[] = {"weaponHandguardM4"};
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
		soundImpactType = "metal";
		class AnimationSources
		{
			class rotate
			{
				source = "user";
				animPeriod = 1.0;
				initPhase = 1;
			};
		};
	};
	class A6_M4A1_Handguard_Plastic: A6_M4A1_Handguard_Base
	{
		scope = 2;
		displayName = "M4A1 Carbine Handguard";
		descriptionShort = "Standard issue Handguard for M4A1 & CAR-15 rifles.";
		model = "A6_Weapons\Attachments\Handguards\M4\M4_Carbine_Handguard.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.98,0.98,0.98};
		hiddenSelections[] = {"camo_handguard_4"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\M4\data\camo_handguard_4_co.paa"};
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\M4\data\camo_handguard_4.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\M4\data\camo_handguard_4.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\M4\data\camo_handguard_4_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\M4\data\camo_handguard_4_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\M4\data\camo_handguard_4_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_MP: A6_M4A1_Handguard_Base
	{
		scope = 2;
		displayName = "M4A1 Magpul MOE SL Handguard";
		descriptionShort = "A MP series handguard for M4A1 assault rifle.";
		model = "A6_Weapons\Rifles\M4A1\Parts\MOECarbine.p3d";
		itemSize[] = {2,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.95,0.95,0.95};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine_Black_co.paa"};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1; 
		CanAcceptLeftFlashlight = 1;
		CanAcceptBayonet = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_MP_Green: A6_M4A1_Handguard_MP
	{
		scope = 2;
		color = "Green";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine_Green_co.paa"};
	};
	class A6_M4A1_Handguard_MP_Tan: A6_M4A1_Handguard_MP
	{
		scope = 2;
		color = "Green";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\Carbine_Tan_co.paa"};
	};
	class A6_M4A1_Handguard_KAC_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "KAC RIS Hanguard";
		descriptionShort = "Knight's Armament RIS. Allows for attachements. Fits on MK18, M4A1 Carbine, M4A1, CAR-15, & AR-15 rifles.";
		model = "A6_Weapons\Rifles\M4A1\Parts\M4KACRIS.p3d";
		itemSize[] = {3,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {1,1,1};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBayonet = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\handguard.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_KAC_Black: A6_M4A1_Handguard_KAC_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_handguard"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\handguard_co.paa"};
	};
	class A6_M4A1_Handguard_DD95_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "DD MK18 RIS II";
		descriptionShort = "Daniel Defense Rail Interface System. Allows for attachments. Fits on MK18, M4A1 Carbine, M4A1, AR-15, & AR-10 rifles.";
		model = "A6_Weapons\Rifles\M4A1\Parts\DD95.p3d";
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD95.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD95.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD95_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD95_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD95_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_DD95_Tan: A6_M4A1_Handguard_DD95_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_DD95"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\DD95_co.paa"};
	};
	class A6_M4A1_Handguard_DD95_Black: A6_M4A1_Handguard_DD95_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_DD95"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\DD95_black_co.paa"};
	};
	class A6_M4A1_Handguard_DD125_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "DD M4A1 RIS II";
		descriptionShort = "Daniel Defense Rail Interface System. Allows for attachments. Fits on MK18, M4A1, AR-15, & AR-10 rifles.";
		model = "A6_Weapons\Rifles\M4A1\Parts\DD125.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD125.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD125.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD125_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD125_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\DD125_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_DD125_Tan: A6_M4A1_Handguard_DD125_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_DD125"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\DD125_co.paa"};
	};
	class A6_M4A1_Handguard_DD125_Black: A6_M4A1_Handguard_DD125_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_DD125"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\DD125_black_co.paa"};
	};
	class A6_M4A1_Handguard_DDFSP_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "DD M4A1 FSP RIS II";
		descriptionShort = "Daniel Defense Rail Interface System. Allows for attachments & A2 Front Sight Gasblocks. Fits on MK18, M4A1, AR-15, & AR-10 rifles.";
		model = "A6_Weapons\Rifles\M4A1\Parts\DDFSP.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_DDFSP_Tan: A6_M4A1_Handguard_DDFSP_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_DDFSP"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP_co.paa"};
	};
	class A6_M4A1_Handguard_DDFSP_Black: A6_M4A1_Handguard_DDFSP_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_DDFSP"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\DDFSP_black_co.paa"};
	};
	class A6_M4A1_Handguard_DD95_MLOK_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "DD M-LOK III 9.5";
		descriptionShort = "Daniel Defense Handguard. Fits on MK18, M4A1 Carbine, M4A1, AR-15, & AR-10 rifles.";
		model = "A6_Weapons\Attachments\Handguards\MLOK_M4\MLOK_95.p3d";
		itemSize[] = {3,1};
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.0,1.0,1.0};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_DD95_MLOK_Tan: A6_M4A1_Handguard_DD95_MLOK_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_mlok_95"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95_tan_co.paa"};
	};
	class A6_M4A1_Handguard_DD95_MLOK_Black: A6_M4A1_Handguard_DD95_MLOK_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_mlok_95"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95_black_co.paa"};
	};
	class A6_M4A1_Handguard_DD95_MLOK_Green: A6_M4A1_Handguard_DD95_MLOK_Base
	{
		scope = 2;
		color = "Green";
		hiddenSelections[] = {"camo_mlok_95"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_95_green_co.paa"};
	};
	class A6_M4A1_Handguard_DD125_MLOK_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "DD M-LOK III 12.5";
		descriptionShort = "Daniel Defense Handguard. Fits on MK18, M4A1 Carbine, M4A1, AR-15, & AR-10 rifles.";
		model = "A6_Weapons\Attachments\Handguards\MLOK_M4\MLOK_125.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_DD125_MLOK_Tan: A6_M4A1_Handguard_DD125_MLOK_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_mlok_125"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125_tan_co.paa"};
	};
	class A6_M4A1_Handguard_DD125_MLOK_Black: A6_M4A1_Handguard_DD125_MLOK_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_mlok_125"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125_black_co.paa"};
	};
	class A6_M4A1_Handguard_DD125_MLOK_Green: A6_M4A1_Handguard_DD125_MLOK_Base
	{
		scope = 2;
		color = "Green";
		hiddenSelections[] = {"camo_mlok_125"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_125_green_co.paa"};
	};
	class A6_M4A1_Handguard_DDFSP_MLOK_Base: A6_M4A1_Handguard_Base
	{
		scope = 0;
		displayName = "DD M-LOK III FSP";
		descriptionShort = "Daniel Defense Handguard System. Fits on MK18, M4A1 Carbine, M4A1, AR-15, & AR-10 rifles.";
		model = "A6_Weapons\Attachments\Handguards\MLOK_M4\MLOK_FSP.p3d";
		itemSize[] = {4,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		isMlock = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_Handguard_DDFSP_MLOK_Tan: A6_M4A1_Handguard_DDFSP_MLOK_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelections[] = {"camo_mlok_fsp"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp_tan_co.paa"};
	};
	class A6_M4A1_Handguard_DDFSP_MLOK_Black: A6_M4A1_Handguard_DDFSP_MLOK_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelections[] = {"camo_mlok_fsp"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp_black_co.paa"};
	};
	class A6_M4A1_Handguard_DDFSP_MLOK_Green: A6_M4A1_Handguard_DDFSP_MLOK_Base
	{
		scope = 2;
		color = "Green";
		hiddenSelections[] = {"camo_mlok_fsp"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\Handguards\MLOK_M4\data\camo_mlok_fsp_green_co.paa"};
	};
	class A6_ASVAL_Handguard: Inventory_Base
	{
		scope = 2;
		displayName = "Zenitco 6P29 Picatini Handguard";
		descriptionShort = "Zenitco 6P29 Picatini Handguard, Allows for more Attachments to the VSS & AS-VAL.";
		model = "A6_Weapons\Rifles\ASVAL\ASVAL_Handguard.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponHandguardASVAL"};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.9,0.9,0.9};
		aimSpeedModifier[] = {1,1,1};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\ASVAL\data\camo_6pmount.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\ASVAL\data\camo_6pmount.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\ASVAL\data\camo_6pmount_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\ASVAL\data\camo_6pmount_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\ASVAL\data\camo_6pmount_destruct.rvmat"}}
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
		soundImpactType = "plastic";
	};
};	
class CfgSlots
{
	class Slot_weaponHandguardHKG28
	{
		name = "weaponHandguardHKG28";
		displayName = "HK G28 Handguard";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardHK
	{
		name = "weaponHandguardHK";
		displayName = "HK Handguard";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardM16
	{
		name = "weaponHandguardM16";
		displayName = "M16 Handguard";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardFAL
	{
		name = "weaponHandguardFAL";
		displayName = "FAL Handguard";
		ghostIcon = "handguard";
	};
	class Slot_weaponForearmMP5k
	{
		name = "weaponForearmMP5k";
		displayName = "MP5k Forearm";
		ghostIcon = "handguard";
	};
	class Slot_weaponForearmMP5
	{
		name = "weaponForearmMP5";
		displayName = "MP5 Forearm";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardASVAL
	{
		name = "weaponHandguardASVAL";
		displayName = "Hanguard";
		ghostIcon = "handguard";
	};
	class Slot_MossbergForearm
	{
		name = "MossbergForearm";
		displayName = "Pump Forearm";
		ghostIcon = "handguard";
	};
	class Slot_MP153Forearm
	{
		name = "MP153Forearm";
		displayName = "Pump Forearm";
		ghostIcon = "handguard";
	};
	class Slot_MossbergShroud
	{
		name = "MossbergShroud";
		displayName = "Shroud";
		ghostIcon = "";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyHKG28_Handguard_Patrol: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardHKG28";
		model = "A6_Weapons\Attachments\Handguards\HKG28\HKG28_Handguard_Patrol.p3d";
	};
	class ProxyHKG28_Handguard_LG: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardHKG28";
		model = "A6_Weapons\Attachments\Handguards\HKG28\HKG28_Handguard_LG.p3d";
	};
	class ProxyHK_Handguard_MLOCK_SH: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardHK";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_MLOCK_SH.p3d";
	};
	class ProxyHK_Handguard_MLOCK_LG: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardHK";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_MLOCK_LG.p3d";
	};
	class ProxyHK_Handguard_RIS_SH: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardHK";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_RIS_SH.p3d";
	};
	class ProxyHK_Handguard_RIS_LG: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardHK";
		model = "A6_Weapons\Attachments\Handguards\HK\HK_Handguard_RIS_LG.p3d";
	};
	class ProxyFAL_Wood_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardFAL";
		model = "A6_Weapons\Rifles\FAL\FAL_Wood_Handguard.p3d";
	};
	class ProxyFAL_Plastic_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardFAL";
		model = "A6_Weapons\Rifles\FAL\FAL_Plastic_Handguard.p3d";
	};
	class ProxyFAL_Rail_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardFAL";
		model = "A6_Weapons\Rifles\FAL\FAL_Rail_Handguard.p3d";
	};
	class ProxyMP5k_Forearm: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5k";
		model = "A6_Weapons\SMGs\MP5\MP5k_Forearm.p3d";
	};
	class ProxyMP5k_Forearm_SP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5k";
		model = "A6_Weapons\SMGs\MP5\MP5k_Forearm_SP.p3d";
	};
	class ProxyMP5k_ProtoGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5k";
		model = "A6_Weapons\SMGs\MP5\MP5k_ProtoGrip.p3d";
	};
	class ProxyMP5_Forearm: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm.p3d";
	};
	class ProxyMP5_Forearm_RIS: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_RIS.p3d";
	};
	class ProxyMP5_Forearm_Slimline: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_Slimline.p3d";
	};
	class ProxyMP5_Forearm_Vented: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_Vented.p3d";
	};
	class ProxyMP5_Forearm_Wood: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForearmMP5";
		model = "A6_Weapons\SMGs\MP5\MP5_Forearm_Wood.p3d";
	};
	class ProxyMossberg_forearm_1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergForearm";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_forearm_1.p3d";
	};
	class ProxyMossberg_forearm_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergForearm";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_forearm_2.p3d";
	};
	class ProxyMossberg_shroud: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergShroud";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_shroud.p3d";
	};
	class ProxyMP153_Forearm: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MP153Forearm";
		model = "A6_Weapons\Shotguns\MP153\MP153_Forearm.p3d";
	};
	class ProxyASVAL_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardASVAL";
		model = "A6_Weapons\Rifles\ASVAL\ASVAL_Handguard.p3d";
	};
	class ProxyM4KACRIS: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\M4KACRIS.p3d";
	};
	class ProxyDD95: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\DD95.p3d";
	};
	class ProxyDD125: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\DD125.p3d";
	};
	class ProxyDDFSP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Rifles\M4A1\Parts\DDFSP.p3d";
	};
	class ProxyMLOK_95: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Attachments\Handguards\MLOK_M4\MLOK_95.p3d";
	};
	class ProxyMLOK_125: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Attachments\Handguards\MLOK_M4\MLOK_125.p3d";
	};
	class ProxyMLOK_FSP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM4";
		model = "A6_Weapons\Attachments\Handguards\MLOK_M4\MLOK_FSP.p3d";
	};
	class ProxyAKM_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Handguard.p3d";
	};
	class ProxyRPK_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\RPK_Handguard.p3d";
	};
	class ProxyAK_MOE_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\AK_MOE_Handguard.p3d";
	};
	class ProxyAK_RIS_Poly_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\AK_RIS_Poly_Handguard.p3d";
	};
	class ProxyAKM_Zenitco_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\AKM_Zenitco_handguard.p3d";
	};
	class ProxyZenitco_handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\Zenitco_handguard.p3d";
	};
	class ProxyZenitco_handguard_long: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponHandguardAK";
		model = "A6_Weapons\Rifles\AK\Parts\Zenitco_handguard_long.p3d";
	};
	class ProxyM16_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM16";
		model = "A6_Weapons\Attachments\Handguards\M16\M16_Handguard.p3d";
	};
	class ProxyM16_Handguard_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM16";
		model = "A6_Weapons\Attachments\Handguards\M16\M16_Handguard_2.p3d";
	};
	class ProxyM16_Handguard_3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardM16";
		model = "A6_Weapons\Attachments\Handguards\M16\M16_Handguard_3.p3d";
	};
};		