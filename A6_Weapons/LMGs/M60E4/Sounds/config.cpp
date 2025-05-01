class CfgPatches
{
	class A6_M60E4_Sounds
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
    class M60E4_SoundShaderClose: closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\LMGs\M60E4\Sounds\M60E4",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.0; // Edit this
    };
    class M60E4_SoundShaderMid: midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\LMGs\M60E4\Sounds\M60E4",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class M60E4_SoundShaderLong: distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\LMGs\M60E4\Sounds\M60E4",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.75; // Edit this
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class M60E4_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"M60E4_SoundShaderClose","M60E4_SoundShaderMid","M60E4_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
};