class CfgPatches
{
	class A6_AK50_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Sounds_Effects"
		};
	};
};
class CfgSoundShaders
{
    class closeShotRifle_SoundShader;
    class midShotRifle_SoundShader;
    class distShotRifle_SoundShader;
    class AK50_SoundShaderClose : closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\AK50\sounds\AK50_close",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.4; // Edit this
    };
    class AK50_SoundShaderMid : midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\AK50\sounds\AK50_mid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class AK50_SoundShaderLong : distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\AK50\sounds\AK50_far",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class Rifle_silencerHomemade_Base_SoundSet;
    class AK50_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"AK50_SoundShaderClose","AK50_SoundShaderMid","AK50_SoundShaderLong"};
    };
};