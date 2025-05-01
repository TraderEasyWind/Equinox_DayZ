class CfgPatches
{
	class AR10_Sounds
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
	class AR10_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\AR10\Sounds\AR10Close",1}};
		volume = 1.3;
	};
	class AR10_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\AR10\Sounds\AR10Close",1}};
		volume = 0.8;
	};
	class AR10_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\AR10\Sounds\AR10Close",1}};
		volume = 1.0;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class AR10_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"AR10_SoundShaderClose","AR10_SoundShaderMid","AR10_SoundShaderLong"};
	};
};
