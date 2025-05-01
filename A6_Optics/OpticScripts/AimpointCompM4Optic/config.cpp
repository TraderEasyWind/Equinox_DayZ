class CfgPatches
{
	class A6_AimpointCompM4Optic
	{
		units[] = {"A6_AimpointCompM4Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics;
	class A6_AimpointCompM4Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Aimpoint CompM4";
		descriptionShort = "The Aimpoint CompM4 is a non-magnified red dot style gun sight adopted by the U.S. Armed Forces, designated the M68 CCO (Close Combat Optic)..";
		model = "A6_Optics\Optics\AimpointCompM4Optic\AimpointCompM4Optic.p3d";
		debug_ItemCategory = 3;
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
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
						{1.0,{"A6_Optics\Optics\OpticReticleTextures\ScopeViews\A6_3DOpticView_ca.paa","A6_Optics\Optics\AimpointCompM4Optic\data\camo_sight.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\AimpointCompM4Optic\data\camo_sight_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\AimpointCompM4Optic\data\camo_sight_destruct.rvmat"}}
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
			opticSightTexture = "A6_Optics\Optics\OpticReticleTextures\MRS_Reticles\reticle_big_ca.paa";
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
