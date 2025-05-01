class CfgPatches
{
	class AR50A1_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class AR50A1_SoundShaderClose : base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\AR50A1\Sounds\AR50A1",1}};
		volume = 1.3;
	};
	class AR50A1_SoundShaderMid : base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\AR50A1\Sounds\AR50A1",1}};
		volume = 0.56234133;
	};
	class AR50A1_SoundShaderLong : base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\AR50A1\Sounds\AR50A1",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class AR50A1_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AR50A1_SoundShaderClose","AR50A1_SoundShaderMid","AR50A1_SoundShaderLong"};
	};
};