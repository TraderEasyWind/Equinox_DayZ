class CfgPatches
{
	class A6_VortexRazor
	{
		units[] = {"A6_VortexRazorOptic","A6_VortexRazorOptic_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOptics;
	class A6_VortexRazorOptic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Vortex Razor HD Gen III 1-10x24mm";
		descriptionShort = "Vortex Razor HD Gen III 1-10x24mm. x10 Magnification.";
		model = "A6_Optics\Optics\VortexRazor\VortexRazor.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 900;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		OpticName = "VortexRazor";
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\VortexRazor\data\vortex.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\VortexRazor\data\vortex.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\VortexRazor\data\vortex.rvmat"}}
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
			opticsZoomMin = "0.5236/1";
			opticsZoomMax = "0.5236/10";
			opticsZoomInit = "0.5236/1";
			discretefov[] = {"0.5236/1","0.5236/2","0.5236/4","0.5236/7","0.5236/10"};
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.0,0.0,0.0,0.0};
			PPLensProperties[] = {0.0,0.0,0,0};
			PPBlurProperties=0.0;
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
	class A6_VortexRazorOptic_Tan: A6_VortexRazorOptic
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\VortexRazor\data\vortex_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\VortexRazor\data\vortex.rvmat"};
	};		
};
