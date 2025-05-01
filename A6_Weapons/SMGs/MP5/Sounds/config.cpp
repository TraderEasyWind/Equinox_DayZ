class CfgPatches
{
	class A6_MP5SD_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class A6_MP5SD_SoundShaderClose
	{
		samples[] = {{"A6_Weapons\SMGs\MP5\Sounds\MP5SDClose",1}};
		volume = 1;
		range = 40;
		rangeCurve = "closeShotCurve";
	};
	class A6_MP5SD_SoundShaderMid
	{
		samples[] = {{"A6_Weapons\SMGs\MP5\Sounds\MP5SDMid",1}};
		volume = 0.56234133;
		range = 400;
		rangeCurve[] = {{0,0.2},{50,1},{75,0},{400,0}};
	};
	class A6_MP5SD_SoundShaderLong
	{
		samples[] = {{"A6_Weapons\SMGs\MP5\Sounds\MP5SDLong",1}};
		volume = 1;
		range = 400;
		rangeCurve[] = {{0,0},{50,0},{75,1},{400,1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class A6_MP5SD_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_MP5SD_SoundShaderClose","A6_MP5SD_SoundShaderMid","A6_MP5SD_SoundShaderLong"};
	};
};
