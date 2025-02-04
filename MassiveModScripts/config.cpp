class CfgPatches
{
	class MScripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"RA_BaseBuilding_Scripts"
		};
	};
};
class CfgMods
{
	class MScripts
	{
		dir="MScripts";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MScripts";
		credits="";
		author="Niphoria";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		inputs="MassiveModScripts/Data/Inputs.xml";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission",
			"Data"
		};
		class defs
		{
			/*class engineScriptModule
			{
				value = "";
				files[] =
				{
					"MassiveModScripts/scripts/Combine",
					"MassiveModScripts/scripts/1_Core"
				};
			};
			class gameLibScriptModule
			{
				value = "";
				files[] =
				{
					"MassiveModScripts/scripts/Combine",
					"MassiveModScripts/scripts/2_GameLib"
				};
			};*/
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"MassiveModScripts/scripts/Combine",
					"MassiveModScripts/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MassiveModScripts/scripts/Combine",
					"MassiveModScripts/scripts/4_World",
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"MassiveModScripts/scripts/Combine",
					"MassiveModScripts/scripts/5_Mission",
				};
			};
		};
	};
};
