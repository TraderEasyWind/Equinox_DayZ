class CfgPatches
{
	class A6_SigSauerBravo4Optic
	{
		units[] = 
		{
			"A6_SigSauerBravo4Optic",
			"A6_SigSauerBravo4Optic_DocterOptic_MRDMount",
			"A6_SigSauerBravo4Optic_SigSauerRomeoXLOptic",
			"A6_SigSauerBravo4Optic_RMROptic_Black_MRDMount",
			"A6_SigSauerBravo4Optic_RMROptic_Tan_MRDMount",
			"A6_SigSauerBravo4Optic_SigSauerRomeo2_Optic_MRDMount",
			"A6_SigSauerBravo4Optic_SigSauerRomeo2_Optic_Tan_MRDMount",
			"A6_SigSauerBravo4Optic_SigSauerRomeo0_Optic"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_ItemOptics_NVReticle;
	class A6_SigSauerBravo4Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "BRAVO4 4x30mm Optic";
		descriptionShort = "BRAVO4 Optic. 4x Magnification. Small Optics can be mounted to the top. Remove any batteries from the optics to attach a top optic.";
		model = "A6_Optics\Optics\SigSauerBravo4\SigSauerBravo4.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 650;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		aimSpeedModifier[]={0.95,0.95,0.95};
		OpticName = "SigSauerBravo4Optic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
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
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67;
			opticsFlare=1;
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			discretefov[]={"0.3926/4"};
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.02};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.3;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class A6_SigSauerBravo4Optic_DocterOptic_MRDMount: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "BRAVO4 4x30mm Optic";
		descriptionShort = "BRAVO4 Optic 4x Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\SigSauerBravo4\SigSauerBravo4Docter.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 800;
		itemSize[] = {2,2};
		attachments[] = {"BatteryD"};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "DocterOptic_MRDMount";
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
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
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67;
			opticsFlare=1;
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			discretefov[]={"0.3926/4"};
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.02};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.3;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0};
			PPLensProperties[] = {0,0,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {0,0,0,0,0,0};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class A6_SigSauerBravo4Optic_SigSauerRomeoXLOptic: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "BRAVO4 4x30mm Optic";
		descriptionShort = "BRAVO4 Optic 4x Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\SigSauerBravo4\SigSauerBravo4Romeo.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 800;
		itemSize[] = {2,2};
		attachments[] = {"BatteryD"};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "SigSauerRomeoXLOptic";
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
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
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67;
			opticsFlare=1;
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			discretefov[]={"0.3926/4"};
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.02};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.3;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0};
			PPLensProperties[] = {0,0,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {0,0,0,0,0,0};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class A6_SigSauerBravo4Optic_RMROptic_Black_MRDMount: A6_ItemOptics
	{
		scope = 2;
		displayName = "BRAVO4 4x30mm Optic";
		descriptionShort = "BRAVO4 Optic 4x Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\SigSauerBravo4\SigSauerBravo4RMR.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 800;
		itemSize[] = {2,2};
		attachments[] = {"BatteryD"};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "RMROptic_Black_MRDMount";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
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
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.02};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.3;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class A6_SigSauerBravo4Optic_RMROptic_Tan_MRDMount: A6_SigSauerBravo4Optic_RMROptic_Black_MRDMount
	{
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "RMROptic_Tan_MRDMount";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat"};
	};
	class A6_SigSauerBravo4Optic_SigSauerRomeo2_Optic_MRDMount: A6_ItemOptics
	{
		scope = 2;
		displayName = "BRAVO4 4x30mm Optic";
		descriptionShort = "BRAVO4 Optic 4x Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\SigSauerBravo4\SigSauerBravo4Romeo2.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 800;
		itemSize[] = {2,2};
		attachments[] = {"BatteryD"};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "SigSauerRomeo2_Optic_MRDMount";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
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
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.02};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.3;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class A6_SigSauerBravo4Optic_SigSauerRomeo2_Optic_Tan_MRDMount: A6_SigSauerBravo4Optic_SigSauerRomeo2_Optic_MRDMount
	{
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "SigSauerRomeo2_Optic_Tan_MRDMount";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"};
	};
	class A6_SigSauerBravo4Optic_SigSauerRomeo0_Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "BRAVO4 4x30mm Optic";
		descriptionShort = "BRAVO4 Optic 4x Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\SigSauerBravo4\SigSauerBravo4Romeo0.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 800;
		itemSize[] = {2,2};
		attachments[] = {"BatteryD"};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "SigSauerBravo4Optic";
		SubOpticName = "SigSauerRomeo0_Optic";
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
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
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[] = {0.5,0.5,0.28,0.02};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.3;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};		
};
