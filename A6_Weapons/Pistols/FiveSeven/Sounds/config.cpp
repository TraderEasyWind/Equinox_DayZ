class CfgPatches
{
	class A6_FiveSeven_Sounds
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
    class closeShotSMG_SoundShader;
    class midShotSMG_SoundShader;
    class distShotSMG_SoundShader;    
    class FiveSeven_SoundShaderClose: closeShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Pistols\FiveSeven\Sounds\FiveSevenLong",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.2; // Edit this
    };
    class FiveSeven_SoundShaderMid: midShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Pistols\FiveSeven\Sounds\FiveSevenMid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class FiveSeven_SoundShaderLong: distShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Pistols\FiveSeven\Sounds\FiveSevenClose",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class FiveSeven_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"FiveSeven_SoundShaderClose","FiveSeven_SoundShaderMid","FiveSeven_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
};