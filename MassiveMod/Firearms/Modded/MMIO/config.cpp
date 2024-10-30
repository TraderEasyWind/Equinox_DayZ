class CfgPatches
{
	class MassiveMod_Firearms_Modded_MMIO
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"Mass_Guns"
        };
	};
};//meow
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Mass_PKM_Base;
	class Mass_PKM: Mass_PKM_Base
	{
		model="MassiveMod\Firearms\Modded\MMIO\PKM\PKM.p3d";
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
