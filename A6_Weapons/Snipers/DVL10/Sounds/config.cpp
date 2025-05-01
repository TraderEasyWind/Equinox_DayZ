class CfgPatches
{
	class A6_DVL10_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgSoundShaders
{
    class baseCharacter_SoundShader;
    class DVL10_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Snipers\DVL10\Sounds\DVL10_Shot",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class DVL10_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Snipers\DVL10\Sounds\DVL10_Shot",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
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
    class DVL10_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Snipers\DVL10\Sounds\DVL10_Shot",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
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
    class DVL10_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"DVL10_SoundShaderClose","DVL10_SoundShaderMid","DVL10_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
};