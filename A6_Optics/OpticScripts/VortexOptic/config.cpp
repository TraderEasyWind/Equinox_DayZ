class CfgPatches
{
	class A6_VortexOptic
	{
		units[] = {"A6_VortexOptic","A6_VortexOptic_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOpticsLongScope;
	class A6_VortexOptic: A6_ItemOpticsLongScope
	{
		scope = 2;
		displayName = "Vortex Razor AMG 6-24x50mm";
		descriptionShort = "Vortex Razor AMG with 6-24x50mm zoom.";
		model = "A6_Optics\Optics\VortexOptic\VortexOptic.p3d";
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
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\VortexOptic\data\VortexOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\VortexOptic\data\VortexOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\VortexOptic\data\VortexOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\VortexOptic\VortexReticle.p3d";
			preloadOpticType = "Preload2DOptic_VortexOptic";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur1"};
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/24";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {"0.3926/6","0.3926/12","0.3926/18","0.3926/24"};
			distanceZoomMin = 100;
			distanceZoomMax = 1200;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
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
	class A6_VortexOptic_Tan: A6_VortexOptic
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\VortexOptic\data\VortexOptic_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\VortexOptic\data\VortexOptic.rvmat"};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\VortexOptic\VortexReticle_Tan.p3d";
			preloadOpticType = "Preload2DOptic_VortexOptic_Tan";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur1"};
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/24";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {"0.3926/6","0.3926/12","0.3926/18","0.3926/24"};
			distanceZoomMin = 100;
			distanceZoomMax = 1200;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
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
	class Preload2DOptic_VortexOptic: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\VortexOptic\VortexReticle.p3d";
	};
	class Preload2DOptic_VortexOptic_Tan: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\VortexOptic\VortexReticle_Tan.p3d";
	};
};
