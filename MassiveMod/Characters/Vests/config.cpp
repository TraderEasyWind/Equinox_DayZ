class CfgPatches
{
	class MassiveMod_Characters_Vests
	{
		units[] = {"Rifle_Base"};
		weapons[] = {"Rifle_Base"};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Scripts"
        };
	};
};//meow
class CfgVehicles
{
	class Clothing;
	class HighCapacityVest_ColorBase: Clothing
	{
		itemsCargoSize[]={6,4};
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
