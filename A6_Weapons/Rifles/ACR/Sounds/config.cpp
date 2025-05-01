class CfgPatches
{
	class A6_PSG1_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class closeShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class distShotRifle_SoundShader;
	class PSG1_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\ACR\Sounds\PSG1Close",1}};
		volume = 1.6;
	};
	class PSG1_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\ACR\Sounds\PSG1Mid",1}};
		volume = 0.56234133;
	};
	class PSG1_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\ACR\Sounds\PSG1Long",1}};
		volume = 1;
	};
	class SPC_suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1},{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1},{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1}};
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class SPC_suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1},{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1},{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1}};
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
    class SPC_suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1},{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1},{"A6_Weapons\Rifles\ACR\Sounds\SPC_suppressed",1}};
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
	class PSG1_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"PSG1_SoundShaderClose","PSG1_SoundShaderMid","PSG1_SoundShaderLong"};
	};
	class SPC_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"SPC_suppressed_SoundShaderClose","SPC_suppressed_SoundShaderMid","SPC_suppressed_SoundShaderLong"};
    };
};
