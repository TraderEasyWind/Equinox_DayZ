class CfgPatches
{
	class M4SBR_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgSoundShaders
{
	class closeShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class distShotRifle_SoundShader;	
	class HK416_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]= {{"A6_Weapons\Rifles\HK416\Sounds\HK416",1}};
		volume=1.0;
	};
	class HK416_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\HK416\Sounds\HK416",1}};
		volume = 0.56234133;
	};
	class HK416_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\HK416\Sounds\HK416",1}};
		volume=1.0;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class HK416_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"HK416_SoundShaderClose","HK416_SoundShaderMid","HK416_SoundShaderLong"};
	};
};
