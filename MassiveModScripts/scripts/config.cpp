class CfgPatches
{
	class EQ_SchanaModAutorun
	{
		requiredAddons[]=
		{
			"Testmod_ModTweaks"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgMods
{
	class EQSchanaModAutorun
	{
		name="SchanaModAutorun";
		action="https://github.com/schana/dayz-mod-autorun";
		type="mod";
		inputs="MassiveModScripts/scripts/Data/Inputs.xml";
		dependencies[]=
		{
			"4_World",
			"5_Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				files[]=
				{
					"MassiveModScripts/scripts/4_World/EQScripts/EQAutorun"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"MassiveModScripts/scripts/5_Mission/EQAutorun"
				};
			};
		};
	};
};
