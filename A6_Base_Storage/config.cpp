class CfgPatches
{
	class A6_Base_Storage
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Gear_Tools",
			"DZ_Scripts"
		};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class A6_Base_Storage
	{
		dir = "A6_Base_Storage";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "A6_Base_Storage";
		credits = "FutureSixx";
		author = "FutureSixx";
		authorID = "0";
		version = "1.0";
		extra = 0;
		inputs = "";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"A6_Base_Storage/BaseScripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"A6_Base_Storage/BaseScripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"A6_Base_Storage/BaseScripts/5_mission"};
			};
		};
	};	
};
