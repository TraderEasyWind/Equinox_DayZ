class CfgPatches
{
	class Mossberg590_Sounds
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
    class Mossberg590_SoundShaderClose: closeShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\Mossberg\Sounds\Mossberg590_Shot",1}};
        volume = 1.0;
    };
    class Mossberg590_SoundShaderMid: midShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\Mossberg\Sounds\Mossberg590_Shot",1}};
       	volume = 0.56234133;
    };
    class Mossberg590_SoundShaderLong: distShotSMG_SoundShader
    {
        samples[] = {{"A6_Weapons\Shotguns\Mossberg\Sounds\Mossberg590_Shot",1}};
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class Mossberg590_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"Mossberg590_SoundShaderClose","Mossberg590_SoundShaderMid","Mossberg590_SoundShaderLong"};
    };
};