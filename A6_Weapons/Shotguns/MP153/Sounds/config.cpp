class CfgPatches
{
	class MP153_Sounds
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
    class MP153_SoundShaderClose: closeShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\MP153\Sounds\MP153_Shot",1}};
        volume = 1.0;
    };
    class MP153_SoundShaderMid: midShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\MP153\Sounds\MP153_Shot",1}};
       	volume = 0.56234133;
    };
    class MP153_SoundShaderLong: distShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\MP153\Sounds\MP153_Shot",1}};
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class MP153_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"MP153_SoundShaderClose","MP153_SoundShaderMid","MP153_SoundShaderLong"};
    };
};