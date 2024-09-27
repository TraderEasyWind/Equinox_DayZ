class CfgPatches
{
	class MassiveModMiscTweaks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Consumables","DZ_Weapons_Muzzles"};
	};
};//meow
class CfgMods
{
	class MassiveModMiscTweaks
	{
		dir="MassiveMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MassiveMod";
		credits="";
		author="Niphoria/Mass/Lad";
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
class CfgVehicles
{
	class Inventory_Base;
	class Box_Base;
	class ItemSuppressor;
	class Paper: Inventory_Base
	{
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 40.0;
	};
	class Firewood: Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1.0;
		varQuantityMin=0.0;
		varQuantityMax=3.0;
		varQuantityDestroyOnMin=1.0;
		varStackMax=3.0;
	};
};
