class CfgPatches
{
	class A6_XTRIOptic
	{
		units[] = {"A6_XTRI_Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOptics;
	class A6_XTRI_Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "XTR-I 4-12x40mm";
		descriptionShort = "XTR-I 4-12x40mm Scope";
		model = "A6_Optics\Optics\XTRIOptic\Optic_XTRI.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {3,1};
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
						{1.0,{"A6_Optics\Optics\XTRIOptic\data\XTRIOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\XTRIOptic\data\XTRIOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\XTRIOptic\data\XTRIOptic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\XTRIOptic\XTRIReticle.p3d";
			preloadOpticType = "Preload2DOptic_XTRIOptic";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/12";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/12"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
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
	class Preload2DOptic_XTRIOptic: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\XTRIOptic\XTRIReticle.p3d";
	};
};
