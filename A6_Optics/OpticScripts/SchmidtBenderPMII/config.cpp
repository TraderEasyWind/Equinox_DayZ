class CfgPatches
{
	class A6_SchmidtBenderPMII_Optic
	{
		units[] = 
		{
			"A6_SchmidtBenderPMII_Optic",
			"A6_SchmidtBenderPMII_Tan_Optic"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
		weapons[] = {};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOpticsLongScope;
	class A6_SchmidtBenderPMII_Optic: A6_ItemOpticsLongScope
	{
		scope = 2;
		displayName = "Schmidt & Bender 5-25x56mm PM II Scope";
		descriptionShort = "Scope designed for various long-range rifles, with 25x magnification";
		model = "A6_Optics\Optics\SchmidtBenderPMII\SchmidtBenderPMII.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		ContinuousActions[] = {236};
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
		hiddenSelections[]= {"camo_scope"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\SchmidtBenderPMII\SchmidtBenderPMIIReticle.p3d";
			preloadOpticType = "Preload2DOptic_SchmidtBenderPMII";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/5";
			opticsZoomMax = "0.3926/25";
			opticsZoomInit = "0.3926/5";
			discretefov[] = {"0.3926/5","0.3926/10","0.3926/15","0.3926/20","0.3926/25"};
			discreteInitIndex = 0;
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
	class A6_SchmidtBenderPMII_Tan_Optic: A6_SchmidtBenderPMII_Optic
	{
		scope = 2;
		hiddenSelections[]= {"camo_scope"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\SchmidtBenderPMII\data\SchmidtBenderPMII.rvmat"};
	};	
	class Preload2DOptic_SchmidtBenderPMII: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\SchmidtBenderPMII\SchmidtBenderPMIIReticle.p3d";
	};
};
