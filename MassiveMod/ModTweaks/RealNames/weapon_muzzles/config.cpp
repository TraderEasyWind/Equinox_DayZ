class CfgPatches
{
	class Real_Names
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Muzzles"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor: Inventory_Base
	{
	};
	class AK_Bayonet: Inventory_Base
	{
		displayName="$STR_cfgVehicles_real_AK_Bayonet0";
		descriptionShort="$STR_cfgVehicles_real_AK_Bayonet1";
	};
	class M9A1_Bayonet: Inventory_Base
	{
		displayName="$STR_cfgVehicles_real_M9A1_Bayonet0";
		descriptionShort="$STR_cfgVehicles_real_M9A1_Bayonet1";
	};
	class Mosin_Bayonet: Inventory_Base
	{
		displayName="$STR_cfgVehicles_real_Mosin_Bayonet0";
		descriptionShort="$STR_cfgVehicles_real_Mosin_Bayonet1";
	};
	class SKS_Bayonet: Inventory_Base
	{
		displayName="$STR_cfgVehicles_real_SKS_Bayonet0";
		descriptionShort="$STR_cfgVehicles_real_SKS_Bayonet1";
	};
	class MP5_Compensator: ItemSuppressor
	{
		displayName="$STR_cfgVehicles_real_MP5_Compensator0";
		descriptionShort="$STR_cfgVehicles_real_MP5_Compensator1";
	};
	class PistolSuppressor: ItemSuppressor
	{
		displayName="$STR_cfgVehicles_real_PistolSuppressor0";
		descriptionShort="$STR_cfgVehicles_real_PistolSuppressor1";
	};
	class Mosin_Compensator: ItemSuppressor
	{
		displayName="$STR_cfgVehicles_real_Mosin_Compensator0";
		descriptionShort="$STR_cfgVehicles_real_Mosin_Compensator1";
	};
	class AK_Suppressor: ItemSuppressor
	{
		displayName="$STR_cfgVehicles_real_AK_Suppressor0";
		descriptionShort="$STR_cfgVehicles_real_AK_Suppressor1";
	};
	class M4_Suppressor: ItemSuppressor
	{
		displayName="$STR_cfgVehicles_real_M4_Suppressor0";
		descriptionShort="$STR_cfgVehicles_real_M4_Suppressor1";
	};
};
