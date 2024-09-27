class CfgPatches
{
	class SH_Gear_Radios
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Radio"};
	};
};
class CfgVehicles
{
	class Transmitter_Base;
	class MassiveMod_TacticalRadio_Colorbase: Transmitter_Base
	{
		scope = 0;
		displayName = "Tactical-Radio";
		descriptionShort = "An Advanced Military Radio capable of reaching signals significantly farther than your traditional handheld radio";
		model = "MassiveMod\Gear\Radio\Data\TacticalRadio.p3d";
		weight = 750;
		absorbency = 0.5;
		itemSize[] = {1,3};
		hiddenSelections[] = 
		{
			"zbytek",
			"emissive"
		};
		hiddenSelectionsTextures[] = 
		{
			"#(argb,8,8,3)color(0.227451,0.403922,0.219608,1.0,co)"
		};
		hiddenSelectionsMaterials[] = 
		{
			"MassiveMod\Gear\Radio\Data\TacticalRadio.rvmat", 
			"MassiveMod\Gear\Radio\Data\TacticalRadio_Emissive.rvmat"
		};
		inventorySlot[] = {"WalkieTalkie"};
		rotationFlags = 1;
		oldpower = 0;
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		simulation = "itemTransmitter";
		inputRange[] = {2.0,5.0,10.0};
		range = 25000;
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class ClothingTypes{};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"MassiveMod\Gear\Radio\Data\TacticalRadio.rvmat"}},{0.7,{"MassiveMod\Gear\Radio\Data\TacticalRadio.rvmat"}},{0.5,{"MassiveMod\Gear\Radio\Data\TacticalRadio_damage.rvmat"}},{0.3,{"MassiveMod\Gear\Radio\Data\TacticalRadio_damage.rvmat"}},{0.0,{"MassiveMod\Gear\Radio\Data\TacticalRadio_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet = "turnOnRadio_SoundSet";
					id = 1006;
				};
				class turnOffRadio
				{
					soundSet = "turnOffRadioNoise_SoundSet";
					id = 1007;
				};
			};
		};
	};
	class MassiveMod_TacticalRadio_Green: MassiveMod_TacticalRadio_Colorbase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.419608,0.490196,0.2,1.0,CO)"};
	};
	class MassiveMod_TacticalRadio_Black: MassiveMod_TacticalRadio_Colorbase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
	};
	class MassiveMod_TacticalRadio_Tan: MassiveMod_TacticalRadio_Colorbase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.752941,0.666667,0.505882,1.0,CO)"};
	};
};
