class CfgPatches
{
	class A6_NFATACRF1_Optic
	{
		units[] = {"A6_NFATACRF1_Optic"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
		weapons[] = {};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOpticsLongScope;
	class A6_NFATACRF1_Optic: A6_ItemOpticsLongScope
	{
		scope = 2;
		displayName = "NF ATACR - 7-35x56mm F1 Scope";
		descriptionShort = "The Nightforce ATACR 7-35x56mm F1 rifle scope takes accurate long range shooting to a whole new level. Up to 35x magnification.";
		model = "A6_Optics\Optics\NFATACRF1\NFATACRF1.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		ContinuousActions[] = {236};
		weight = 1000;
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
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\NFATACRF1\data\NFATACRF1Optic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\NFATACRF1\data\NFATACRF1Optic_damaged.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\NFATACRF1\data\NFATACRF1Optic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\NFATACRF1\NFATACRF1Reticle.p3d";
			preloadOpticType = "Preload2DOptic_NFATACRF1";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/7";
			opticsZoomMax = "0.3926/35";
			opticsZoomInit = "0.3926/7";
			discretefov[] = {"0.3926/7","0.3926/14","0.3926/21","0.3926/28","0.3926/35"};
			discreteInitIndex = 0;
			distanceZoomMin = 200;
			distanceZoomMax = 1500;
			discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
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
	class Preload2DOptic_NFATACRF1: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\NFATACRF1\NFATACRF1Reticle.p3d";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyNFATACRF1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "A6_Optics\Optics\NFATACRF1\NFATACRF1.p3d";
	};
};	

