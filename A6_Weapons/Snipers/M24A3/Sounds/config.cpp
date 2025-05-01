class CfgPatches
{
	class A6_M24A3_Sounds
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
	class A6_M24A3_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M24A3\Sounds\M24A3",1}};
		volume = 1;
	};
	class A6_M24A3_SoundShaderMid: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M24A3\Sounds\M24A3",1}};
		volume = 1;
	};
	class A6_M24A3_SoundShaderLong: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M24A3\Sounds\M24A3",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_M24A3_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_M24A3_SoundShaderClose","A6_M24A3_SoundShaderMid","A6_M24A3_SoundShaderLong"};
	};
};
