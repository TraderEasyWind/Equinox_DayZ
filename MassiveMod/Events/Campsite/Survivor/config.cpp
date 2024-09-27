class CfgPatches
{
	class MassiveMod_SurvivorCamps
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
	class MassiveMod_SurvivorCamp: HouseNoDestruct
	{
		scope=2;
		storageCategory = 4;
		displayName="SurvivorCamp";
		descriptionShort="Aaaa";
		model="MassiveMod\Events\Campsite\Survivor\SurvivorCamp.p3d";
		physLayer = "item_large";
	};
	class MassiveMod_SurvivorCampImprov: HouseNoDestruct
	{
		scope=2;
		storageCategory = 4;
		displayName="SurvivorCamp";
		descriptionShort="Aaaa";
		model="MassiveMod\Events\Campsite\Survivor\SurvivorCampImprov.p3d";
		physLayer = "item_large";
	};
};