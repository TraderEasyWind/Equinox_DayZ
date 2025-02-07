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
