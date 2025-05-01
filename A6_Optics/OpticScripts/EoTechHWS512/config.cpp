class CfgPatches
{
	class A6_EoTechHWS512_Optic
	{
		units[] = {"A6_EoTechHWS512_Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_EoTechHWS512_Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "EOTECH HWS 512";
		descriptionShort = "The EOTECH HWS 512 Holographic Optic";
		model = "A6_Optics\Optics\EoTechHWS512\EoTechHWS512.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOptics"};
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
		aimSpeedModifier[]={0.9,0.9,0.9};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\EoTechHWS512\data\camo_sight.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\EoTechHWS512\data\camo_sight.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\EoTechHWS512\data\camo_sight.rvmat"}}
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
			opticsFlare = 1;
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 100;
			discreteDistance[] = {25,50,100};
			discreteDistanceInitIndex = 0;
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\ReticleColors\reticle_red_realistic_ca.paa";
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
	};
};
