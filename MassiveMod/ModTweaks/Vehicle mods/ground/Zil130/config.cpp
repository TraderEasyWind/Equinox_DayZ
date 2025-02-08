class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_Zill
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Gerph_Zil130","nm_Flagextension"};
	};
};
class CfgSlots
{
	class Slot_Zil130Wheel_1_2
	{
		name="Zil130Wheel_1_2";
		displayName="#STR_CfgWheel0";
		selection="wheel_1_2";
		ghostIcon="set:dayz_inventory image:doublewheel";
	};
	class Slot_Zil130Wheel_2_2
	{
		name="Zil130Wheel_2_2";
		displayName="#STR_CfgWheel0";
		selection="wheel_2_2";
		ghostIcon="set:dayz_inventory image:doublewheel";
	};
};
class CfgVehicles
{
	class CarScript;
	class Gerph_Zil130: CarScript
	{
		attachments[] += {"Material_FPole_Flag"};
		class GUIInventoryAttachmentsProps
		{
			class Body
			{
				
				attachmentSlots[] += {"Material_FPole_Flag"};
			
			};
		};
	};
};
