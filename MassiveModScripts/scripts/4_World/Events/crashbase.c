modded class CrashBase extends House
{
	override static bool Init()
	{
		CrashSoundSets.RegisterSoundSet("HeliCrash_Distant_SoundSet");
		CrashSoundSets.RegisterSoundSet("SledgeCrash_Distant_SoundSet");
		CrashSoundSets.RegisterSoundSet("C130_Close_SoundSet");
		return true;
	}
};