class CfgPatches
{
	class A6_BaseOpticClasses
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class ItemOptics_Base; 
	class A6_ItemOptics : ItemOptics_Base
	{
		scope = 0;
	};
	class A6_ItemOpticsLongScope : A6_ItemOptics
	{
		scope = 0;
	};
	class A6_ItemOptics_NVReticle : A6_ItemOptics 
	{
		scope = 0;
	};
	class A6_ItemOptics_MultipleReticles : A6_ItemOptics
	{
		scope = 0;
	};
};