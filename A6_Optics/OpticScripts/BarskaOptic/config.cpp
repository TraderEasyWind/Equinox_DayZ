class CfgPatches
{
	class A6_BarskaOptic
	{
		units[] = 
		{
			"A6_BarskaOptic",
			"A6_BarskaOptic_Tan"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOptics_NVReticle;
	class A6_BarskaOptic: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "Barska SWAT-AR HRS 1-8x24mm Scope";
		descriptionShort = "Barska SWAT-AR HRS 1-8x24mm Illuminated Scope. 1-8x Magnification. Can Switch from Red & Green Reticles. Remove the Battery for a standard black reticle.";
		model = "A6_Optics\Optics\BarskaOptic\BarskaOptic.p3d";
		animClass = "Binoculars";
		attachments[] = {"BatteryD"};
		rotationFlags = 4;
		reversed = 0;
		weight = 600;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		IsScope = 1;
		aimSpeedModifier[]={0.95,0.95,0.95};
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {"A6_Optics\Optics\OpticReticleTextures\BarksaSwat_Reticle_ca.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\attachments\optics\data\nodiffuse.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\BarskaOptic\data\BarskaOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\BarskaOptic\data\BarskaOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\BarskaOptic\data\BarskaOptic_destruct.rvmat"}}
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
			opticsZoomMax = "0.5236/8";
			opticsZoomInit = "0.5236/1";
			discretefov[] = {"0.5236/1","0.5236/2","0.5236/4","0.5236/8"};
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0}; // x,y,size,bleedout of blur --> 0.0 equals hard line, higher values start to soften that hard line
			PPLensProperties[] = {0,0,0,0}; //distort,chromaabber, x,y
			PPBlurProperties = 0; // this amount of blur around the mask
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
	class A6_BarskaOptic_Tan: A6_BarskaOptic
	{
		scope = 2;
		hiddenSelections[]= {"reticle","camo"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\OpticReticleTextures\BarksaSwat_Reticle_ca.paa","A6_Optics\Optics\BarskaOptic\data\BarskaOptic_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"DZ\weapons\attachments\optics\data\nodiffuse.rvmat","A6_Optics\Optics\BarskaOptic\data\BarskaOptic.rvmat"};
	};
};
