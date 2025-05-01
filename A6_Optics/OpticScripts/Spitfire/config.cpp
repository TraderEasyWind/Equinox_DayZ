class CfgPatches
{
	class A6_Spitfire_Optic
	{
		units[]={"A6_Spitfire_Optic"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class A6_ItemOptics_NVReticle;
	class A6_Spitfire_Optic: A6_ItemOptics_NVReticle
	{
		scope=2;
		displayName="Vortex Spitfire 3x Prism";
		descriptionShort="Vortex Spitfire 3x Prism Optic. Reticle can be changed from Red to Green.";
		model="A6_Optics\Optics\Spitfire\Spitfire.p3d";
		attachments[] = {"BatteryD"};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]={"weaponOptics"};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=17;
		reversed=0;
		weight=500;
		itemSize[]={2,1};
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[] = {"reticle"};
		hiddenSelectionsTextures[] = {""};
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
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\Spitfire\data\material.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\Spitfire\data\material_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\Spitfire\data\material_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67;
			opticsFlare=0;
			opticsPPEffects[]={};
			opticsZoomMin="0.3926/3";
			opticsZoomMax="0.3926/3";
			opticsZoomInit="0.3926/3";
			discretefov[]={"0.3926/3"};
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.225,0.02};
			PPLensProperties[]={0.5,0.15,0,0};
			PPBlurProperties=0.1;
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
