class CfgPatches
{
	class A6_PistolGrips
	{
		units[] = 
		{
			"A6_FAL_PistolGrip_M249SAW",
			"A6_FAL_PistolGrip_Fab_Defense",
			"A6_Scorpion_Evo_PistolGrip",
			"A6_M4A1_PistolGrip_Hogue",
			"A6_M4A1_PistolGrip_Hogue_Forest",
			"A6_M4A1_PistolGrip_Hogue_Desert",
			"A6_M4A1_PistolGrip_Gevar",
			"A6_M4A1_PistolGrip_Gevar_Tan",
			"A6_M4A1_PistolGrip_DD",
			"A6_M4A1_PistolGrip_DD_Tan",
			"A6_M4A1_PistolGrip_Skeleton",
			"A6_M4A1_PistolGrip_Skeleton_Black",
			"A6_M4A1_PistolGrip_Skeleton_Red",
			"A6_M4A1_PistolGrip_MOE",
			"A6_M4A1_PistolGrip_MOE_Green",
			"A6_M4A1_PistolGrip_MOE_Tan",
			"A6_M4A1_PistolGrip_Ergo",
			"A6_HK_PistolGrip_BG_Black",
			"A6_HK_PistolGrip_BG_Tan",
			"A6_HK_PistolGrip_BG_Green",
			"A6_HK_PistolGrip_BGB_Black",
			"A6_HK_PistolGrip_BGB_Tan",
			"A6_HK_PistolGrip_BGB_Green",
            "A6_M4A1_PistolGrip_F1",
            "A6_M4A1_PistolGrip_F1_Tan",
            "A6_M4A1_PistolGrip_F1_Green",
            "A6_M4A1_PistolGrip_F1_Red",
			"A6_AK_PistolGripWood",
			"A6_AK_Bakelite_PistolGrip",
			"A6_AK_PP19_PistolGrip",
			"A6_AK_MOE_PistolGrip",
			"A6_AK_Zenitco_RK3_PistolGrip",
            "A6_AK_Zenitco_RK3_Tan_PistolGrip",
			"A6_AK_12_PistolGrip"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_FAL_PistolGrip_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 50;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponFALPistolGrip"};
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
		soundImpactType = "plastic";
	};
	class A6_FAL_PistolGrip_M249SAW: A6_FAL_PistolGrip_Base
	{
		scope = 2;
		displayName = "FN M249 SAW Pistolgrip";
		descriptionShort = "Ergonomic Pistol Grip for the M249, FAL, & DSA SA58 IBW.";
		model = "A6_Weapons\LMGs\M249\m249_pistolgrip.p3d";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.92,0.92,0.92};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\LMGs\M249\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\LMGs\M249\data\camo.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\LMGs\M249\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\LMGs\M249\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\LMGs\M249\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\LMGs\M249\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\LMGs\M249\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_FAL_PistolGrip_Fab_Defense: A6_FAL_PistolGrip_Base
	{
		scope = 2;
		displayName = "FAL Fab Defense Pistol Grip";
		descriptionShort = "Ergonomic Pistol Grip for the M249, FAL, & DSA SA58 IBW.";
		model = "A6_Weapons\Rifles\SA58\sa58_pistolgrip.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.81,0.81,0.81};
		hiddenSelections[] = {"camo_fab_defense_pistol_grip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\SA58\data\camo_fab_defense_pistol_grip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Scorpion_Evo_PistolGrip_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 50;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponevopistolgrip"};
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
		soundImpactType = "plastic";
	};
	class A6_Scorpion_Evo_PistolGrip: A6_Scorpion_Evo_PistolGrip_Base
	{
		scope = 2;
		displayName = "Scorpion Evo Ergo Pistol Grip";
		descriptionShort = "Ergonomic Pistol Grip for the Scorpion Evo.";
		model = "A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoTacticalPistolGrip.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.78,0.78,0.78};
		hiddenSelections[] = {"camo_pistolgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\ScorpionEvo\data\camo_pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_PistolGrip_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 50;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponM4PistolGrip"};
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
		soundImpactType = "plastic";
	};
	class A6_M4A1_PistolGrip_Hogue: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "Hogue OverMolded Pistol Grip";
		descriptionShort = "Pistol Grip for M4/AR15 Platforms.";
		model = "A6_Weapons\Rifles\M4A1\Parts\HoguePistolGrip.p3d";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.92,0.92,0.92};
		hiddenSelections[] = {"camo_pistolgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AR10\Data\handgrip_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AR10\Data\handgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AR10\Data\handgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AR10\Data\handgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AR10\Data\handgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AR10\Data\handgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_PistolGrip_Hogue_Forest: A6_M4A1_PistolGrip_Hogue
	{
		hiddenSelections[] = {"camo_pistolgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AR10\data\Forest\handgrip_forest_co.paa"};
	};
	class A6_M4A1_PistolGrip_Hogue_Desert: A6_M4A1_PistolGrip_Hogue
	{
		hiddenSelections[] = {"camo_pistolgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\AR10\data\Desert\handgrip_desert_co.paa"};
	};
	class A6_M4A1_PistolGrip_Gevar: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "Gevar Pistol Grip";
		descriptionShort = "Gevar Pistol Grip for M4/AR15 Platforms.";
		model = "A6_Weapons\Rifles\M4A1\Parts\GevarPistolGrip.p3d";
		recoilModifier[] = {0.97,0.97,0.97};
		swayModifier[] = {0.97,0.97,0.97};
		aimSpeedModifier[]={0.87,0.87,0.87};
		hiddenSelections[] = {"camo_gevargrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_PistolGrip_Gevar_Tan: A6_M4A1_PistolGrip_Gevar
	{
		hiddenSelections[] = {"camo_gevargrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\M4A1\Data\Parts\gevargrip_tan_co.paa"};
	};
	class A6_M4A1_PistolGrip_MOE: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "Magpul MOE Pistol Grip";
		descriptionShort = "Magpul MOE Pistol Grip for M4/AR15 Platforms.";
		model = "A6_Weapons\Attachments\PistolGrips\data\MOE\MOEPistolGrip.p3d";
		recoilModifier[] = {0.96,0.96,0.96};
		swayModifier[] = {0.96,0.96,0.96};
		aimSpeedModifier[]={0.83,0.83,0.83};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\MOE\camo_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\MOE\camo.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\MOE\camo.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\MOE\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\MOE\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\MOE\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_PistolGrip_MOE_Green: A6_M4A1_PistolGrip_MOE
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\MOE\camo_green_co.paa"};
	};
	class A6_M4A1_PistolGrip_MOE_Tan: A6_M4A1_PistolGrip_MOE
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\MOE\camo_tan_co.paa"};
	};
	class A6_M4A1_PistolGrip_DD: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "Daniel Defense Pistol Grip";
		descriptionShort = "Daniel Defense Pistol Grip for M4/AR15 Platforms.";
		model = "A6_Weapons\Rifles\M4A1\Parts\DDPistolGrip.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.81,0.81,0.81};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
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
	};
	class A6_M4A1_PistolGrip_DD_Tan: A6_M4A1_PistolGrip_DD
	{
		hiddenSelections[] = {"handgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Rifles\Beowulf\data\handgrip_tan_co.paa"};
	};
	class A6_M4A1_PistolGrip_Skeleton: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "Tactical Dynamics Skeleton Grip";
		descriptionShort = "Tactical Dynamics Skeleton Pistol Grip for M4/AR15 Platforms.";
		model = "A6_Weapons\Attachments\PistolGrips\data\Skeleton\M4AirFramePistolGrip.p3d";
		recoilModifier[] = {1.06,1.06,1.06};
		swayModifier[] = {1.09,1.09,1.09};
		aimSpeedModifier[]={0.72,0.72,0.72};
		hiddenSelections[] = {"camo_handgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_M4A1_PistolGrip_Skeleton_Black: A6_M4A1_PistolGrip_Skeleton
	{
		hiddenSelections[] = {"camo_handgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip_black_co.paa"};
	};
	class A6_M4A1_PistolGrip_Skeleton_Red: A6_M4A1_PistolGrip_Skeleton
	{
		hiddenSelections[] = {"camo_handgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\Skeleton\camo_handgrip_red_co.paa"};
	};
	class A6_M4A1_PistolGrip_Ergo: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "AR-15 HK Ergo PSG-1 Pistol Grip";
		descriptionShort = "Ergo PSG-1 style pistol grip can be installed at any weapon compatible with AR-15 grips.";
		model = "A6_Weapons\Attachments\PistolGrips\data\ErgoG3\ErgoG3.p3d";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[]={1.04,1.04,1.04};
		hiddenSelections[] = {"camo_pistolgrip"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\ErgoG3\data\camo_ergog3_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\ErgoG3\data\camo_ergog3.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\ErgoG3\data\camo_ergog3.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\ErgoG3\data\camo_ergog3_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\ErgoG3\data\camo_ergog3_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\ErgoG3\data\camo_ergog3_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_PistolGrip_BG_Black: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "AR-15 HK Battle Grip Pistol Grip";
		descriptionShort = "HK Battle Grip pistol grip can be installed at any weapon compatible with AR-15 grips.";
		model = "A6_Weapons\Attachments\PistolGrips\data\HK_BG\HK_BG.p3d";
		recoilModifier[] = {0.94,0.94,0.94};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.87,0.87,0.87};
		hiddenSelections[] = {"camo_hk_bg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_PistolGrip_BG_Tan: A6_HK_PistolGrip_BG_Black
	{
		hiddenSelections[] = {"camo_hk_bg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg_tan_co.paa"};
	};
	class A6_HK_PistolGrip_BG_Green: A6_HK_PistolGrip_BG_Black
	{
		hiddenSelections[] = {"camo_hk_bg"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bg_green_co.paa"};
	};
	class A6_HK_PistolGrip_BGB_Black: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "AR-15 HK Battle Grip Beavertail Pistol Grip";
		descriptionShort = "HK Battle Grip Beavertail pistol grip can be installed at any weapon compatible with AR-15 grips.";
		model = "A6_Weapons\Attachments\PistolGrips\data\HK_BG\HK_BGB.p3d";
		recoilModifier[] = {0.92,0.92,0.92};
		swayModifier[] = {0.93,0.93,0.93};
		aimSpeedModifier[]={0.87,0.87,0.87};
		hiddenSelections[] = {"camo_hk_bgb"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_HK_PistolGrip_BGB_Tan: A6_HK_PistolGrip_BGB_Black
	{
		hiddenSelections[] = {"camo_hk_bgb"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb_tan_co.paa"};
	};
	class A6_HK_PistolGrip_BGB_Green: A6_HK_PistolGrip_BGB_Black
	{
		hiddenSelections[] = {"camo_hk_bgb"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\HK_BG\data\camo_hk_bgb_green_co.paa"};
	};
    class A6_M4A1_PistolGrip_F1: A6_M4A1_PistolGrip_Base
	{
		scope = 2;
		displayName = "AR-15 F1 Firearms Skeletonized Style 2 PC pistol grip";
		descriptionShort = "A lightweight ergonomical pistol grip with finger grooves for AR-15 weapon systems, manufactured by F1 Firearms..";
		model = "A6_Weapons\Attachments\PistolGrips\data\F1\F1_AR15_PistolGrip.p3d";
		recoilModifier[] = {1.06,1.06,1.06};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.72,0.72,0.72};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
    class A6_M4A1_PistolGrip_F1_Tan: A6_M4A1_PistolGrip_F1
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_tan_co.paa"};
	};
    class A6_M4A1_PistolGrip_F1_Green: A6_M4A1_PistolGrip_F1
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_green_co.paa"};
	};
    class A6_M4A1_PistolGrip_F1_Red: A6_M4A1_PistolGrip_F1
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\F1\data\camo_red_co.paa"};
	};
	class A6_AK_PistolGrip_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 50;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponAKPistolGrip"};
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
		soundImpactType = "plastic";
	};
	class A6_AK_PistolGripWood: A6_AK_PistolGrip_Base
	{
		scope = 2;
		displayName = "AKM Wooden Pistol Grip";
		descriptionShort = "Standard Issue Pistol Grip for AK Platforms.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGripWood.p3d";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.96,0.96,0.96};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akms_stock.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akms_stock.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akms_stock_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akms_stock_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akms_stock_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Bakelite_PistolGrip: A6_AK_PistolGrip_Base
	{
		scope = 2;
		displayName = "Bakelite Pistol Grip";
		descriptionShort = "AK Bakelite Pistol Grip for AK Platforms.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_bakelight.p3d";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.93,0.93,0.93};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_reciever.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_reciever.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_reciever_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_reciever_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Gun\Rvmats\camo_akm_reciever_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_PP19_PistolGrip: A6_AK_PistolGrip_Base
	{
		scope = 2;
		displayName = "PP-19 Vityaz Pistol Grip";
		descriptionShort = "PP-19-01 Vityaz for AK Platforms.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_PP19.p3d";
		recoilModifier[] = {0.98,0.98,0.98};
		swayModifier[] = {0.98,0.98,0.98};
		aimSpeedModifier[]={0.88,0.88,0.88};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
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
	};
	class A6_AK_MOE_PistolGrip: A6_AK_PistolGrip_Base
	{
		scope = 2;
		displayName = "MOE AK Pistol Grip";
		descriptionShort = "Magpul MOE pistol grip for AK Platforms.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_MOE.p3d";
		recoilModifier[] = {0.96,0.96,0.96};
		swayModifier[] = {0.96,0.96,0.96};
		aimSpeedModifier[]={0.84,0.84,0.84};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_moe_pistolgrip.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_moe_pistolgrip.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_moe_pistolgrip_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_moe_pistolgrip_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_moe_pistolgrip_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_Zenitco_RK3_PistolGrip: A6_AK_PistolGrip_Base
	{
		scope = 2;
		displayName = "Zenitco RK-3 Pistol Grip";
		descriptionShort = "Zenitco RK-3 pistol grip for AK Platforms.";
		model = "A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\Zenitco_RK3.p3d";
		recoilModifier[] = {0.97,0.97,0.97};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.76,0.76,0.76};
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};		
    class A6_AK_Zenitco_RK3_Tan_PistolGrip: A6_M4A1_PistolGrip_F1
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Attachments\PistolGrips\data\Zenitco_RK3\camo_tan_co.paa"};
	};	
	class A6_AK_12_PistolGrip: A6_AK_PistolGrip_Base
	{
		scope = 2;
		displayName = "AK-12 Pistol Grip";
		descriptionShort = "AK-12 pistol grip for AK Platforms.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_12.p3d";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		aimSpeedModifier[]={0.82,0.82,0.82};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_poly_mag.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_poly_mag.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_poly_mag_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_poly_mag_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\Data\Parts\Rvmats\camo_akm_poly_mag_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_weaponevopistolgrip
	{
		name = "weaponevopistolgrip";
		displayName = "Pistol Grip";
		ghostIcon = "set:A6_Weapons image:pistolgrip";
	};
	class Slot_weaponM4PistolGrip
	{
		name = "weaponM4PistolGrip";
		displayName = "Pistol Grip";
		ghostIcon = "set:A6_Weapons image:pistolgrip";
	};
	class Slot_weaponAKPistolGrip
	{
		name = "weaponAKPistolGrip";
		displayName = "Pistol Grip";
		ghostIcon = "set:A6_Weapons image:pistolgrip";
	};
	class Slot_weaponFALPistolGrip
	{
		name = "weaponFALPistolGrip";
		displayName = "Pistol Grip";
		ghostIcon = "set:A6_Weapons image:pistolgrip";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMOEPistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponM4PistolGrip";
		model = "A6_Weapons\Attachments\PistolGrips\data\MOE\MOEPistolGrip.p3d";
	};
	class Proxym249_pistolgrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponFALPistolGrip";
		model = "A6_Weapons\LMGs\M249\m249_pistolgrip.p3d";
	};
	class Proxysa58_pistolgrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponFALPistolGrip";
		model = "A6_Weapons\Rifles\SA58\sa58_pistolgrip.p3d";
	};
	class ProxyScorpionEvoTacticalPistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponevopistolgrip";
		model = "A6_Weapons\SMGs\ScorpionEvo\ScorpionEvoTacticalPistolGrip.p3d";
	};
	class ProxyM4PistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponM4PistolGrip";
		model = "A6_Weapons\Rifles\M4A1\Parts\M4PistolGrip.p3d";
	};
	class ProxyHoguePistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponM4PistolGrip";
		model = "A6_Weapons\Rifles\M4A1\Parts\HoguePistolGrip.p3d";
	};
	class ProxyGevarPistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponM4PistolGrip";
		model = "A6_Weapons\Rifles\M4A1\Parts\GevarPistolGrip.p3d";
	};
	class ProxyDDPistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponM4PistolGrip";
		model = "A6_Weapons\Rifles\M4A1\Parts\DDPistolGrip.p3d";
	};
	class ProxyM4AirFramePistolGrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponM4PistolGrip";
		model = "A6_Weapons\Attachments\PistolGrips\data\Skeleton\M4AirFramePistolGrip.p3d";
	};
	class ProxyAK_PistolGripWood: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponAKPistolGrip";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGripWood.p3d";
	};
	class ProxyAK_PistolGrip_bakelight: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponAKPistolGrip";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_bakelight.p3d";
	};
	class ProxyAK_PistolGrip_PP19: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponAKPistolGrip";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_PP19.p3d";
	};
	class ProxyAK_PistolGrip_MOE: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponAKPistolGrip";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_MOE.p3d";
	};
	class ProxyAK_PistolGrip_12: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponAKPistolGrip";
		model = "A6_Weapons\Rifles\AK\Parts\AK_PistolGrip_12.p3d";
	};
};	