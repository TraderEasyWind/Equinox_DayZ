class CfgPatches
{
	class A6_CollimatorOptic
	{
		units[]={"A6_CollimatorOptic"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_ItemOptics_NVReticle;
	class A6_CollimatorOptic: A6_ItemOptics_NVReticle
	{
		scope=2;
		displayName="Visceral Arms Collimator Optic";
		descriptionShort="Visceral Arms Collimator Optic 1x magnification. Reticle can be changed from Red to Green.";
		model="A6_Optics\Optics\CollimatorOptic\CollimatorOptic.p3d";
		attachments[] = {"BatteryD"};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=16;
		reversed=0;
		weight=265;
		itemSize[]={2,1};
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
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\CollimatorOptic\Data\CollimatorOptic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\CollimatorOptic\Data\CollimatorOptic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\CollimatorOptic\Data\CollimatorOptic_destruct.rvmat"}}
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