class CfgPatches
{
	class A6_Lasers
	{
		units[] = 
		{
			"A6_Laser_Beam",
			"A6_ANPEQ15",
			"A6_ANPEQ15_Tan",
			"A6_NcSTAR",
			"A6_PERST",
			"A6_DBAL_I2"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class A6_Laser_Beam: Inventory_Base
	{
		scope = 2;
		model = "A6_Weapons\Attachments\Lasers\LaserBeam.p3d";
		hiddenSelections[] = {"body"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0,0,1.0,co)"};
	};
	class A6_ANPEQ15_Base: Switchable_Base
	{
		scope = 0;
		displayName = "AN/PEQ-15 Laser";
		descriptionShort = "The Advanced Target Pointer Illuminator Aiming Laser (ATPIAL) produced by L3 Technologies is a rugged, combat-proven and easy-to-use aiming system with integrated infrared and visible aim lasers. Toggle IR by pressing SHIFT, CRTL, or ALT + N or rebind the keys via A-6 Weapons in your Controls settings.";
		model = "A6_Weapons\Attachments\Lasers\ANPEQ15\ANPEQ15_New.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop"};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo.rvmat"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_ANPEQ15: A6_ANPEQ15_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo.rvmat"};
	};
	class A6_ANPEQ15_Tan: A6_ANPEQ15_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\ANPEQ15\data\camo.rvmat"};
	};
	class A6_NcSTAR_Base: Switchable_Base
	{
		scope = 0;
		displayName = "NcSTAR Tactical blue laser LAM-module";
		descriptionShort = "Compact tactical Laser Aiming-module with blue laser produced by NcSTAR.";
		model = "A6_Weapons\Attachments\Lasers\NcSTAR\NcSTARLaser.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop"};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo_pic_rail","camo_laser"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser.rvmat"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_NcSTAR: A6_NcSTAR_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo_laser"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\NcSTAR\data\camo_laser.rvmat"};
	};
	class A6_PERST_Base: Switchable_Base
	{
		scope = 0;
		displayName = "Zenitco PERST-4 Laser";
		descriptionShort = "The combined device (hereinafter referred to as the CD) Perst-4 (GREEN+) is intended to indicate the target when observing, inspecting and seeing shooting from small arms with CD Perst-4 the installed on it at night in two ranges: green 520 nm and infrared 850 nm, and IR lighting with a wavelength of 850 nm. The product is a small-sized optical-mechanical device that forms the luminous flux of laser radiation. Toggle IR by pressing SHIFT, CRTL, or ALT + N or rebind the keys via A-6 Weapons in your Controls settings";
		model = "A6_Weapons\Attachments\Lasers\PERST\PERSTLaser.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop"};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo_pic_rail","camo_laser_perst_4"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4.rvmat"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_PERST: A6_PERST_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo_laser_perst_4"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\PERST\data\camo_laser_perst_4.rvmat"};
	};
	class A6_DBAL_I2_Base: Switchable_Base
	{
		scope = 0;
		displayName = "Steiner DBAL-I2 Laser";
		descriptionShort = "Steiner DBAL-I2 Laser, Class 1 Infrared Laser and Visible Laser combined extreme accuracy and rugged construction. The DBAL I2 from Steiner is built to withstand the toughest tactical and combat situations, in the harshest and most difficult weather and terrain conditions. Toggle IR by pressing SHIFT, CRTL, or ALT + N or rebind the keys via A-6 Weapons in your Controls settings";
		model = "A6_Weapons\Attachments\Lasers\DBAL\DBAL.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop"};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\DBAL\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\DBAL\data\camo.rvmat"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Lasers\DBAL\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Lasers\DBAL\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Lasers\DBAL\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Lasers\DBAL\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Lasers\DBAL\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_DBAL_I2: A6_DBAL_I2_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\DBAL\data\camo_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\DBAL\data\camo.rvmat"};
	};
	class A6_LS321G_Base: Switchable_Base
	{
		scope = 0;
		displayName = "Holosun LS321G Laser";
		descriptionShort = "The LS321G is a class IIIa visible green laser aiming device with a coaxial mounted class 2 IR (infrared) laser. Toggle IR by pressing SHIFT, CRTL, or ALT + N or rebind the keys via A-6 Weapons in your Controls settings";
		model = "A6_Weapons\Attachments\Lasers\Holosun\Holosun_Laser.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponLightLeft","weaponLightRight","weaponLightTop"};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"camo_pic_rail","camo_holosun"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun_vanilla_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun.rvmat"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.05,1.05,1.05};
		aimSpeedModifier[]={0.95,0.95,0.95};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_LS321G_Vanilla: A6_LS321G_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo_holosun"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun_vanilla_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun.rvmat"};
	};
	class A6_LS321G_Black: A6_LS321G_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo_pic_rail","camo_holosun"};
		hiddenSelectionsTextures[] = {"","A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun_black_co.paa"};
		hiddenSelectionsMaterials[] = {"","A6_Weapons\Attachments\Lasers\Holosun\data\camo_holosun.rvmat"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyHolosun_Laser: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponLightLeft";
		model = "A6_Weapons\Attachments\Lasers\Holosun\Holosun_Laser.p3d";
	};
};