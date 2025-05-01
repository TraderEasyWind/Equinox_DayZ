class CfgPatches
{
	class A6_GM6Lynx_Sounds
	{
		units[]=
		{
			"A6_GM6Lynx"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgSoundShaders
{
    class base_closeShot_SoundShader;
    class base_midShot_SoundShader;
    class base_distShot_SoundShader;
    class A6_GM6Lynx_SoundShaderClose: base_closeShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\GM6Lynx\Sounds\GM6Lynx_close",1}};
        volume = 1.0;
    };
    class A6_GM6Lynx_SoundShaderMid: base_midShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\GM6Lynx\Sounds\GM6Lynx_mid",1}};
        volume = 0.8;
    };
    class A6_GM6Lynx_SoundShaderLong: base_distShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\GM6Lynx\Sounds\GM6Lynx_far",1}};
        volume = 0.6;
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class A6_GM6Lynx_Shot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"A6_GM6Lynx_SoundShaderClose","A6_GM6Lynx_SoundShaderMid","A6_GM6Lynx_SoundShaderLong"};
    };
};    