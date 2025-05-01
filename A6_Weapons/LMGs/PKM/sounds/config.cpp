class CfgPatches
{
	class PKM_Sounds
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
	class PKMG_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\LMGs\PKM\sounds\PKMGClose",1}};
		volume=4.1;
	};
	class PKMG_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\LMGs\PKM\sounds\PKMGMid",1}};
		volume=3.2;
	};
	class PKMG_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\LMGs\PKM\sounds\PKMGLong",1}};
		volume=2.4;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class PKMG_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKMG_SoundShaderClose",
			"PKMG_SoundShaderMid",
			"PKMG_SoundShaderLong"
		};
	};
};
