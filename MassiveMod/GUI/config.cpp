class CfgPatches
{
	class MM_GUIStuff
	{
		units[]=
		{};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class MM_GUI
	{
		name="MMIO GUI";
		dir="MMIO GUI";
		author="";
		credits="";
		authorID="";
		type="mod";
		dependencies[]=
		{};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"MassiveMod\GUI\ImageSets\MassiveModAtlas.imageset"
				};
			};		
		};
	};
};