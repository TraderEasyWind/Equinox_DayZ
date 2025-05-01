class CfgPatches
{
	class A6_9A91_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class closeShotSMG_SoundShader;
    class midShotSMG_SoundShader;
    class distShotSMG_SoundShader;	
	class A6_9A91_SoundShaderClose: closeShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\9A91\Sounds\9A91",1}};
		volume = 1.3;
	};
	class A6_9A91_SoundShaderMid: midShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\9A91\Sounds\9A91",1}};
		volume = 0.56234133;
	};
	class A6_9A91_SoundShaderLong: distShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\9A91\Sounds\9A91",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_9A91_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_9A91_SoundShaderClose","A6_9A91_SoundShaderMid","A6_9A91_SoundShaderLong"};
	};
};
