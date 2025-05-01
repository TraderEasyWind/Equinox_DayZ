class CfgPatches
{
	class A6_AUGPara_Sounds
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
	class A6_AUGPara_SoundShaderClose: closeShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\AUGPara\Sounds\AUGPara",1}};
		volume = 0.75;
	};
	class A6_AUGPara_SoundShaderMid: midShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\AUGPara\Sounds\AUGPara",1}};
		volume = 0.6;
	};
	class A6_AUGPara_SoundShaderLong: distShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\AUGPara\Sounds\AUGPara",1}};
		volume = 0.75;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_AUGPara_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_AUGPara_SoundShaderClose","A6_AUGPara_SoundShaderMid","A6_AUGPara_SoundShaderLong"};
	};
};
