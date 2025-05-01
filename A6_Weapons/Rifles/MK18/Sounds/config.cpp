class CfgPatches
{
	class MK18_Sounds
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
	class MK18_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\MK18\Sounds\MK18Close",1}};
		volume=2.4;
	};
	class MK18_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\MK18\Sounds\MK18Mid",1}};
		volume=1.9;
	};
	class MK18_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\MK18\Sounds\MK18Long",1}};
		volume=1.5;
	};
	class AAC300BLK_Suppressed_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Rifles\MK18\Sounds\AAC300BLKSuppressed",1}}; 
        volume = 1.0; 
        range = 50; 
        rangeCurve = "closeShotProfessionalSilencedAttenuationCurve";
    };
    class AAC300BLK_Suppressed_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Rifles\MK18\Sounds\AAC300BLKSuppressed",1}}; 
        volume = 0.75;
        range = 100;
		rangeCurve = "midShotProfessionalSilencedAttenuationCurve";
    };
    class AAC300BLK_Suppressed_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Rifles\MK18\Sounds\AAC300BLKSuppressed",1}};
        volume = 0.5; 
        range = 200;
		rangeCurve = "distShotProfessionalSilencedAttenuationCurve";
    };
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class AAC300BLK_Suppressed_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"AAC300BLK_Suppressed_SoundShaderClose","AAC300BLK_Suppressed_SoundShaderMid","AAC300BLK_Suppressed_SoundShaderLong"}; 
    };
	class MK18_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"MK18_SoundShaderClose","MK18_SoundShaderMid","MK18_SoundShaderLong"};
	};
};
