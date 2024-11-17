class CfgPatches
{
	class MassiveMod_ModTweaks_MMIO
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"MMIO_Clothing"
        };
	};
};//meow
class cfgVehicles
{
    class Clothing;
	class GorkaHelmet;
    class MassRatnik: Clothing
	{
		repairableWithKits[]={8};
		repairCosts[]={80};
	};
	class MassLightRatnik: Clothing
	{
	    repairableWithKits[]={3,8};
		repairCosts[]={75,50};
	};
	class MassCBhelmet: GorkaHelmet
	{
		repairableWithKits[]={8};
		repairCosts[]={50};
	};
	class MassMolleBelt: Clothing
	{
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
	};
};