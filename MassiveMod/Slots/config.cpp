class CfgPatches
{
	class MassiveMod_Slots
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};//meow
class CfgMods
{
	class MassiveMod
	{
		dir="MassiveMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MassiveMod";
		credits="";
		author="Niphoria/Mass";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
	};
};
class CfgSlots
{
	class Slot_MMAmmo
	{
		name = "MMAmmo";
		displayName = "Loose Ammunition";
		ghostIcon = "";
	};
	class Slot_Hood
	{
		name = "Hood";
		displayName = "Hood";
		ghostIcon = "set:dayz_inventory image:headgear";
		show = "true";
		boneName = "Head";
	};
	class Slot_MM_VestPlate
	{
		name = "MM_VestPlate";
		displayName = "Ballistic Plate";
		ghostIcon = "set:MassiveModATlas image:MM_VestPlate";
	};
};
