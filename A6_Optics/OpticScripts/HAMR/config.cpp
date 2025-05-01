class CfgPatches
{
	class A6_HAMR_Optic
	{
		units[] = {"A6_HAMR_Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_HAMR_Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Leupold Mark 4 HAMR 4x24mm";
		descriptionShort = "Leupold Mark 4 HAMR (High Accuracy Multi-Range Optic).";
		model = "A6_Optics\Optics\HAMR\hamr.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 500;
		itemSize[] = {2,2};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\HAMR\data\hamr.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\HAMR\data\hamr_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\HAMR\data\hamr_destruct.rvmat"}}
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
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\ReticleColors\redreticle_co.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
			opticsZoomMin = "0.5236/4";
			opticsZoomMax = "0.5236/4";
			opticsZoomInit = "0.5236/4";
			discretefov[] = {"0.5236/4"};
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.26,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties=0.15;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
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
};
