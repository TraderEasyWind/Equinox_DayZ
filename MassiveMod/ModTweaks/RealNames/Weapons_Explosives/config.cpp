class CfgPatches
{
	class Real_Names
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
	class Inventory_Base;
	class ExplosivesBase: Inventory_Base
	{
		class AnimationSources
		{
		};
	};
	class Grenade_Base;
	class RGD5Grenade: Grenade_Base
	{
		displayName="$STR_cfgVehicles_real_RGD5Grenade0";
		descriptionShort="$STR_cfgVehicles_real_RGD5Grenade1";
	};
	class M67Grenade: Grenade_Base
	{
		displayName="$STR_cfgVehicles_real_M67Grenade0";
		descriptionShort="$STR_cfgVehicles_real_M67Grenade1";
	};
	class FlashGrenade: Grenade_Base
	{
		displayName="$STR_cfgVehicles_real_FlashGrenade0";
		descriptionShort="$STR_cfgVehicles_real_FlashGrenade1";
	};
	class RDG2SmokeGrenade_ColorBase: Grenade_Base
	{
		displayName="$STR_cfgVehicles_real_RDG2SmokeGrenade_ColorBase0";
		descriptionShort="$STR_cfgVehicles_real_RDG2SmokeGrenade_ColorBase1";
	};
};
