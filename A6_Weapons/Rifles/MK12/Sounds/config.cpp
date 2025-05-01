class CfgPatches
{
	class A6_MK12_Sounds
	{
		units[]=
		{
			"MK12"
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
    class closeShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class distShotRifle_SoundShader;    
    class MK12_SoundShaderClose: closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\MK12\Sounds\MK12Close",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
    };
    class MK12_SoundShaderMid: midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\MK12\Sounds\MK12Mid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class MK12_SoundShaderLong: distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\MK12\Sounds\MK12Long",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class MK12_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"MK12_SoundShaderClose","MK12_SoundShaderMid","MK12_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
};