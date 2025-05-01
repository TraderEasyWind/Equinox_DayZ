class CfgPatches
{
	class A6_RPK_Sounds
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
	class A6_RPK_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\LMGs\RPK\Sounds\RPK",1}};
		volume = 0.6;
	};
	class A6_RPK_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\LMGs\RPK\Sounds\RPK",1}};
		volume = 0.6;
	};
	class A6_RPK_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\LMGs\RPK\Sounds\RPK",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_RPK_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_RPK_SoundShaderClose","A6_RPK_SoundShaderMid","A6_RPK_SoundShaderLong"};
	};
};
