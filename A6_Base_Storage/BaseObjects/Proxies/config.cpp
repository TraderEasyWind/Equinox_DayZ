class CfgPatches
{
	class A6_Proxies
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Medical","DZ_Gear_Cooking","DZ_Weapons_Melee_Blade","DZ_Gear_Tools","DZ_Weapons_Melee","DZ_Gear_Crafting","DZ_Gear_Books","DZ_Gear_Containers","DZ_Vehicles_Wheeled"};
	};
};
class CfgVehicles
{
	class Container_Base;
	class AmmoBox: Container_Base
	{
		inventorySlot[] += {"AmmoBox1","AmmoBox2","AmmoBox3","AmmoBox4","AmmoBox5"};
	};
};	
class CfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[] += {"Shoulder","Melee","Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5","Shoulder6","Shoulder7","Shoulder8","Shoulder9","Shoulder10","Shoulder11","Shoulder12","Shoulder13","Shoulder14","Shoulder15","Shoulder16","Shoulder17","Shoulder18","Shoulder19","Shoulder20"};
	};
	class PistolCore;
	class Pistol_Base: PistolCore
	{
		inventorySlot[] += {"Pistol","Pistol1","Pistol2","Pistol3","Pistol4","Pistol5","Pistol6","Pistol7","Pistol8","Pistol9","Pistol10"};
	};
};
class CfgSlots
{
	class Slot_AmmoBox1
	{
		name = "AmmoBox1";
		displayName = "Ammo Box";
		ghostIcon = "set:dayz_inventory image:cat_common_cargo";
	};
	class Slot_AmmoBox2
	{
		name = "AmmoBox2";
		displayName = "Ammo Box";
		ghostIcon = "set:dayz_inventory image:cat_common_cargo";
	};
	class Slot_AmmoBox3
	{
		name = "AmmoBox3";
		displayName = "Ammo Box";
		ghostIcon = "set:dayz_inventory image:cat_common_cargo";
	};
	class Slot_AmmoBox4
	{
		name = "AmmoBox4";
		displayName = "Ammo Box";
		ghostIcon = "set:dayz_inventory image:cat_common_cargo";
	};
	class Slot_AmmoBox5
	{
		name = "AmmoBox5";
		displayName = "Ammo Box";
		ghostIcon = "set:dayz_inventory image:cat_common_cargo";
	};
	class Slot_Pistol1
	{
		name = "Pistol1";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol2
	{
		name = "Pistol2";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol3
	{
		name = "Pistol3";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol4
	{
		name = "Pistol4";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol5
	{
		name = "Pistol5";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol6
	{
		name = "Pistol6";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol7
	{
		name = "Pistol7";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol8
	{
		name = "Pistol8";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol9
	{
		name = "Pistol9";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Pistol10
	{
		name = "Pistol10";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Shoulder1
	{
		name = "Shoulder1";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder2
	{
		name = "Shoulder2";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder3
	{
		name = "Shoulder3";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder4
	{
		name = "Shoulder4";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder5
	{
		name = "Shoulder5";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder6
	{
		name = "Shoulder6";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder7
	{
		name = "Shoulder7";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder8
	{
		name = "Shoulder8";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder9
	{
		name = "Shoulder9";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder10
	{
		name = "Shoulder10";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder11
	{
		name = "Shoulder11";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder12
	{
		name = "Shoulder12";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder13
	{
		name = "Shoulder13";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder14
	{
		name = "Shoulder14";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder15
	{
		name = "Shoulder15";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder16
	{
		name = "Shoulder16";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder17
	{
		name = "Shoulder17";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder18
	{
		name = "Shoulder18";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder19
	{
		name = "Shoulder19";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder20
	{
		name = "Shoulder20";
		displayName = "$STR_CfgShoulder0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAmmoBox1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"AmmoBox1"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\AmmoBox1.p3d";
	};
	class ProxyAmmoBox2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"AmmoBox2"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\AmmoBox2.p3d";
	};
	class ProxyAmmoBox3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"AmmoBox3"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\AmmoBox3.p3d";
	};
	class ProxyAmmoBox4: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"AmmoBox4"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\AmmoBox4.p3d";
	};
	class ProxyAmmoBox5: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"AmmoBox5"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\AmmoBox5.p3d";
	};
	class Proxypistol1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol1"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol1.p3d";
	};
	class Proxypistol2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol2"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol2.p3d";
	};
	class Proxypistol3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol3"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol3.p3d";
	};
	class Proxypistol4: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol4"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol4.p3d";
	};
	class Proxypistol5: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol5"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol5.p3d";
	};
	class Proxypistol6: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol6"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol6.p3d";
	};
	class Proxypistol7: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol7"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol7.p3d";
	};
	class Proxypistol8: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol8"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol8.p3d";
	};
	class Proxypistol9: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol9"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol9.p3d";
	};
	class Proxypistol10: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol10"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\pistol10.p3d";
	};
	class Proxyshoulder1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder1"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder1.p3d";
	};
	class Proxyshoulder2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder2"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder2.p3d";
	};
	class Proxyshoulder3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder3"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder3.p3d";
	};
	class Proxyshoulder4: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder4"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder4.p3d";
	};
	class Proxyshoulder5: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder5"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder5.p3d";
	};
	class Proxyshoulder6: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder6"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder6.p3d";
	};
	class Proxyshoulder7: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder7"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder7.p3d";
	};
	class Proxyshoulder8: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder8"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder8.p3d";
	};
	class Proxyshoulder9: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder9"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder9.p3d";
	};
	class Proxyshoulder10: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder10"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder10.p3d";
	};
	class Proxyshoulder11: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder11"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder11.p3d";
	};
	class Proxyshoulder12: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder12"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder12.p3d";
	};
	class Proxyshoulder13: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder13"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder13.p3d";
	};
	class Proxyshoulder14: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder14"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder14.p3d";
	};
	class Proxyshoulder15: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder15"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder15.p3d";
	};
	class Proxyshoulder16: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder16"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder16.p3d";
	};
	class Proxyshoulder17: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder17"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder17.p3d";
	};
	class Proxyshoulder18: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder18"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder18.p3d";
	};
	class Proxyshoulder19: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder19"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder19.p3d";
	};
	class Proxyshoulder20: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Shoulder20"};
		model = "A6_Base_Storage\BaseObjects\Proxies\data\shoulder20.p3d";
	};
};