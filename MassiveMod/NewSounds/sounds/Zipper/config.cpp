
class CfgPatches
{
	class Spearhead_ZipperSounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
		author = "Mass";
		name = "CMASIGAIMGHIDJFUASD";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class ZipperSFX_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"MassiveMod\NewSounds\sounds\Zipper\Zipper1",1},{"MassiveMod\NewSounds\sounds\Zipper\Zipper2",1},{"MassiveMod\NewSounds\sounds\Zipper\Zipper3",1}};
		volume = 0.10;
	};
	class RustlingSFX_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"MassiveMod\NewSounds\sounds\Zipper\RustlingBag1",1},{"MassiveMod\NewSounds\sounds\Zipper\RustlingBag2",1},{"MassiveMod\NewSounds\sounds\Zipper\RustlingBag3",1}};
		volume = 0.10;
	};
	class MassiveModClick_Soundshader: baseCharacter_SoundShader
	{
		samples[] = {{"MassiveMod\NewSounds\sounds\Zipper\Click1",1},{"MassiveMod\NewSounds\sounds\Zipper\Click2",1},{"MassiveMod\NewSounds\sounds\Zipper\Click3",1},{"MassiveMod\NewSounds\sounds\Zipper\Click4",1}};
		volume = 0.70;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class MassiveModZipper_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"RustlingSFX_Soundshader","ZipperSFX_Soundshader"};
		frequencyRandomizer = 0.1;
		volumeRandomizer = 1;
	};
	class MassiveModRustlingSFX_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"RustlingSFX_Soundshader"};
		frequencyRandomizer = 0.1;
		volumeRandomizer = 1;
	};
	class MassiveModRustlingClickSFX_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"RustlingSFX_Soundshader","MassiveModClick_Soundshader"};
		frequencyRandomizer = 0.1;
		volumeRandomizer = 1;
	};
	class MassiveModHeavyMilitaryBagSFX_Soundset: baseCharacter_SoundSet
	{
		soundShaders[] = {"RustlingSFX_Soundshader","MassiveModClick_Soundshader","ZipperSFX_Soundshader"};
		frequencyRandomizer = 0.1;
		volumeRandomizer = 1;
	};
};
