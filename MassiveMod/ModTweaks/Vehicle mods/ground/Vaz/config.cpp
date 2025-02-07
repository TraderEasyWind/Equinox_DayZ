class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_Vaz
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CivilianVaz_2126","nm_Flagextension"};
	};
};
class CfgVehicles
{
	class CarScript;
	class CivilianVaz_2126: CarScript
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