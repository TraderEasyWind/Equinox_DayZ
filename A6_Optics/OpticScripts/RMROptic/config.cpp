class CfgPatches
{
	class A6_RMROptic
	{
		units[] = {"A6_RMROptic_Black","A6_RMROptic_Tan","A6_RMROptic_Tan_MRDMount","A6_RMROptic_Black_MRDMount"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_RMROptic_Base: A6_ItemOptics
	{
		scope = 0;
		displayName = "Trijicon RMR Type 2";
		descriptionShort = "RMR Type 2 Optic. Can be attached to select Pistols. Remove any batteries from the optic and combine with a MRS Picatinny Mounting Plate to attach to Picatinny setups.";
		model = "A6_Optics\Optics\RMROptic\RMROptic.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		inventorySlot[] = {"pistolOptics","weaponOpticsCrossbow"};
		simulation = "itemoptics";
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","camo_rmr"};
		aimSpeedModifier[]={0.85,0.85,0.85};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 50;
			discreteDistance[] = {25,50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[]={0,0,0,0};
            PPMaskProperties[]={0,0,0,0};
            PPLensProperties[]={0,0,0,0};
            PPBlurProperties=0;
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class A6_RMROptic_Black: A6_RMROptic_Base
	{
		scope = 2;
		OpticName = "RMROptic_Black";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_RMROptic_Tan: A6_RMROptic_Base
	{
		scope = 2;
		OpticName = "RMROptic_Tan";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_RMROptic_MRDMount_Base: A6_ItemOptics
	{
		scope = 0;
		displayName = "Trijicon RMR Type 2 MRD Plated";
		descriptionShort = "RMR Type 2 Optic with a RMR Picatinny Plate. Can be combined with optics that have top mounts, remove any batteries before doing so. Remove any batteries from the optic and use a screwdriver to remove the mounting plate.";
		model = "A6_Optics\Optics\RMROptic\RMROptic_Mount.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		simulation = "itemoptics";
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","camo_rmr"};
		aimSpeedModifier[]={0.85,0.85,0.85};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 50;
			discreteDistance[] = {25,50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[]={0,0,0,0};
            PPMaskProperties[]={0,0,0,0};
            PPLensProperties[]={0,0,0,0};
            PPBlurProperties=0;
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class A6_RMROptic_Black_MRDMount: A6_RMROptic_MRDMount_Base
	{
		scope = 2;
		OpticName = "RMROptic_Black_MRDMount";
		MountName = "MRDMount";
		pistolOpticName = "RMROptic_Black";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}}
					};
				};
			};
		};
	};
	class A6_RMROptic_Tan_MRDMount: A6_RMROptic_MRDMount_Base
	{
		scope = 2;
		OpticName = "RMROptic_Tan_MRDMount";
		MountName = "MRDMount";
		pistolOpticName = "RMROptic_Tan";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"}}
					};
				};
			};
		};
	};	
};
