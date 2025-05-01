class CfgPatches
{
	class A6_MRS_Optic
	{
		units[]={"A6_MRS_Optic"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics_MultipleReticles;
	class A6_MRS_Optic: A6_ItemOptics_MultipleReticles
	{
		scope=2;
		displayName="Walther MRS Multi-Reticle Red Dot Sight";
		descriptionShort="The Walther MRS (Multi-Reticle Sight) reflex sight features 2 dots and 2 reticles. Cheap, accurate, compact and offers good battery life - but not too sturdy and reliable.";
		model="A6_Optics\Optics\MRS\MRS.p3d";
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
						{1.0,{"A6_Optics\Optics\MRS\data\camo.rvmat"}},
						{0.7,{}},
						{0.5,{"A6_Optics\Optics\MRS\data\camo_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"A6_Optics\Optics\MRS\data\camo_destruct.rvmat"}}
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
		class AnimationSources
		{
			class reticle_knob
			{
				source="user";
				initPhase=0;
				animPeriod=1.0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMRS: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model="A6_Optics\Optics\MRS\MRS.p3d";
	};
};	