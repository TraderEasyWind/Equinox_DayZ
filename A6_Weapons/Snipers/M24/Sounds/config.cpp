class CfgPatches
{
	class M24_Sounds
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
	class M24_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M24\Sounds\M24",1}};
		volume = 1;
	};
	class M24_SoundShaderMid: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M24\Sounds\M24",1}};
		volume = 0.56234133;
	};
	class M24_SoundShaderLong: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\M24\Sounds\M24",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class M24_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"M24_SoundShaderClose","M24_SoundShaderMid","M24_SoundShaderLong"};
	};
};
