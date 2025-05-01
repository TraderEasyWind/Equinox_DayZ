class CfgPatches
{
	class A6_Beowulf_Sounds
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
    class Beowulf_SoundShaderClose : closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_close",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.4; // Edit this
    };
    class Beowulf_SoundShaderMid : midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_mid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class Beowulf_SoundShaderLong : distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_far",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
    };
    class Beowulf_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1},{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1},{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1}};
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class Beowulf_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1},{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1},{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1}};
        volume = 0.56234133;
        range = 250;
        rangeCurve[] = 
        {
            {0,0.2},
            {50,1},
            {140,0},
            {250,0}
        };
    };
    class Beowulf_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1},{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1},{"A6_Weapons\Rifles\Beowulf\Sounds\50Beo_suppressed",1}};
        volume=0.5;
        range = 400;
        rangeCurve[]=
        {
            {0,0},
            {50,0},
            {140,1},
            {400,1}
        };
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class Rifle_silencerHomemade_Base_SoundSet;
    class Beowulf_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"Beowulf_SoundShaderClose","Beowulf_SoundShaderMid","Beowulf_SoundShaderLong"};
    };
    class Beowulf_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"Beowulf_Suppressed_SoundShaderClose","Beowulf_Suppressed_SoundShaderMid","Beowulf_Suppressed_SoundShaderLong"};
    };
};