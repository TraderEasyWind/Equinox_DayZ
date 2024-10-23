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
	class CJ_NVG_ANPVS14: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
	};
	class CJ_NVG_TIG7: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
	};
	class CJ_NVG_ANPVS7: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
	};
    class CJ_NVG_BCNVG21: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
	};
	class CJ_NVG_ANPVS23: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
	};
	class CJ_NVG_GPNVG18_Base: CJ_NVGoggles
	{
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
	};
};