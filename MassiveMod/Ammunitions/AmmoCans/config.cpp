class CfgPatches
{
	class SH_Weapons_Ammunition_Cans
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
		magazines[]=
		{};
	};
};
class CfgMagazines
{
	class Inventory;
	class Inventory_Base;
	class MassiveMod_AmmoCanBase: Inventory_Base
	{
		scope=0;
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan545x39: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="5.45x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 5.45x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan545.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan762x39: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="7.62x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds 7.62x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan762x54: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="7.62x54R Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 440 Rounds of 7.62x54R Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan762x54.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan9x39: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="9x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 9x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan556x45: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="5.56x45 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 5.56x45mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan556.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan308Win: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="308 Win Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 440 Rounds of 7.62x51mm Winchester Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan308Win.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
};
