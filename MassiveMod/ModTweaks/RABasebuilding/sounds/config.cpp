class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuilding_Sounds
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"Rearmed_BaseBuilding"
        };
	};
};
class CfgSounds
{
	class BeepSound
	{
		sound[]=
		{
			"\RearmedServer\BaseBuilding\Sounds\data\Beep",
			1,
			1,
			6
		};
	};
};
class CfgSoundShaders
{
	class Beep_SoundShader
	{
		samples[]=
		{
			
			{
				"\RearmedServer\BaseBuilding\Sounds\data\Beep",
				1
			}
		};
		range=2;
		volume=0.5;
	};
};
