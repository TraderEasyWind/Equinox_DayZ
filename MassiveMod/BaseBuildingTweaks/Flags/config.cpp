class CfgPatches
{
	class MassiveModFlags
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Camping"};
	};
};//meow
class CfgVehicles
{
	class Flag_Base;
	class Flag_Spearhead: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MassiveMod\BaseBuildingTweaks\Flags\Data\Spearheadflag.paa"};
	};
	class Flag_Spearhead2: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"MassiveMod\BaseBuildingTweaks\Flags\Data\Spearheadflag2.paa"};
	};
};