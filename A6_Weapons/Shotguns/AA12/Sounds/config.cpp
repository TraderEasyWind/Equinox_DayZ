class CfgPatches
{
	class AA12_Sounds
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
    class AA12_SoundShaderClose: closeShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\AA12\Sounds\AA12_close",1}};
        volume = 1.25;
    };
    class AA12_SoundShaderMid: midShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\AA12\Sounds\AA12_mid",1}};
        volume = 0.8;
    };
    class AA12_SoundShaderLong: distShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\AA12\Sounds\AA12_long",1}};
        volume = 0.4;
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class AA12_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"AA12_SoundShaderClose","AA12_SoundShaderMid","AA12_SoundShaderLong"};
    };
};