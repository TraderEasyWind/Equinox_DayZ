class CfgPatches
{
	class DoorLockSystem_Keys_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DoorLockSystem_Keys"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class DLS_KeyChain : Inventory_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[]={2,2};
	};
	class DLS_KeyTool : Inventory_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[]={4,4};
	};
	class DLS_KeyCard_Holder : Inventory_Base
	{
		itemSize[] = {1,1};
		itemsCargoSize[]={3,3};
	};
	class DLS_Key_Base : Inventory_Base
	{
		itemSize[] = {1,1};
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_KeyCard_Base : Inventory_Base
	{
		itemSize[] = {1,1};
		varQuantityInit = 15;
		varQuantityMax = 15;
	};
	class DLS_KeyCard_InfiniteUse : Inventory_Base
	{
		itemSize[] = {1,1};
	};		
	// Keys	
	class DLS_Key_01: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_Key_02: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_Key_03: DLS_Key_Base
	{
		varQuantityInit = 0;
		varQuantityMax = 40;
	};
	class DLS_Key_04: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_Key_05: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_Key_06: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_Key_07: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
	class DLS_Key_08: DLS_Key_Base
	{
		varQuantityInit = 40;
		varQuantityMax = 40;
	};
};	