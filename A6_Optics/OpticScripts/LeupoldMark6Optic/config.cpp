class CfgPatches
{
	class A6_LeupoldMark6Optic
	{
		units[] = {"A6_LeupoldMark6Optic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ItemOptics;
	class A6_LeupoldMark6Optic: A6_ItemOptics
	{
		scope = 2;
		displayName = "Leupold Mark 6 1-6x20mm M6C1 Optic";
		descriptionShort = "Leupold Mark 6 1-6x20mm M6C1 Optic. 1-6x Magnification.";
		model = "A6_Optics\Optics\LeupoldMark6Optic\LeupoldMark6Optic.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 600;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		aimSpeedModifier[]={0.95,0.95,0.95};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","A6_Optics\Optics\LeupoldMark6Optic\data\LeupoldMark6Optic.rvmat"}},
						{0.7,{}},
						{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","A6_Optics\Optics\LeupoldMark6Optic\data\LeupoldMark6Optic_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","A6_Optics\Optics\LeupoldMark6Optic\data\LeupoldMark6Optic_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.5236/1";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.5236/1";
			discretefov[] = {"0.5236/1","0.5236/2","0.3926/3","0.3926/6"};
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0};
			PPLensProperties[] = {0,0,0,0};
			PPBlurProperties = 0;
		};
	};
};
