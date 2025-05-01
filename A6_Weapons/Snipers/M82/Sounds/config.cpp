class CfgPatches
{
	class M82_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class M82_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M82\Sounds\M82Long",1}};
		volume = 1.3;
	};
	class M82_SoundShaderMid: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M82\Sounds\M82Long",1}};
		volume = 0.56234133;
	};
	class M82_SoundShaderLong: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M82\Sounds\M82Long",1}};
		volume = 1;
	};
	class M82_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1},{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1},{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1}};
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class M82_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1},{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1},{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1}};
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
    class M82_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1},{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1},{"A6_Weapons\Snipers\M82\Sounds\M82ShotSuppressed",1}};
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
	class M82_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"M82_SoundShaderClose","M82_SoundShaderMid","M82_SoundShaderLong"};
	};
	class Rifle_silencerHomemade_Base_SoundSet;
	class M82_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"M82_Suppressed_SoundShaderClose","M82_Suppressed_SoundShaderMid","M82_Suppressed_SoundShaderLong"};
    };
};
