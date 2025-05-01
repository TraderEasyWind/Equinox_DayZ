class CfgPatches
{
	class SigSauerRomeo5Optic
	{
		units[] = {"A6_SigSauerRomeo5Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics_NVReticle;
	class A6_SigSauerRomeo5Optic: A6_ItemOptics_NVReticle
	{
		scope = 2;
		displayName = "Sig Romeo 5";
		descriptionShort = "Sig Sauer Romeo 5 Optic. Reticle can be changed from Red to Green.";
		model = "A6_Optics\Optics\SigSauerRomeo5\SigSauerRomeo5.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {1,1};
		dispersionModifier = -0.0005;
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
						{1.0,{"A6_Optics\Optics\SigSauerRomeo5\data\sig_sight.rvmat"}},
						{0.7,{"A6_Optics\Optics\SigSauerRomeo5\data\sig_sight.rvmat"}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeo5\data\sig_sight_damage.rvmat"}},
						{0.3,{"A6_Optics\Optics\SigSauerRomeo5\data\sig_sight_damage.rvmat"}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeo5\data\sig_sight_destruct.rvmat"}}
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