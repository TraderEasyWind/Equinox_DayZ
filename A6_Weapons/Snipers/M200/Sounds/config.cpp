class CfgPatches
{
	class A6_M200_Sounds
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
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class M200_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[]={{"A6_Weapons\Snipers\M200\Sounds\M200Close",1}};
		volume=1.6;
	};
	class M200_SoundShaderMid: base_midShot_SoundShader
	{
		samples[]={{"A6_Weapons\Snipers\M200\Sounds\M200Mid",1}};
		volume=1.2;	
	};
	class M200_SoundShaderLong: base_distShot_SoundShader
	{
		samples[]={{"A6_Weapons\Snipers\M200\Sounds\M200Long",1}};
		volume = 1.4;
	};
	class M200_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1},{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1},{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1}};
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class M200_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1},{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1},{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1}};
        volume = 0.8;
        range = 300;
        rangeCurve[] = 
        {
            {0,0.2},
            {50,1},
            {175,0},
            {300,0}
        };
    };
    class M200_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1},{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1},{"A6_Weapons\Snipers\M200\Sounds\M200_suppressed",1}};
        volume=0.6;
        range = 600;
        rangeCurve[]=
        {
            {0,0},
            {50,0},
            {175,1},
            {600,1}
        };
    };
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class M200_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_SoundShaderClose",
			"M200_SoundShaderMid",
			"M200_SoundShaderLong"
		};
	};
	class M200_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"M200_Suppressed_SoundShaderClose","M200_Suppressed_SoundShaderMid","M200_Suppressed_SoundShaderLong"};
	};
};
