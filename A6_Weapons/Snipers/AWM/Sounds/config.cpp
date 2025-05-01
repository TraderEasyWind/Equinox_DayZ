class CfgPatches
{
	class A6_AWM_Sounds
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

	class AWM_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\AWM\Sounds\AWMClose",1}};
		volume = 1.2;
	};
	class AWM_SoundShaderMid: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\AWM\Sounds\AWMMid",1}};
		volume = 0.56234133;
	};
	class AWM_SoundShaderLong: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\AWM\Sounds\AWMLong",1}};
		volume = 1.0;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class AWM_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AWM_SoundShaderClose","AWM_SoundShaderMid","AWM_SoundShaderLong"};
	};
};
