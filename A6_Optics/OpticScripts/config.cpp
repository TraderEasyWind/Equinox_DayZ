class CfgPatches
{
	class A6_OpticScripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"A6_Optics"
		};
	};
};
class CfgMods
{
	class A6_OpticScripts
	{
		dir="OpticScripts";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_OpticScripts";
		credits="FutureSixx";
		author="FutureSixx";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = {"World"};
		inputs = "A6_Optics/OpticScripts/Inputs.xml";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"A6_Optics/OpticScripts/Scripts/4_world"};
			};
		};
	};
};	

