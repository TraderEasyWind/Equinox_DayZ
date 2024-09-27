class CfgPatches
{
	class MassiveUndergrounStash
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Camping",
			"DZ_Gear_Tools"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class UndergroundStash;
	class Stick_UndergroundStash: UndergroundStash
	{
		scope=2;
		isStickDig=1;
		canBeDigged=0;
	};
	class Shovel: Inventory_Base
	{
		isStickDig=1;
	};
	class FieldShovel: Inventory_Base
	{
		isStickDig=1;
	};
};