class CfgPatches
{
	class A6_T5000_Sounds
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
	class A6_T5000_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\T5000\Sounds\T5000_sounset1",1}};
		volume = 0.7;
	};
	class A6_T5000_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\T5000\Sounds\T5000_sounset1",1}};
		volume = 1.2; // Edit this
	};
	class A6_T5000_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\T5000\Sounds\T5000_sounset1",1}};
		volume = 2.0;
	};
	class A6_T5000_Suppressed_Shot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1},{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1},{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1}};
		volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
	};
	class A6_T5000_Suppressed_midshot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1},{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1},{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1}};
		volume = 0.8;
        range = 300;
        rangeCurve[] = 
        {
            {0,0.2},
            {50,1},
            {175,0},
            {300,0}
        };
	};
	class A6_T5000_Suppressed_distShot_SoundShader
	{
		samples[] = {{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1},{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1},{"A6_Weapons\Snipers\T5000\Sounds\T5000_suppressed",1}};
        volume=0.6;
        range = 600;
        rangeCurve[]=
        {
            {0,0},
            {50,0},
            {175,1},
            {600,1}
        };
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	class A6_T5000_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"A6_T5000_Shot_SoundShader","A6_T5000_midShot_SoundShader","A6_T5000_distShot_SoundShader"};
	};
	class A6_T5000_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"A6_T5000_Suppressed_Shot_SoundShader","A6_T5000_Suppressed_midshot_SoundShader","A6_T5000_Suppressed_distShot_SoundShader"};
	};
};
