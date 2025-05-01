class CfgPatches
{
	class HoneyBadger_Sounds
	{
		units[]={"HoneyBadger"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgSoundShaders
{
    class baseCharacter_SoundShader;
    class HoneyBadger_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\SMGs\HoneyBadger\Sounds\HoneyBadgerClose",1}}; 
        volume = 1.2; 
        range = 50; 
        rangeCurve = "closeShotProfessionalSilencedAttenuationCurve";
    };
    class HoneyBadger_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\SMGs\HoneyBadger\Sounds\HoneyBadgerMid",1}}; 
        volume = 0.75;
        range = 100;
		rangeCurve = "midShotProfessionalSilencedAttenuationCurve";
    };
    class HoneyBadger_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\SMGs\HoneyBadger\Sounds\HoneyBadgerLong",1}};
        volume = 0.5; 
        range = 200;
		rangeCurve = "distShotProfessionalSilencedAttenuationCurve";
    };
};
class CfgSoundSets
{
    class Rifle_silencerHomemade_Base_SoundSet;
    class HoneyBadger_Suppressed_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"HoneyBadger_Suppressed_SoundShaderClose","HoneyBadger_Suppressed_SoundShaderMid","HoneyBadger_Suppressed_SoundShaderLong"}; 
    };
};