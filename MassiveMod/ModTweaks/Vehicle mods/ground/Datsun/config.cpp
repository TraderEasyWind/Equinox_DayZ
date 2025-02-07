class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_datasun
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"nd_datsun","nm_Flagextension"};
	};
};
class CfgVehicles
{
	class CarScript;
	class nd_datsun_base;
	class nd_datsun : nd_datsun_base
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

//	class H4_Zil131_FuelTank_Green: H4_Zil131_Green
//  class Kamaz: Kamaz_base	
//	class KamazCovered: Kamaz
//	class KamazFuel: Kamaz_base