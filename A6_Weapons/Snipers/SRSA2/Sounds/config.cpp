class CfgPatches
{
	class A6_SRSA2_SOUNDS
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects",
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
    class A6_SRSA2_SoundShaderClose: base_closeShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\SRSA2\Sounds\SRSA2_Close",1}};
        volume = 1.5; // Edit this
    };
    class A6_SRSA2_SoundShaderMid: base_midShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\SRSA2\Sounds\SRSA2_Mid",1}};
        volume = 1.3; // Edit this
    };
    class A6_SRSA2_SoundShaderLong: base_distShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\SRSA2\Sounds\SRSA2_Long",1}};
        volume = 1.0;
    };
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_SRSA2_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_SRSA2_SoundShaderClose","A6_SRSA2_SoundShaderMid","A6_SRSA2_SoundShaderLong"};
	};
};	