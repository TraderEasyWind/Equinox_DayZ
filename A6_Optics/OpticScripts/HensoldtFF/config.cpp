class CfgPatches
{
	class A6_HensoldtFF_Optic
	{
		units[] = {"A6_HensoldtFF_Optic"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
		weapons[] = {};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOpticsLongScope;
	class A6_HensoldtFF_Optic: A6_ItemOpticsLongScope
	{
		scope = 2;
		displayName = "Hensoldt FF 4-16x56 34mm Scope";
		descriptionShort = "Hensoldt FF 4-16x56 telescopic sight was developed to deliver maximum performance and high adjustment ranges while maintaining a short optical system. Up to 12x magnification.";
		model = "A6_Optics\Optics\HensoldtFF\HensoldtFFOptic.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		ContinuousActions[] = {236};
		weight = 800;
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
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\HensoldtFF\data\camo_scope.rvmat","A6_Optics\Optics\HensoldtFF\data\camo_mount.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\HensoldtFF\data\camo_scope_damage.rvmat","A6_Optics\Optics\HensoldtFF\data\camo_mount_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\HensoldtFF\data\camo_scope_destruct.rvmat","A6_Optics\Optics\HensoldtFF\data\camo_mount_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "A6_Optics\Optics\HensoldtFF\HensoldtFFReticle.p3d";
			preloadOpticType = "Preload2DOptic_HensoldtFF_Optic";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/12";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/8","0.3926/12"};
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
	class Preload2DOptic_HensoldtFF_Optic: Inventory_Base
	{
		scope = 0;
		model = "A6_Optics\Optics\HensoldtFF\HensoldtFFReticle.p3d";
	};
};
