class CfgPatches
{
	class MassiveModEvents_C130
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class MassiveMod_Land_Wreck_C130J: HouseNoDestruct
	{
		scope = 2;
		storageCategory = 4;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_C130J.p3d";
	};
};