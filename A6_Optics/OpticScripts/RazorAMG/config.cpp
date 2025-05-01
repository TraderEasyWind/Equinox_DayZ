class CfgPatches
{
	class A6_RAZOR_AMG_Optic
	{
		units[] = {"A6_RAZOR_AMG_Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics_NVReticle;
	class A6_RAZOR_AMG_Optic: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "RAZOR AMG UH-1";
		descriptionShort = "RAZOR AMG UH-1 Optic 1x Magnification. Reticle can be changed from Red to Green.";
		model = "A6_Optics\Optics\RazorAMG\razoramgoptic.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 500;
		itemSize[] = {2,1};
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
		aimSpeedModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\RazorAMG\data\RazorAMG.rvmat"}},
						{0.7,{"A6_Optics\Optics\RazorAMG\data\RazorAMG.rvmat"}},
						{0.5,{"A6_Optics\Optics\RazorAMG\data\RazorAMG_damage.rvmat"}},
						{0.3,{"A6_Optics\Optics\RazorAMG\data\RazorAMG_damage.rvmat"}},
						{0.0,{"A6_Optics\Optics\RazorAMG\data\RazorAMG_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 200;
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[]={0,0,0,0};
            PPMaskProperties[]={0,0,0,0};
            PPLensProperties[]={0,0,0,0};
            PPBlurProperties=0;
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