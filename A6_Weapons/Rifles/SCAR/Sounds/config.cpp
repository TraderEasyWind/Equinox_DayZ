class CfgPatches
{
	class A6_SCARH_Sounds
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
    class SCARL_SoundShaderClose: closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\SCARL",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.75; // Edit this
    };
    class SCARL_SoundShaderMid: midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\SCARL",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class SCARL_SoundShaderLong: distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\SCARL",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.75; // Edit this
    }; 
    class SCARH_SoundShaderClose: closeShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\SCARHClose",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.75; // Edit this
    };
    class SCARH_SoundShaderMid: midShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\SCARHMid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
    };
    class SCARH_SoundShaderLong: distShotRifle_SoundShader
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\SCARHLong",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.75; // Edit this
    };
    class G308_suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1},{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1},{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1}};
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class G308_suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1},{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1},{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1}};
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
    class G308_suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1},{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1},{"A6_Weapons\Rifles\SCAR\Sounds\G308_suppressed",1}};
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
    class SCARL_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"SCARL_SoundShaderClose","SCARL_SoundShaderMid","SCARL_SoundShaderLong"};
    };
    class SCARH_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"SCARH_SoundShaderClose","SCARH_SoundShaderMid","SCARH_SoundShaderLong"};
    };
    class G308_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"G308_suppressed_SoundShaderClose","G308_suppressed_SoundShaderMid","G308_suppressed_SoundShaderLong"};
    };
};