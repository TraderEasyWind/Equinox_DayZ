class CfgPatches
{
	class MassiveMod
	{
		units[] = {"Rifle_Base"};
		weapons[] = {"Rifle_Base"};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"MassBuildings",
			"DZ_Scripts"
        };
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
		author="Penis";
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
//class CfgSlots
//{
//    class Slot_Melee
//	{
//		name = "Melee";
//		displayName = "Melee";
//		ghostIcon="set:MassiveModATlas image:MM_Melee";
//	};
//	class Slot_Shoulder
//	{
//		name = "Shoulder";
//		displayName = "#STR_CfgShoulder0";
//		ghostIcon = "set:dayz_inventory image:shoulderleft";
//	};
//};
//class CfgWeapons
//{
//    class RifleCore;
//    class Rifle_Base : RifleCore
//    {
//        inventorySlot[] -= 
//        {
//            "Melee"
//        };
//    };
//};
