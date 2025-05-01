class CfgPatches
{
	class M300_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class M300_SoundShaderClose: base_closeShot_SoundShader
	{
		samples[]={{"A6_Weapons\Snipers\M300\Sounds\M300",1}};
		volume=2.6;
	};
	class M300_SoundShaderMid: base_midShot_SoundShader
	{
		samples[]={{"A6_Weapons\Snipers\M300\Sounds\M300",1}};
		volume=1.8;
	};
	class M300_SoundShaderLong: base_distShot_SoundShader
	{
		samples[]={{"A6_Weapons\Snipers\M300\Sounds\M300",1}};
		volume=1.4;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class M300_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_SoundShaderClose",
			"M300_SoundShaderMid",
			"M300_SoundShaderLong"
		};
	};
};

