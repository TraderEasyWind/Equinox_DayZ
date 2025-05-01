class CfgPatches
{
	class A6_SuppressedShotgun_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class SuppressedShotgun_SoundShaderClose
    {
        samples[] = {{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1},{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1},{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1}};
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class SuppressedShotgun_SoundShaderMid
    {
        samples[] = {{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1},{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1},{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1}};
        volume = 0.56234133;
        range = 200;
        rangeCurve[] = 
        {
            {0,0.2},
            {75,1},
            {100,0},
            {200,0}
        };
    };
    class SuppressedShotgun_SoundShaderLong
    {
        samples[] = {{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1},{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1},{"A6_Weapons\Shotguns\Spas12\Sounds\SuppressedShotgun",1}};
        volume=0.5;
        range = 400;
        rangeCurve[]=
        {
            {0,0},
            {100,0},
            {200,1},
            {400,1}
        };
    };
};
class CfgSoundSets
{
	class Rifle_silencerHomemade_Base_SoundSet;
	class SuppressedShotgun_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
    {
        soundShaders[] = {"SuppressedShotgun_SoundShaderClose","SuppressedShotgun_SoundShaderMid","SuppressedShotgun_SoundShaderLong"};
    };
};
