class CfgPatches
{
	class A6_SigSauerRomeo0_Optic
	{
		units[]={"A6_SigSauerRomeo0_Optic"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_SigSauerRomeo0_Optic: A6_ItemOptics
	{
		scope=2;
		displayName="ROMEOZero 1x24mm";
		descriptionShort="ROMEOZero 1x24mm Optic. Can be combined with optics that have top mounts, remove any batteries before doing so.";
		model="A6_Optics\Optics\SigSauerRomeo0\SigSauerRomeo0.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponOptics","weaponOpticsMarkIV"};
		simulation = "itemoptics";
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		OpticName = "SigSauerRomeo0_Optic";
		aimSpeedModifier[]={0.85,0.85,0.85};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,{"A6_Optics\Optics\SigSauerRomeo0\data\camo_romeo.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\SigSauerRomeo0\data\camo_romeo_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\SigSauerRomeo0\data\camo_romeo_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 50;
			discreteDistance[] = {25,50};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[]={0,0,0,0};
            PPMaskProperties[]={0,0,0,0};
            PPLensProperties[]={0,0,0,0};
            PPBlurProperties=0;
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\collimdot2.rvmat";
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySigSauerRomeo0: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model="A6_Optics\Optics\SigSauerRomeo0\SigSauerRomeo0.p3d";
	};
};	