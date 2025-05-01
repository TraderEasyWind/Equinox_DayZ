class CfgPatches
{
	class A6_SigSauerTango6T
	{
		units[] = 
		{
			"A6_SigSauerTango6T_Optic",
			"A6_SigSauerTango6T_Tan_Optic"
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
	class A6_SigSauerTango6T_Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "TANGO6T 1-6X24mm Optic";
		descriptionShort = "The TANGO6T is a rugged and well-built low power variable optic. This model features a 1x to 6x magnification. This rifle scope is ideal for short and medium distances, as well as for backcountry hunting. Manufactured by SIG Sauer.";
		model = "A6_Optics\Optics\SigSauerTango6T\Tango6TOptic.p3d";
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
		aimSpeedModifier[]={0.93,0.93,0.93};
		hiddenSelections[]= {"tango"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\SigSauerTango6T\data\tango6t_black_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\SigSauerTango6T\data\tango6t.rvmat"};
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
	class A6_SigSauerTango6T_Tan_Optic: A6_SigSauerTango6T_Optic
	{
		scope = 2;
		hiddenSelections[]= {"tango"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\SigSauerTango6T\data\tango6t_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\SigSauerTango6T\data\tango6t.rvmat"};
	};	
};
