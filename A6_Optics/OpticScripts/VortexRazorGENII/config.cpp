class CfgPatches
{
	class A6_VortexRazorGenII
	{
		units[] = {"A6_VortexRazorGenIIOptic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOptics;
	class A6_VortexRazorGenIIOptic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Vortex 1-6x24mm Razor HD Gen II";
		descriptionShort = "Perfect for the AR platform, the Razor HD Gen II 1-6x24 is a top-tier optical solution for short to medium-range tactical applications.";
		model = "A6_Optics\Optics\VortexRazorGENII\VortexRazorGenII.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 500;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		aimSpeedModifier[]={0.94,0.94,0.94};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
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
			opticsZoomMin = "0.5236/1";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.5236/1";
			discretefov[] = {"0.5236/1","0.5236/2","0.3926/3","0.3926/6"};
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
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
};
