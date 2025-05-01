class CfgPatches
{
	class A6_P90_Sounds
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
	class P90_SoundShaderClose: closeShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\Sounds\P90",1}};
		volume = 1.3;
	};
	class P90_SoundShaderMid: midShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\Sounds\P90",1}};
		volume = 0.56234133;
	};
	class P90_SoundShaderLong: distShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\Sounds\P90",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class P90_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"P90_SoundShaderClose","P90_SoundShaderMid","P90_SoundShaderLong"};
	};
};
