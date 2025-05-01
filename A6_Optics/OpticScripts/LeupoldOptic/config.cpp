class CfgPatches
{
	class A6_LeupoldOptic
	{
		units[] = 
		{
			"A6_LeupoldOptic",
			"A6_LeupoldOptic_DocterOptic_MRDMount",
			"A6_LeupoldOptic_SigSauerRomeoXLOptic",
			"A6_LeupoldOptic_RMROptic_Black_MRDMount",
			"A6_LeupoldOptic_RMROptic_Tan_MRDMount",
			"A6_LeupoldOptic_SigSauerRomeo2_Optic_MRDMount",
			"A6_LeupoldOptic_SigSauerRomeo2_Optic_Tan_MRDMount"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOptics;
	class A6_ItemOptics_NVReticle;
	class Preload2DOptic_Leupold: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
	};
	class A6_LeupoldOptic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Leupold VX-5HD 4-20x52mm";
		descriptionShort = "Leupold VX-5HD 4-20x52mm. x20 Magnification. Small Optics can be mounted to the top. Remove any batteries from the optics to attach a top optic.";
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldOptic.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 900;
		itemSize[] = {4,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		OpticName = "LeupoldOptic";
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
			preloadOpticType = "Preload2DOptic_Leupold";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/14","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.45,0.15}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0.5,0.2,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0.5; // this amount of blur around the mask
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
	class A6_LeupoldOptic_DocterOptic_MRDMount: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "Leupold VX-5HD 4 4-20x52mm";
		descriptionShort = "Leupold VX-5HD 4-20x52mm. x20 Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldOptic_Docter.p3d";
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 4;
		reversed = 0;
		weight = 1050;
		itemSize[] = {4,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "LeupoldOptic";
		SubOpticName = "DocterOptic_MRDMount";
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
			preloadOpticType = "Preload2DOptic_Leupold";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/14","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.45,0.15}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0.5,0.2,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0.5; // this amount of blur around the mask
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
	class A6_LeupoldOptic_SigSauerRomeoXLOptic: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "Leupold VX-5HD 4 4-20x52mm";
		descriptionShort = "Leupold VX-5HD 4-20x52mm. x20 Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldOptic_Romeo.p3d";
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 4;
		reversed = 0;
		weight = 1050;
		itemSize[] = {4,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "LeupoldOptic";
		SubOpticName = "SigSauerRomeoXLOptic";
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
			preloadOpticType = "Preload2DOptic_Leupold";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/14","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.45,0.15}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0.5,0.2,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0.5; // this amount of blur around the mask
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
	class A6_LeupoldOptic_RMROptic_Black_MRDMount: A6_ItemOptics
	{
		scope = 2;
		displayName = "Leupold VX-5HD 4 4-20x52mm";
		descriptionShort = "Leupold VX-5HD 4-20x52mm. x20 Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldOptic_RMR.p3d";
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 4;
		reversed = 0;
		weight = 1050;
		itemSize[] = {4,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "LeupoldOptic";
		SubOpticName = "RMROptic_Black_MRDMount";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa"};
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
			preloadOpticType = "Preload2DOptic_Leupold";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/14","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.45,0.15}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0.5,0.2,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0.5; // this amount of blur around the mask
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
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
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_small_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
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
	class A6_LeupoldOptic_RMROptic_Tan_MRDMount: A6_LeupoldOptic_RMROptic_Black_MRDMount
	{
		MainOpticName = "LeupoldOptic";
		SubOpticName = "RMROptic_Tan_MRDMount";
		hiddenSelections[] = {"reddot","camo_rmr"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_tan_co.paa"};
	};	
	class A6_LeupoldOptic_SigSauerRomeo2_Optic_MRDMount: A6_ItemOptics
	{
		scope = 2;
		displayName = "Leupold VX-5HD 4 4-20x52mm";
		descriptionShort = "Leupold VX-5HD 4-20x52mm. x20 Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldOptic_Romeo2.p3d";
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 4;
		reversed = 0;
		weight = 1050;
		itemSize[] = {4,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "LeupoldOptic";
		SubOpticName = "SigSauerRomeo2_Optic_MRDMount";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa"};
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
			preloadOpticType = "Preload2DOptic_Leupold";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/14","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.45,0.15}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0.5,0.2,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0.5; // this amount of blur around the mask
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
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
	class A6_LeupoldOptic_SigSauerRomeo2_Optic_Tan_MRDMount: A6_LeupoldOptic_SigSauerRomeo2_Optic_MRDMount
	{
		MainOpticName = "LeupoldOptic";
		SubOpticName = "SigSauerRomeo2_Optic_Tan_MRDMount";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa"};
	};	
	class A6_LeupoldOptic_SigSauerRomeo0_Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Leupold VX-5HD 4 4-20x52mm";
		descriptionShort = "Leupold VX-5HD 4-20x52mm. x20 Magnification. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\LeupoldOptic\LeupoldOptic_Romeo0.p3d";
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 4;
		reversed = 0;
		weight = 1050;
		itemSize[] = {4,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		MainOpticName = "LeupoldOptic";
		SubOpticName = "SigSauerRomeo0_Optic";
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldOptic\data\LeupoldOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\LeupoldOptic\LeupoldReticle.p3d";
			preloadOpticType = "Preload2DOptic_Leupold";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/14","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.45,0.15}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0.5,0.2,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0.5; // this amount of blur around the mask
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
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
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
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
