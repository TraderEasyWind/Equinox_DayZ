class CfgPatches
{
	class A6_Suppressors
	{
		units[] = 
		{
			"A6_Gemtech_Tundra_Suppressor",
			"A6_AK_PSB1_Suppressor",
			"A6_Hybrid_46_Suppressor",
			"A6_Hybrid_46_Suppressor_Gray",
			"A6_Hybrid_46_Suppressor_Tan",
			"A6_Chimera_300_Suppressor",
			"A6_Omega_300_Suppressor",
			"A6_Omega_300_Tan",
			"A6_Jumbo_Shrimp_Suppressor",
			"A6_AWC_Thor_Suppressor",
			"A6_TBA_Ultra5_Suppressor",
			"A6_SLX68_Suppressor",
			"A6_HXQD_Suppressor",
			"A6_Windtalker_Suppressor",
			"A6_Windtalker_Suppressor_Tan",
			"A6_QDL_Suppressor",
			"A6_OspreySuppressor",
			"A6_MP7A2Suppressor",
			"A6_9A91_Suppressor",
			"A6_HoneyBadger_Suppressor",
			"A6_Salvo12_Suppressor",
			"A6_DeadAirMask22_Suppressor",
			"A6_ASH12_Suppressor",
			"A6_AI_338_Suppressor"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor;
	class A6_Gemtech_Tundra_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "GEMTECH TUNDRA Suppressor";
		descriptionShort = "GEMTECH TUNDRA Suppressor designed for pistol and SMG applications.";
		model = "dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 70;
		itemSize[] = {3,1};
		itemModelLength = 0.176;
		barrelArmor = 600;
		inventorySlot[] = {"pistolMuzzle"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -0.93;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.2,1.2,1.2};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor.rvmat"};
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
			class OnOverheating
			{
				shotsToStartOverheating = 2;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\pistol_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AK_PSB1_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "PBS-1 Silencer";
		descriptionShort = "The PBS-1 silencer, designed for use with the AK to reduce the noise when firing, was introduced in the 1960s, and was used mostly by Spetsnaz forces and the KGB.";
		model = "A6_Weapons\Rifles\AK\Parts\PSB1_Suppressor.p3d";
		inventorySlot[] = {"weaponMuzzleAK","weaponMuzzleSKS"};
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
		soundIndex = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK\data\Parts\rvmats\camo_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle = "weapon_shot_akm_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 2;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_UniversalSuppressor_Base: ItemSuppressor
	{
		scope = 0;
		displayName = "Universal Rifle Suppressor";
		descriptionShort = "Universal Suppressor for your Rifle!";
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[] = {3,1};
		soundIndex = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_Hybrid_46_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "SilencerCo Hybrid 46 Multi Caliber Silencer";
		descriptionShort = "Universal Suppressor for your Weapon! Does fit on the AAC HoneyBadger. Not Compatible with 6.8 SPC & Up.";
		inventorySlot[] = {"suppressorImpro","weaponMuzzleAK","weaponMuzzleM4","HoneyBadgerSuppressor","pistolMuzzle","MP7A2Suppressor","weaponMuzzleSKS"};
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor.p3d";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\suppressor_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\suppressor_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Hybrid_46_Suppressor_Gray: A6_Hybrid_46_Suppressor
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor_gray_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor.rvmat"};
	};
	class A6_Hybrid_46_Suppressor_Tan: A6_Hybrid_46_Suppressor
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor.rvmat"};
	};
	class A6_Chimera_300_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "SilencerCo Chimera Silencer";
		descriptionShort = "Universal Suppressor for your Weapon. Does fit on the AAC HoneyBadger. Not Compatible with 6.8 SPC & Up.";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor2.p3d";
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.15,1.15,1.15};
		inventorySlot[] = {"suppressorImpro","weaponMuzzleAK","weaponMuzzleM4","HoneyBadgerSuppressor","pistolMuzzle","MP7A2Suppressor","weaponMuzzleSKS"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor2.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\suppressor2.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\suppressor2_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\suppressor2_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Omega_300_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "SilencerCo Omega 300 Multi Caliber Silencer";
		descriptionShort = "Universal Suppressor for your Rifle! Does not fit on the AAC HoneyBadger. Compatible up to .277 Fury.";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor3.p3d";
		inventorySlot[] = {"suppressorImpro","weaponMuzzleAK","weaponMuzzleM4","weaponMuzzle308","weaponMuzzleSKS","weaponMuzzleFAL","weaponMuzzle277"};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor3_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor3.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor3.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\suppressor3.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\suppressor3_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\suppressor3_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor3_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Omega_300_Tan: A6_Omega_300_Suppressor
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor3_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\suppressor3.rvmat"};
	};
	class A6_Jumbo_Shrimp_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "Jumbo Shrimp Multi Caliber Silencer";
		descriptionShort = "Universal Suppressor for your Rifle! Works great for 8.6 Blackout. Compatible with 6.8 SPC to .277 Fury.";
		inventorySlot[] = {"weaponMuzzle308","weaponMuzzle86","weaponMuzzleFAL","weaponMuzzle277"};
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor4.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor4.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\suppressor4.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\suppressor4_damaged.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\suppressor4_damaged.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\suppressor4_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_TBA_Ultra5_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "TBAC ULTRA 5 .30 Caliber Suppressor";
		descriptionShort="TBAC ULTRA 5 .30 Caliber Suppressor. Compatible with 5.45, 5.56, .300 BLK, 6.8 SPC, 7.62x39, .308 (7.62x51), 7.62x54 and .277 calibers.";
		model = "A6_Weapons\Attachments\Suppressors\TBA_Ultra5_Suppressor.p3d";
		inventorySlot[] = {"weaponMuzzleAK","weaponMuzzleM4","HoneyBadgerSuppressor","weaponMuzzle308","weaponMuzzleFAL","weaponMuzzle277"};
		itemSize[] = {2,1};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.13,1.13,1.13};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\camo_tba_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\camo_tba_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\camo_tba_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\camo_tba_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\camo_tba_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_AWC_Thor_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "AWC Thor PSR XL Multi-Caliber Suppressor";
		descriptionShort="AWC Thor PSR XL Multi-Caliber Suppressor. Compatible with 6.8 SPC to .277 Fury. Works with 8.6 Blackout.";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor5.p3d";
		inventorySlot[] = {"weaponMuzzle308","weaponMuzzle86","weaponMuzzleFAL","weaponMuzzle277"};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.2,1.2,1.2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
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
	};
	class A6_HXQD_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="OSS Helix HX-QD 338 TI Suppressor";
		descriptionShort="A High Caliber Suppressor for Weapons that have calibers with .50 Beowulf & .338 Lapua.";
		model="A6_Weapons\Attachments\Suppressors\HXQD_338_TI_Suppressor.p3d";
		inventorySlot[] = {"weaponmuzzle338"};
		rotationFlags = 17;
		reversed = 0;
		weight = 800;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[]={4,1};
		soundIndex = 1;
		repairableWithKits[] = {1};
		repairCosts[] = {50.0};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\camo_hxqd_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\camo_hxqd.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\camo_hxqd.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\camo_hxqd.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\camo_hxqd_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\camo_hxqd_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\camo_hxqd_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_AI_338_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="AI .338 Tactical TI Suppressor";
		descriptionShort="A High Caliber Suppressor for Weapons that have calibers with .50 Beowulf & .338 Lapua.";
		model="A6_Weapons\Attachments\Suppressors\AI_338_LM_Tactical_Suppressor.p3d";
		inventorySlot[] = {"weaponmuzzle338"};
		rotationFlags = 17;
		reversed = 0;
		weight = 800;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[]={4,1};
		soundIndex = 1;
		repairableWithKits[] = {1};
		repairCosts[] = {50.0};
		hiddenSelections[]= {"camo_suppressor"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Muzzles\data\ai_tactical_muzzle_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};		
	class A6_Windtalker_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="Windtalker AMF .408 Suppressor";
		descriptionShort="A High Caliber Suppressor for Weapons that have calibers with .408 CheyTac.";
		model="A6_Weapons\Attachments\Suppressors\EliteIronWindtalkerSuppressor.p3d";
		inventorySlot = "weaponmuzzle408";
		rotationFlags = 17;
		reversed = 0;
		weight = 800;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.25,1.25,1.25};
		itemSize[]={4,1};
		soundIndex = 1;
		repairableWithKits[] = {1};
		repairCosts[] = {50.0};
		hiddenSelections[]= {"camo_windtalker"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\camo_windtalker_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\camo_windtalker.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\camo_windtalker.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\camo_windtalker.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\camo_windtalker_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\camo_windtalker_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\camo_windtalker_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};	
	class A6_Windtalker_Suppressor_Tan: A6_Windtalker_Suppressor
	{
		hiddenSelections[]= {"camo_windtalker"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\camo_windtalker_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\camo_windtalker.rvmat"};
	};
	class A6_QDL_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="QDL Suppressor";
		descriptionShort="A Suppressor for .50 Caliber Rifles.";
		model="A6_Weapons\Attachments\Suppressors\QDLSuppressor.p3d";
		inventorySlot = "QDLSuppressor";
		rotationFlags = 17;
		reversed = 0;
		weight = 1500;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.35,1.35,1.35};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[]={5,1};
		soundIndex = 1;
		repairableWithKits[] = {1};
		repairCosts[] = {50.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\Data\qdl_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\Data\qdl_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\Data\qdl_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\Data\qdl_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\Data\qdl_suppressor_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_OspreySuppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "SilencerCo Osprey 45";
		descriptionShort = "The SilencerCo Osprey 45 is a lightweight multi caliber suppressor built for centerfire pistols.";
		model = "A6_Weapons\SMGs\Vector\Vector_Suppressor.p3d";
		inventorySlot[] = {"pistolMuzzle","MP7A2Suppressor"};
		rotationFlags = 17;
		reversed = 0;
		weight = 400;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {3,1};
		soundIndex = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\Vector\data\camo_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\Vector\data\camo_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\Vector\data\camo_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\Vector\data\camo_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\Vector\data\camo_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_MP7A2Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "MP7A2 Suppressor";
		descriptionShort = "Suppressor made for the MP7A2.";
		model = "A6_Weapons\SMGs\MP7A2\MP7A2Suppressor.p3d";
		inventorySlot = "MP7A2Suppressor";
		rotationFlags = 17;
		reversed = 0;
		weight = 400;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.1,1.1,1.1};
		itemSize[]={3,1};
		soundIndex = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[]= 
					{
						{1.0,{"A6_Weapons\SMGs\MP7A2\data\suppressor.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP7A2\data\suppressor.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP7A2\data\suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP7A2\data\suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP7A2\data\suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_9A91_Suppressor: ItemSuppressor 
	{
		scope = 2;
		displayName = "9A-91 Suppressor";
		descriptionShort = "Suppressor specially designed for the 9A-91. Allows you to attach a flashlight & foregrip when attached to the 9A-91.";
		inventorySlot = "Suppressor9A91";
		model = "A6_Weapons\SMGs\9A91\Suppressor9A91.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 600;
		dispersionModifier = -0.001;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.25,1.25,1.25};
		aimSpeedModifier[]={1.25,1.25,1.25};
		itemSize[] = {4,1};
		soundIndex = 1;
		hasRailFunctionality = 1;
		CanAcceptGrip = 1;
		CanAcceptLeftFlashlight = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\9A91\data\camo_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\9A91\data\camo_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\9A91\data\camo_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\9A91\data\camo_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\9A91\data\camo_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class A6_HoneyBadger_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "HoneyBadger Suppressor";
		descriptionShort = "Suppressor designed specifically for the AAC HoneyBadger. Long-lasting.";
		model = "A6_Weapons\Attachments\Suppressors\HoneyBadgerSuppressor.p3d";
		inventorySlot = "HoneyBadgerSuppressor";
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {3,1};
		soundIndex = 1;
		hiddenSelections[]= {"camo_upper"};
		hiddenSelectionsTextures[]= {"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\SMGs\HoneyBadger\data\camo_upper.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\HoneyBadger\data\camo_upper.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\HoneyBadger\data\camo_upper.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\HoneyBadger\data\camo_upper_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_SLX68_Suppressor: A6_UniversalSuppressor_Base
	{
		scope = 2;
		displayName = "SLX68-MG-QD 6.8x51 Suppressor";
		descriptionShort="SLX68-MG-QD 6.8x51 Suppressor. Suppressor designed special for the MCX Spear Weapon.";
		model = "A6_Weapons\Attachments\Suppressors\SLX68Supressor.p3d";
		inventorySlot[] = {"weaponMuzzle277"};
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.2,1.2,1.2};
		aimSpeedModifier[]={1.15,1.15,1.15};
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		itemSize[] = {3,1};
		soundIndex = 1;
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 15;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\camo_suppressor_SLX68.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\camo_suppressor_SLX68.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\camo_suppressor_SLX68_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\camo_suppressor_SLX68_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\camo_suppressor_SLX68_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Salvo12_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "Salvo 12 Suppressor";
		descriptionShort = "Suppressor designed Compatible Shotguns. Long-lasting with decreased dispresion for tigher pellet spreads.";
		model = "A6_Weapons\Attachments\Suppressors\ShotgunSuppressor.p3d";
		inventorySlot = "weaponMuzzleShotgun";
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.3,1.3,1.3};
		itemSize[] = {3,1};
		soundIndex = 1;
		hiddenSelections[]= {"suppressor"};
		hiddenSelectionsTextures[]= {"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Weapons\Attachments\Suppressors\data\ShotgunSuppressor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_DeadAirMask22_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "Dead Air Mask .22LR Suppressor";
		descriptionShort = "Suppressor designed .22 LR Calibers. Long-lasting with great performance.";
		model = "A6_Weapons\Attachments\Suppressors\DeadAirMask22Suppressor.p3d";
		inventorySlot = "22LRSuppressor";
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		barrelArmor = 3000;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={1.15,1.15,1.15};
		itemSize[] = {2,1};
		soundIndex = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\data\camo_22_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\data\camo_22_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\data\camo_22_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\data\camo_22_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\data\camo_22_suppressor_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class A6_ASH12_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="ASH-12 Suppressor";
		descriptionShort="A Suppressor for the ASH-12 Rifle.";
		model="A6_Weapons\Attachments\Suppressors\Ash12_Suppressor.p3d";
		inventorySlot = "ASH12Suppressor";
		rotationFlags = 17;
		reversed = 0;
		weight = 1500;
		dispersionModifier = -0.0005;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.7,0.7,0.7};
		swayModifier[] = {1.15,1.15,1.15};
		aimSpeedModifier[]={1.2,1.2,1.2};
		itemSize[]={3,1};
		soundIndex = 1;
		repairableWithKits[] = {1};
		repairCosts[] = {50.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 12;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Suppressors\Data\camo_ash12_suppressor.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Suppressors\Data\camo_ash12_suppressor.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Suppressors\Data\camo_ash12_suppressor_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Suppressors\Data\camo_ash12_suppressor_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Suppressors\Data\camo_ash12_suppressor_destruct.rvmat"}}
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
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySLX68Supressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzle277";
		model = "A6_Weapons\Attachments\Suppressors\SLX68Supressor.p3d";
	};
	class ProxyShotgunSuppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleShotgun";
		model = "A6_Weapons\Attachments\Suppressors\ShotgunSuppressor.p3d";
	};
	class Proxyuniversalsuppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "suppressorImpro";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor.p3d";
	};
	class Proxyuniversalsuppressor2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "suppressorImpro";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor2.p3d";
	};
	class Proxyuniversalsuppressor3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "suppressorImpro";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor3.p3d";
	};
	class Proxyuniversalsuppressor4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzle86";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor4.p3d";
	};
	class Proxyuniversalsuppressor5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzle308";
		model = "A6_Weapons\Attachments\Suppressors\universalsuppressor5.p3d";
	};
	class ProxyHXQD_338_TI_Suppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot="weaponmuzzle338";
		model="A6_Weapons\Attachments\Suppressors\HXQD_338_TI_Suppressor.p3d";
	};
	class ProxyEliteIronWindTalkerSuppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot="weaponmuzzle408";
		model="A6_Weapons\Attachments\Suppressors\EliteIronWindtalkerSuppressor.p3d";
	};
	class ProxyQDLSuppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot="QDLSuppressor";
		model = "A6_Weapons\Attachments\Suppressors\QDLSuppressor.p3d";
	};	
	class ProxyVectorSuppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "pistolMuzzle";
		model = "A6_Weapons\SMGs\Vector\Vector_Suppressor.p3d";
	};
	class ProxyMP7A2Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "MP7A2Suppressor";
		model = "A6_Weapons\SMGs\MP7A2\MP7A2Suppressor.p3d";
	};
	class ProxySuppressor9A91: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "Suppressor9A91";
		model = "A6_Weapons\SMGs\9A91\Suppressor9A91.p3d";
	};
	class ProxyPSB1_Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponMuzzleAK";
		model = "A6_Weapons\Rifles\AK\Parts\PSB1_Suppressor.p3d";
	};
	class ProxyHoneyBadgerSuppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "HoneyBadgerSuppressor";
		model = "A6_Weapons\Attachments\Suppressors\HoneyBadgerSuppressor.p3d";
	};
	class ProxyDeadAirMask22Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "22LRSuppressor";
		model = "A6_Weapons\Attachments\Suppressors\DeadAirMask22Suppressor.p3d";
	};
	class ProxyAsh12_Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "ASH12Suppressor";
		model="A6_Weapons\Attachments\Suppressors\Ash12_Suppressor.p3d";
	};
	class ProxyAI_338_LM_Tactical_Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponmuzzle338";
		model="A6_Weapons\Attachments\Suppressors\AI_338_LM_Tactical_Suppressor.p3d";
	};
	class ProxyTBA_Ultra5_Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "suppressorImpro";
		model = "A6_Weapons\Attachments\Suppressors\TBA_Ultra5_Suppressor.p3d";
	};
};
class CfgSlots
{
	class Slot_weaponMuzzle277
	{
		name="weaponMuzzle277";
		displayName="6.8 Muzzle";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponMuzzle277";
	};
	class Slot_weaponMuzzleSKS
	{
		name="weaponMuzzleSKS";
		displayName="SKS Muzzle";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponMuzzleSKS";
	};
	class Slot_weaponMuzzleShotgun
	{
		name="weaponMuzzleShotgun";
		displayName="Shotgun Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponMuzzleShotgun";
	};
	class Slot_weaponMuzzleFAL
	{
		name="weaponMuzzleFAL";
		displayName="FAL Muzzle";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponMuzzleFAL";
	};
	class Slot_weaponMuzzle308
	{
		name="weaponMuzzle308";
		displayName=".308 Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponMuzzle308";
	};
	class Slot_weaponMuzzle86
	{
		name="weaponMuzzle86";
		displayName="8.6 Blackout Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponMuzzle86";
	};
	class Slot_weaponmuzzle338
	{
		name="weaponmuzzle338";
		displayName=".338 Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponmuzzle338";
	};
	class Slot_weaponmuzzle408
	{
		name="weaponmuzzle408";
		displayName=".408 Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="weaponmuzzle408";
	};
	class Slot_QDLSuppressor
	{
		name="QDLSuppressor";
		displayName=".50 Caliber Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="QDLSuppressor";
	};
	class Slot_MP7A2Suppressor
	{
		name = "MP7A2Suppressor";
		displayName = "MP7A2 Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="MP7A2Suppressor";
	};
	class Slot_Suppressor9A91
	{
		name = "Suppressor9A91";
		displayName = "9A-91 Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="Suppressor9A91";
	};
	class Slot_HoneyBadgerSuppressor
	{
		name = "HoneyBadgerSuppressor";
		displayName = "Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="HoneyBadgerSuppressor";
	};
	class Slot_22LRSuppressor
	{
		name = "22LRSuppressor";
		displayName = "Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="22LRSuppressor";
	};
	class Slot_ASH12Suppressor
	{
		name = "ASH12Suppressor";
		displayName = "Suppressor";
		ghostIcon = "set:dayz_inventory image:supressor";
		inventorySlot="ASH12Suppressor";
	};
};
