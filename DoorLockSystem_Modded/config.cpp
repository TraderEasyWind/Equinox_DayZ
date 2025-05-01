class CfgPatches
{
	class DoorLockSystem_Modded
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DoorLockSystem"
		};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class DoorLockSystem_Modded
	{
		dir = "DoorLockSystem_Modded";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DoorLockSystem_Modded";
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
				files[] = {"DoorLockSystem_Modded/Scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DoorLockSystem_Modded/Scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DoorLockSystem_Modded/Scripts/5_mission"};
			};
		};
	};	
};
