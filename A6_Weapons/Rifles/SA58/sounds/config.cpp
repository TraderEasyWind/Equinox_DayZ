class CfgPatches
{
	class A6_SA58_Sounds
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
	class SA58_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\SA58\sounds\sa58",1}};
		volume = 1.0;
	};
	class SA58_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\SA58\sounds\sa58",1}};
		volume = 0.7;
	};
	class SA58_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Rifles\SA58\sounds\sa58",1}};
		volume = 0.35;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class SA58_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SA58_closeShot_SoundShader","SA58_midShot_SoundShader","SA58_distShot_SoundShader"};
	};
};