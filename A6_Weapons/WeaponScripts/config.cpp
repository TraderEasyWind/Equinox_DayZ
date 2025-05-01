class CfgPatches
{
	class A6_WeaponScripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"A6_Ammo",
			"A6_Attachments",
			"A6_LMGs",
			"A6_Pistols",
			"A6_Rifles",
			"A6_Shotguns",
			"A6_SMGs",
			"A6_Snipers",
			"A6_Gunplay"
		};
	};
};
class CfgMods
{
	class A6_WeaponScripts
	{
		dir="WeaponScripts";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_WeaponScripts";
		credits="FutureSixx";
		author="FutureSixx";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = {"Game","World","Mission"};
		inputs = "A6_Weapons/WeaponScripts/Inputs.xml";
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"A6_Weapons/WeaponScripts/WeaponScripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"A6_Weapons/WeaponScripts/WeaponScripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"A6_Weapons/WeaponScripts/WeaponScripts/5_mission"};
			};
			class imageSets
			{
				files[] = {"A6_Weapons/WeaponScripts/GUI/ImageSets/A6_Weapons.imageset"};
			};
		};
	};
};