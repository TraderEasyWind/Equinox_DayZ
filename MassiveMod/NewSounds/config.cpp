class CfgPatches
{
	class NDSounds
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects"
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
    class putItemInventory_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"MassiveMod\NewSounds\sounds\PickUpItems\IntoHands1",1},{"MassiveMod\NewSounds\sounds\PickUpItems\IntoHands2",1},{"MassiveMod\NewSounds\sounds\PickUpItems\IntoHands3",1},{"MassiveMod\NewSounds\sounds\PickUpItems\IntoHands4",1},{"MassiveMod\NewSounds\sounds\PickUpItems\IntoHands5",1}};
		volume = 0.075;
	};
};