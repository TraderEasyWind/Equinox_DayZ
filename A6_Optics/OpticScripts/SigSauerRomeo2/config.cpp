class CfgPatches
{
	class A6_SigSauerRomeo2_Optic
	{
		units[]=
		{
			"A6_SigSauerRomeo2_Optic",
			"A6_SigSauerRomeo2_Optic_Tan",
			"A6_SigSauerRomeo2_Optic_MRDMount",
			"A6_SigSauerRomeo2_Optic_Tan_MRDMount"
		};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_SigSauerRomeo2_Optic_Base: A6_ItemOptics
	{
		scope=0;
		displayName="ROMEO2 1x30mm";
		descriptionShort="ROMEO2 1x30mm Optic. Can be attached to select Pistols. Remove any batteries from the optic and combine with a MRS Picatinny Mounting Plate to attach to Picatinny setups.";
		model="A6_Optics\Optics\SigSauerRomeo2\SigSauerRomeo2.p3d";
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
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		aimSpeedModifier[]={0.9,0.9,0.9};
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
	class A6_SigSauerRomeo2_Optic: A6_SigSauerRomeo2_Optic_Base
	{
		scope = 2;
		OpticName = "SigSauerRomeo2_Optic";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_SigSauerRomeo2_Optic_Tan: A6_SigSauerRomeo2_Optic_Base
	{
		scope = 2;
		OpticName = "SigSauerRomeo2_Optic_Tan";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_SigSauerRomeo2_Optic_MRDMount_Base: A6_ItemOptics
	{
		scope=0;
		displayName="ROMEO2 1x30mm RMR MRD Plated";
		descriptionShort="ROMEO2 1x30mm Optic mounted to a RMR Picatinny Plate. Can be combined with optics that have top mounts, remove any batteries before doing so. Remove any batteries from the optic and use a screwdriver to remove the mounting plate.";
		model="A6_Optics\Optics\SigSauerRomeo2\SigSauerRomeo2_Mount.p3d";
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
		hiddenSelections[] = {"reddot","camo_sig_romeo2","hide_cover","hide_glass"};
		aimSpeedModifier[]={0.9,0.9,0.9};
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
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};	
	class A6_SigSauerRomeo2_Optic_MRDMount: A6_SigSauerRomeo2_Optic_MRDMount_Base
	{
		scope = 2;
		OpticName = "SigSauerRomeo2_Optic_MRDMount";
		MountName = "MRDMount";
		pistolOpticName = "SigSauerRomeo2_Optic";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_destruct.rvmat"}}
					};
				};
			};
		};
	};	
	class A6_SigSauerRomeo2_Optic_Tan_MRDMount: A6_SigSauerRomeo2_Optic_MRDMount_Base
	{
		scope = 2;
		OpticName = "SigSauerRomeo2_Optic_Tan_MRDMount";
		MountName = "MRDMount";
		pistolOpticName = "SigSauerRomeo2_Optic_Tan";
		hiddenSelections[] = {"reddot","camo_sig_romeo2"};
		hiddenSelectionsTextures[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_tan_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat",
			"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeo2\data\camo_sig_romeo2_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySigSauerRomeo2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolOptics";
		model="A6_Optics\Optics\SigSauerRomeo2\SigSauerRomeo2.p3d";
	};
	class ProxySigSauerRomeo2_Mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolOptics";
		model="A6_Optics\Optics\SigSauerRomeo2\SigSauerRomeo2_Mount.p3d";
	};
};	