class CfgPatches
{
	class A6_Vector_Sounds
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
	class Vector_SoundShaderClose: closeShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\Vector\Sounds\VectorClose",1}};
		volume = 1.3;
	};
	class Vector_SoundShaderMid: midShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\Vector\Sounds\VectorMid",1}};
		volume = 0.56234133;
	};
	class Vector_SoundShaderLong: distShotSMG_SoundShader
	{
		samples[] = {{"A6_Weapons\SMGs\Vector\Sounds\VectorLong",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Vector_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Vector_SoundShaderClose","Vector_SoundShaderMid","Vector_SoundShaderLong"};
	};
};
