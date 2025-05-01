class CfgPatches
{
	class A6_SigSauerRomeoXLOptic
	{
		units[]={"A6_SigSauerRomeoXLOptic"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics_NVReticle;
	class A6_SigSauerRomeoXLOptic: A6_ItemOptics_NVReticle
	{
		scope=2;
		displayName="Sig Sauer Romeo 3XL";
		descriptionShort="Sig Sauer Romeo 3XL Sight. 1x magnification. Has Green & Red Reticles. Can be combined with optics that have top mounts, remove any batteries before doing so.";
		model="A6_Optics\Optics\SigSauerRomeoXL\SigSauerRomeoXL.p3d";
		attachments[] = {"BatteryD"};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=16;
		reversed=0;
		weight=130;
		itemSize[]={1,1};
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
		OpticName = "SigSauerRomeoXLOptic";
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
						{1.0,{"A6_Optics\Optics\SigSauerRomeoXL\data\camo_sig_romeo_xl.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeoXL\data\camo_sig_romeo_xl_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeoXL\data\camo_sig_romeo_xl_destruct.rvmat"}}
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
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
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