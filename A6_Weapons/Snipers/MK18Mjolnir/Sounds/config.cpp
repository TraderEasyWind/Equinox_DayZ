class CfgPatches
{
	class A6_MK18_Mjolnir_Sounds
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
	class A6_MK18_Mjolnir_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\MK18Mjolnir\Sounds\MK18Mjolnir_shot",1}};
		volume = 1;
	};
	class A6_MK18_Mjolnir_SoundShaderMid: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\MK18Mjolnir\Sounds\MK18Mjolnir_shot",1}};
		volume = 1;
	};
	class A6_MK18_Mjolnir_SoundShaderLong: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\MK18Mjolnir\Sounds\MK18Mjolnir_shot",1}};
		volume = 1;
	};
	class A6_MK18_Mjolnir_Suppressed_SoundShaderClose
	{
		samples[] = {{"A6_Weapons\Snipers\MK18Mjolnir\Sounds\MK18Mjolnir_suppressed_shot",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class A6_MK18_Mjolnir_Suppressed_SoundShaderMid
	{
		samples[] = {{"A6_Weapons\Snipers\MK18Mjolnir\Sounds\MK18Mjolnir_suppressed_shot",1}};
		volume = 0.7;
		range = 500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{500,0}};
	};
	class A6_MK18_Mjolnir_Suppressed_SoundShaderLong
	{
		samples[] = {{"A6_Weapons\Snipers\MK18Mjolnir\Sounds\MK18Mjolnir_suppressed_shot",1}};
		volume = 0.7;
		range = 500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{500,1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_MK18_Mjolnir_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_MK18_Mjolnir_SoundShaderClose","A6_MK18_Mjolnir_SoundShaderMid","A6_MK18_Mjolnir_SoundShaderLong"};
	};
	class A6_MK18_Mjolnir_Suppressed_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_MK18_Mjolnir_Suppressed_SoundShaderClose","A6_MK18_Mjolnir_Suppressed_SoundShaderMid","A6_MK18_Mjolnir_Suppressed_SoundShaderLong"};
	};
};
