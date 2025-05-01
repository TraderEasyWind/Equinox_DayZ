class CfgPatches
{
	class DoorLockSystem
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts"
		};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class DoorLockSystem
	{
		dir = "DoorLockSystem";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DoorLockSystem";
		credits = "FutureSixx";
		author = "FutureSixx";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"DoorLockSystem/Scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DoorLockSystem/Scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DoorLockSystem/Scripts/5_mission"};
			};
		};
	};	
};
