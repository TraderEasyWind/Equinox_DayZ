class CfgPatches
{
	class MassiveMod_Firearms_Vanilla_Attachments
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Weapons_Muzzles",
			"DZ_Scripts",
			"DZ_Weapons_Magazines"
        };
	};
};//meow
class cfgVehicles
{
	class ItemSuppressor;
	class M4_Suppressor: ItemSuppressor
	{
		repairableWithKits[]={0};
		repairCosts[]={0};
	};
	class AK_Suppressor: ItemSuppressor
	{
		repairableWithKits[]={0};
		repairCosts[]={0};
	};
	class PistolSuppressor: ItemSuppressor
	{
		repairableWithKits[]={0};
		repairCosts[]={0};
	};
	class Inventory_Base;
	class M4_OEBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class M4_MPBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class M4_CQBBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class M4_RISHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class M4_MPHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class Fal_OeBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class Saiga_Bttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_WoodBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK74_Hndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_RailHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class AK_Bayonet: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class Mosin_Bayonet: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
	class SKS_Bayonet: Inventory_Base
	{
		repairableWithKits[]={8};
		repairCosts[]={25};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		repairableWithKits[]={1};
		repairCosts[]={25};
	};
};