class CfgPatches
{
	class A6_AcogOptic
	{
		units[] = 
		{
			"A6_AcogOptic_Black",
			"A6_AcogOptic_Tan",
			"A6_AcogOptic_Black_RMROptic_Black",
			"A6_AcogOptic_Black_RMROptic_Tan",
			"A6_AcogOptic_Tan_RMROptic_Tan",
			"A6_AcogOptic_Tan_RMROptic_Black",
			"A6_AcogOptic_Black_SigSauerRomeo2_Optic",
			"A6_AcogOptic_Black_SigSauerRomeo2_Optic_Tan",
			"A6_AcogOptic_Tan_SigSauerRomeo2_Optic_Tan",
			"A6_AcogOptic_Tan_SigSauerRomeo2_Optic",
			"A6_AcogOptic_Black_DocterOptic",
			"A6_AcogOptic_Tan_DocterOptic"
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
	class A6_AcogOptic_Base: A6_ItemOptics
	{
		scope = 0;
		displayName = "Trijicon ACOG 4x32";
		descriptionShort = "The Advanced Combat Optical Gunsight (ACOG) is a series of prismatic telescopic sights manufactured by Trijicon. The ACOG was originally designed to be used on the M16 rifle and M4 carbine. MRD Optics (Pistol Optics) can be mounted to the top of the Acog. Remove any batteries from the optics to attach a top optic.";
		model = "A6_Optics\Optics\AcogOptic\acog_new.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 500;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		OpticName = "AcogOptic";
		hiddenSelections[] = {"reddot","rmr_mount","camo_rmr","camo_rmr_lens","camo_acog"};
		hiddenSelectionsTextures[] = {"","","","","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","","","","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}}
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
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.3,0.025};
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
	class A6_AcogOptic_Black: A6_AcogOptic_Base
	{
		scope = 2;
		OpticName = "AcogOptic_Black";
		hiddenSelections[] = {"reddot","rmr_mount","camo_rmr","camo_rmr_lens","camo_acog"};
		hiddenSelectionsTextures[] = {"","","","","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","","","","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_Tan: A6_AcogOptic_Base
	{
		scope = 2;
		OpticName = "AcogOptic_Tan";
		hiddenSelections[] = {"reddot","rmr_mount","camo_rmr","camo_rmr_lens","camo_acog"};
		hiddenSelectionsTextures[] = {"","","","","A6_Optics\Optics\AcogOptic\data\camo_acog_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","","","","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_RMROptic_Base: A6_ItemOptics
	{
		scope = 0;
		displayName = "Trijicon ACOG 4x32";
		descriptionShort = "The Advanced Combat Optical Gunsight (ACOG) is a series of prismatic telescopic sights manufactured by Trijicon. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\AcogOptic\acog_new.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 500;
		itemSize[] = {2,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hiddenSelections[] = {"reddot","camo_rmr","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}}
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
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.3,0.025};
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
	class A6_AcogOptic_Black_RMROptic_Black: A6_AcogOptic_RMROptic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Black";
		SubOpticName = "RMROptic_Black";
		hiddenSelections[] = {"reddot","camo_rmr","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_Black_RMROptic_Tan: A6_AcogOptic_RMROptic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Black";
		SubOpticName = "RMROptic_Tan";
		hiddenSelections[] = {"reddot","camo_rmr","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_tan_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_Tan_RMROptic_Tan: A6_AcogOptic_RMROptic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Tan";
		SubOpticName = "RMROptic_Tan";
		hiddenSelections[] = {"reddot","camo_rmr","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_tan_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};	
	class A6_AcogOptic_Tan_RMROptic_Black: A6_AcogOptic_RMROptic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Tan";
		SubOpticName = "RMROptic_Black";
		hiddenSelections[] = {"reddot","camo_rmr","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\RMROptic\data\camo_rmr.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_SigSauerRomeo2_Optic_Base: A6_ItemOptics
	{
		scope = 0;
		displayName = "Trijicon ACOG 4x32";
		descriptionShort = "The Advanced Combat Optical Gunsight (ACOG) is a series of prismatic telescopic sights manufactured by Trijicon. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\AcogOptic\acog_romeo2.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 500;
		itemSize[] = {2,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hiddenSelections[] = {"reddot","camo_sig_romeo2","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}}
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
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.3,0.025};
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
	class A6_AcogOptic_Black_SigSauerRomeo2_Optic: A6_AcogOptic_SigSauerRomeo2_Optic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Black";
		SubOpticName = "SigSauerRomeo2_Optic";
		hiddenSelections[] = {"reddot","camo_sig_romeo2","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_Black_SigSauerRomeo2_Optic_Tan: A6_AcogOptic_SigSauerRomeo2_Optic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Black";
		SubOpticName = "SigSauerRomeo2_Optic_Tan";
		hiddenSelections[] = {"reddot","camo_sig_romeo2","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_Tan_SigSauerRomeo2_Optic_Tan: A6_AcogOptic_SigSauerRomeo2_Optic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Tan";
		SubOpticName = "SigSauerRomeo2_Optic_Tan";
		hiddenSelections[] = {"reddot","camo_sig_romeo2","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};	
	class A6_AcogOptic_Tan_SigSauerRomeo2_Optic: A6_AcogOptic_SigSauerRomeo2_Optic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Tan";
		SubOpticName = "SigSauerRomeo2_Optic";
		hiddenSelections[] = {"reddot","camo_sig_romeo2","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa","A6_Optics\Optics\AcogOptic\data\camo_acog_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};	
	class A6_AcogOptic_DocterOptic_Base: A6_ItemOptics_NVReticle
	{
		scope = 0;
		displayName = "Trijicon ACOG 4x32";
		descriptionShort = "The Advanced Combat Optical Gunsight (ACOG) is a series of prismatic telescopic sights manufactured by Trijicon. Remove any batteries from the optic and use a screwdriver to remove the top optic.";
		model = "A6_Optics\Optics\AcogOptic\acog_doctor.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 500;
		itemSize[] = {2,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hiddenSelections[] = {"reticle","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"}}
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
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.3,0.025};
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
	class A6_AcogOptic_Black_DocterOptic: A6_AcogOptic_DocterOptic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Black";
		SubOpticName = "DocterOptic";
		hiddenSelections[] = {"reticle","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\AcogOptic\data\camo_acog_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};
	class A6_AcogOptic_Tan_DocterOptic: A6_AcogOptic_DocterOptic_Base
	{
		scope = 2;
		MainOpticName = "AcogOptic_Tan";
		SubOpticName = "DocterOptic";
		hiddenSelections[] = {"reticle","camo_acog"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\AcogOptic\data\camo_acog_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Optics\Optics\AcogOptic\data\camo_acog.rvmat"};
	};	
};
