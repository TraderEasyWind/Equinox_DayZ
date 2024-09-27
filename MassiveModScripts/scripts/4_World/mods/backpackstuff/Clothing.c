enum MassBagSoundState
{
	CLOSE = -1,
	STANDBY = 0,
	OPEN = 1,
};

modded class Clothing
{
	protected int m_BagSound = MassBagSoundState.STANDBY;
	
	void Clothing()
	{
		RegisterNetSyncVariableInt("m_BagSound", MassBagSoundState.CLOSE, MassBagSoundState.OPEN);
	}
	
	override void OnRPC(PlayerIdentity sender, int rpc_type,ParamsReadContext  ctx) 
	{
		super.OnRPC(sender, rpc_type, ctx);

		Param1<bool> p = new Param1<bool>(false);
					
		if (!ctx.Read(p))
			return;

		if (rpc_type == 3675309)
		{
			if (p.param1)
			{
				m_BagSound = MassBagSoundState.OPEN;
			}
			else
			{
				m_BagSound = MassBagSoundState.CLOSE;
			}

			SetSynchDirty();
		}
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if (m_BagSound != MassBagSoundState.STANDBY)
			PlayBagSound();
	}
	
	protected void PlayBagSound()
	{
#ifndef SERVER
		string soundName;
		if ( m_BagSound == MassBagSoundState.OPEN )
		{
			if (ConfigIsExisting("InventorySoundsZipperBagOpen"))
				soundName = ConfigGetString("InventorySoundsZipperBagOpen");
		}
		else
		{
			if (ConfigIsExisting("InventorySoundsZipperBagClose"))
				soundName = ConfigGetString("InventorySoundsZipperBagClose");
		}
		
		if (soundName == string.Empty)
			return;
		
		EffectSound effect_sound;
		PlaySoundSet(effect_sound, soundName, false, false, false);
		effect_sound.SetSoundAutodestroy(true);
#endif

		m_BagSound = MassBagSoundState.STANDBY;
	}

	bool HasValidZipperSound()
	{
		if (!ConfigIsExisting("InventorySoundsZipperBagOpen"))
			return false;

		if (ConfigGetString("InventorySoundsZipperBagOpen") == string.Empty)
			return false;

		if (!ConfigIsExisting("InventorySoundsZipperBagClose"))
			return false;

		if (ConfigGetString("InventorySoundsZipperBagClose") == string.Empty)
			return false;

		return true;
	}
};