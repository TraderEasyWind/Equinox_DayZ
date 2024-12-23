class CfgPatches
{
	class MassiveMod_ModTweaks_JDWeapons
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"MassiveMod_ModTweaks"
        };
	};
};//meow
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_40mm_Base;
	class Bullet_JDRPGRocket: Bullet_40mm_Base
	{
		bulletEffect="BulletEffect_JD_RPG7";
	};
};