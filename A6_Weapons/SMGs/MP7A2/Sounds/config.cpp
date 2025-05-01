class CfgPatches
{
	class A6_MP7A2_Sounds
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
	class A6_MP7A2_SoundShaderClose: closeShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\MP7A2\Sounds\MP7A2_Close",1}};
		volume = 1.8;
	};
	class A6_MP7A2_SoundShaderMid: midShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\MP7A2\Sounds\MP7A2_Mid",1}};
		volume = 1.4;
	};
	class A6_MP7A2_SoundShaderLong: distShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\MP7A2\Sounds\MP7A2_Long",1}};
		volume = 1.1;
	};
	class A6_MP7A2_Silenced_SoundShaderClose
	{
		samples[] = {{"A6_Weapons\SMGs\MP7A2\Sounds\MP7A2_Suppressed_Close",1}};
		volume = 1.4;
		range = 40;
		rangeCurve = "closeShotCurve";
	};
	class A6_MP7A2_Silenced_SoundShaderMid
	{
		samples[] = {{"A6_Weapons\SMGs\MP7A2\Sounds\MP7A2_Suppressed_Mid",1}};
		volume = 1.2;
		range = 100;
		rangeCurve[] = {{0,0.2},{50,1},{75,0},{400,0}};
	};
	class A6_MP7A2_Silenced_SoundShaderLong
	{
		samples[] = {{"A6_Weapons\SMGs\MP7A2\Sounds\MP7A2_Suppressed_Long",1}};
		volume = 0.8;
		range = 200;
		rangeCurve[] = {{0,0},{50,0},{75,1},{400,1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class MP7A2_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_MP7A2_SoundShaderClose","A6_MP7A2_SoundShaderMid","A6_MP7A2_SoundShaderLong"};
	};
	class MP7A2_Silenced_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_MP7A2_Silenced_SoundShaderClose","A6_MP7A2_Silenced_SoundShaderMid","A6_MP7A2_Silenced_SoundShaderLong"};
	};
};