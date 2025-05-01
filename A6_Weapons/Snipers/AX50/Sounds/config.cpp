class CfgPatches
{
	class A6_AX50_Sounds
	{
		units[]=
		{
			"A6_AX50"
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
    class A6_AX50_SoundShaderClose: base_closeShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\AX50\Sounds\AX50_Close",1}};
        volume=4.1;
    };
    class A6_AX50_SoundShaderMid: base_midShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\AX50\Sounds\AX50_Mid",1}};
        volume=3.2;
    };
    class A6_AX50_SoundShaderLong: base_distShot_SoundShader
    {
        samples[] = {{"A6_Weapons\Snipers\AX50\Sounds\AX50_Long",1}};
        volume=2.4;
    };
    class A6_AX50_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1},{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1},{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1}};
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class A6_AX50_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1},{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1},{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1}};
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
    class A6_AX50_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1},{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1},{"A6_Weapons\Snipers\AX50\Sounds\AX50_suppressed",1}};
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
    class rifle_tail_Base_soundset;
    class Rifle_InteriorTail_Base_SoundSet;
    class Rifle_silencerHomemade_Base_SoundSet;
    class Rifle_silencerHomemadeTail_Base_SoundSet;
    class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
    class baseCharacter_SoundSet;
    class A6_AX50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"A6_AX50_SoundShaderClose","A6_AX50_SoundShaderMid","A6_AX50_SoundShaderLong"};
    };
    class A6_AX50_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"A6_AX50_Suppressed_SoundShaderClose","A6_AX50_Suppressed_SoundShaderMid","A6_AX50_Suppressed_SoundShaderLong"};
    };
};    