class CfgPatches
{
	class A6_EoTechOptic
	{
		units[] = {"A6_EoTechOptic","A6_EoTechOptic_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics_NVReticle;
	class A6_EoTechOptic_Base: A6_ItemOptics_NVReticle
	{
		scope = 0;
		displayName = "EOTECH HWS EXPS3";
		descriptionShort = "EOTECH HWS EXPS3 Holographic Optic. Reticle can be changed from Red to Green.";
		model = "A6_Optics\Optics\EoTechOptic\EoTechOptic.p3d";
		animClass = "Binoculars";
		simulation = "itemoptics";
		attachments[] = {"BatteryD"};
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 400;
		itemSize[] = {2,1};
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reticle","sight"};
		aimSpeedModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\EoTechOptic\data\EoTechOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\EoTechOptic\data\EoTechOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\EoTechOptic\data\EoTechOptic_destruct.rvmat"}}
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
	class A6_EoTechOptic: A6_EoTechOptic_Base
	{
		scope = 2;
		hiddenSelections[] = {"reticle","sight"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\EoTechOptic\data\EoTechOptic_co.paa"};
	};
	class A6_EoTechOptic_Tan: A6_EoTechOptic_Base
	{
		scope = 2;
		hiddenSelections[] = {"reticle","sight"};
		hiddenSelectionsTextures[] = {"","A6_Optics\Optics\EoTechOptic\data\EoTechOptic_Tan_co.paa"};
	};
};