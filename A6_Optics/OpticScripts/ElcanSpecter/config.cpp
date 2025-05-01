class CfgPatches
{
	class A6_ElcanSpecterOptic
	{
		units[] = {"A6_ElcanSpecterOptic","A6_ElcanSpecterOptic_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_ElcanSpecterOptic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Elcan SpecterDR 1-4x32mm Optic";
		descriptionShort = "The SpecterDR 1x/4x offers the best single solution for both Medium Range and CQB engagements and is designed to withstand the rigors of modern professional use.";
		model = "A6_Optics\Optics\ElcanSpecter\elcanspecter.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 900;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		IsOptic = 1;
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
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\ElcanSpecter\data\specter.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\ElcanSpecter\data\specter_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\ElcanSpecter\data\specter_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsZoomMin = "0.3926/1.1";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/1.1";
			discretefov[] = {"0.3926/1.1","0.3926/4"};
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0};
			PPLensProperties[] = {0,0,0,0};
			PPBlurProperties = 0;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0};
			PPLensProperties[] = {0,0,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {0,0,0,0,0,0};
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
	class A6_ElcanSpecterOptic_Tan: A6_ElcanSpecterOptic
	{
		scope = 2;
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"A6_Optics\Optics\ElcanSpecter\data\specter_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"A6_Optics\Optics\ElcanSpecter\data\specter.rvmat"};
	};
};
