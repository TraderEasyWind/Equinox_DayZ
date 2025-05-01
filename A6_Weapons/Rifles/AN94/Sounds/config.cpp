class CfgPatches
{
	class A6_AN94_Sounds
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
	class A6_AN94_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\AN94\Sounds\AN94_Shot",1}};
		volume = 1.0;
	};
	class A6_AN94_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\AN94\Sounds\AN94_Shot",1}};
		volume = 0.56234133;
	};
	class A6_AN94_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\AN94\Sounds\AN94_Shot",1}};
		volume = 1.0;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_AN94_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_AN94_SoundShaderClose","A6_AN94_SoundShaderMid","A6_AN94_SoundShaderLong"};
	};
};
