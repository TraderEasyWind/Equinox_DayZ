class CfgPatches
{
	class VSSK_Sounds
	{
		units[]=
		{
			"VSSK"
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
    class baseCharacter_SoundShader;
    class VSSK_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Snipers\VSSK\Sounds\VSSKClose",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1.3; // Edit this
        range = 30; // This is how close/far you have to be in order to hear said sound
        rangeCurve = "closeShotCurve"; // Have a look through over configs to find out what this does!
    };
    class VSSK_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Snipers\VSSK\Sounds\VSSKMid",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
        range = 700; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{100,0},
			{700,0}
		}; // Have a look through over configs to find out what this does!
    };
    class VSSK_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Snipers\VSSK\Sounds\VSSKLong",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 700; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{100,1},
			{700,1}
		}; // Have a look through over configs to find out what this does!
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class VSSK_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"VSSK_SoundShaderClose","VSSK_SoundShaderMid","VSSK_SoundShaderLong"}; // You can put multiple sound shaders in here, but only do it for certain shots, such as a close shot, far shot, etc. Not suppressed. You can put multiple in here, such as i.e
        // soundShaders[] = {"SoundName_Whatever_SoundShader","SoundName_Close_SoundShader","SoundName_Far_SoundShader"};
    };
};