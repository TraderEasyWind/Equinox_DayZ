class CfgPatches
{
	class MassiveMod_ModTweaks_CJ187Nvgs
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"CJ187_Immersive_NVG"
        };
	};
};//meow
class CfgVehicles
{
	class Clothing;
	class ItemOptics;
    class NVGoggles;
	class CJ_NVGoggles: NVGoggles{};
    class CJ_NVG_BCNVG21: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
	};
	class CJ_NVG_ANPVS23: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
	};
	class CJ_NVG_GPNVG18_Base: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
	};
};