class CfgPatches
{
	class A6_GenericAR_Sounds
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
    class AR_SoundShaderClose: closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\Sounds\GenericAR\ARClose",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.4; // Edit this
    };
    class AR_SoundShaderMid: midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\Sounds\GenericAR\ARMid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class AR_SoundShaderLong: distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\Sounds\GenericAR\ARLong",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class AR_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"AR_SoundShaderClose","AR_SoundShaderMid","AR_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
};