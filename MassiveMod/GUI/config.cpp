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
class CfgSlots
{
	class Slot_Belt_Left
	{
		name="Belt_Left";
		displayName="#STR_CfgBelt_Left0";
		ghostIcon = "set:MassiveModATlas image:MM_CanteenFirstAid";
	};
	class Slot_VestHolster
	{
		name="VestHolster";
		displayName="#STR_CfgBelt_Right0";
		ghostIcon="set:MassiveModATlas image:MM_VestHolsterPouches";
	};
	class Slot_VestPouch
	{
		name="VestPouch";
		displayName="#STR_CfgVestPouch0";
		ghostIcon="set:MassiveModATlas image:MM_VestHolsterPouches";
	};
};