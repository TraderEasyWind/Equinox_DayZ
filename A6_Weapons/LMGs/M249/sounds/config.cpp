class CfgPatches
{
	class M249_Sounds
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
	class M249G_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\LMGs\M249\sounds\M249G",1}};
		volume = 1.0; // Edit this
	};
	class M249G_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\LMGs\M249\sounds\M249G",1}};
		volume = 0.56234133; // Edit this
	};
	class M249G_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\LMGs\M249\sounds\M249G",1}};
		volume = 0.75; // Edit this
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class M249G_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M249G_SoundShaderClose",
			"M249G_SoundShaderMid",
			"M249G_SoundShaderLong"
		};
	};
};
