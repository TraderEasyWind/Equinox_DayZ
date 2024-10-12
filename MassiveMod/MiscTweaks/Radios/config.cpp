// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Testmod_ModTweaks_Radio
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Testmod_ModTweaks", 
			"DZ_Radio"
		};
	};
	
};
class CfgVehicles
{
	class Inventory_Base;
	class HouseNoDestruct;
	class BaseRadio;
	class Transmitter_Base: Inventory_Base
	{
		scope=0;
	};
	class PersonalRadio: Transmitter_Base
	{
		range=8000;
	};
	class EQ_Admin_BaseRadio: BaseRadio
	{
		range=100000;
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0;
			plugType=5;
			attachmentAction=1;
		};
	};
};	
