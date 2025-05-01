class CfgPatches
{
	class A6_FNEvolys_Sounds
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
    class closeShotRifle_SoundShader;
    class midShotRifle_SoundShader;
    class distShotRifle_SoundShader;    
    class FNEvolys_SoundShaderClose: closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.0; // Edit this
    };
    class FNEvolys_SoundShaderMid: midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class FNEvolys_SoundShaderLong: distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.75; // Edit this
    };
    class FNEvolys_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1},{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1},{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1}};
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class FNEvolys_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1},{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1},{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1}};
        volume = 0.56234133;
        range = 200;
        rangeCurve[] = 
        {
            {0,0.2},
            {75,1},
            {100,0},
            {200,0}
        };
    };
    class FNEvolys_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1},{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1},{"A6_Weapons\LMGs\FNEvolys\Sounds\FNEvolys_suppressed",1}};
        volume=0.5;
        range = 400;
        rangeCurve[]=
        {
            {0,0},
            {100,0},
            {200,1},
            {400,1}
        };
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class Rifle_silencerHomemade_Base_SoundSet;
    class FNEvolys_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"FNEvolys_SoundShaderClose","FNEvolys_SoundShaderMid","FNEvolys_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
    class FNEvolys_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"FNEvolys_Suppressed_SoundShaderClose","FNEvolys_Suppressed_SoundShaderMid","FNEvolys_Suppressed_SoundShaderLong"};
    };
};