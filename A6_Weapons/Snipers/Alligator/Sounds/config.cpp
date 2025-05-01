class CfgPatches
{
	class Alligator_Sounds
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
	class Alligator_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\Alligator\Sounds\alligator",1}};
		volume = 1.0;
	};
	class Alligator_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\Alligator\Sounds\alligator",1}};
		volume = 0.8;
	};
	class Alligator_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\Alligator\Sounds\alligator",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Alligator_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Alligator_closeShot_SoundShader","Alligator_midShot_SoundShader","Alligator_distShot_SoundShader"};
	};
};