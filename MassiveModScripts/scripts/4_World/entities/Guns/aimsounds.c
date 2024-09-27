class AimSoundsConstants
{
	static const string SOUNDSET_IN = "_aim_in_SoundSet";
	static const string SOUNDSET_OUT = "_aim_out_SoundSet";
	static const string CONFIG_ENTRY = "aimSoundSet";
	static const string DEFAULT_SOUNDSET = "AK";

	static const float MAX_RANGE = 15;

	static const int RPC_WEAPON_RAISE = 873659;
}

modded class DayZPlayerImplement extends DayZPlayer
{
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx) 
	{
		super.OnRPC(sender, rpc_type, ctx);
		
		ref Param2<Weapon_Base, bool> params = new Param2<Weapon_Base, bool>(null, false);
		if (rpc_type == AimSoundsConstants.RPC_WEAPON_RAISE && ctx.Read(params))
		{
			PlayAimSound(params.param1, params.param2);
		}
	}

	override void HandleWeapons(float pDt, Entity pInHands, HumanInputController pInputs, out bool pExitIronSights)
	{
		super.HandleWeapons(pDt, pInHands, pInputs, pExitIronSights);

		Weapon_Base weapon;
		if (!Class.CastTo(weapon, pInHands)) return;

		if (m_IsFireWeaponRaised && !m_RaiseStarted) //enter
		{
			SendAimSound(weapon, false);
		}
		else if (!m_IsFireWeaponRaised && m_RaiseStarted) //exit
		{
			SendAimSound(weapon, true);
		}
	}

	void SendAimSound(Weapon_Base weapon, bool exit)
	{
		if (GetGame().IsMultiplayer() && GetGame().IsServer())
		{
			Param2<Weapon_Base, bool> params = new Param2<Weapon_Base, bool>(weapon, exit);

			array<Man> players = new array<Man>;
			GetGame().GetWorld().GetPlayerList(players);
			
			// We only want to send our send RPC to players that are within range
			for (int i = 0; i < players.Count(); ++i)
			{
				Man player = players[i];
				PlayerIdentity player_identity = player.GetIdentity();

				// Compare distance between target player and weapon holder (this)
				if (!player || !player_identity || (GetIdentity() && player_identity == GetIdentity()) || vector.Distance(GetPosition(), player.GetPosition()) > AimSoundsConstants.MAX_RANGE)
					continue;

				RPCSingleParam(AimSoundsConstants.RPC_WEAPON_RAISE, params, true, player_identity);
			}
		}
		else
		{
			PlayAimSound(weapon, exit);
		}
	}

	protected void PlayAimSound(Weapon_Base weapon, bool exit)
	{
		if (GetGame().IsServer() && GetGame().IsMultiplayer()) 
			return;

		string sound_set = GetAimSoundSet(weapon, exit);

		EffectSound sound;
		PlaySoundSet(sound, sound_set, 0, 0);
		sound.SetSoundVolume(sound.GetSoundVolume() * 1.5);
	}

	protected string GetAimSoundSet(Weapon_Base weapon, bool exit)
	{
		string sound_set;

		if (!weapon)
		{
			if (exit)
				return AimSoundsConstants.DEFAULT_SOUNDSET + AimSoundsConstants.SOUNDSET_OUT;
			else
				return AimSoundsConstants.DEFAULT_SOUNDSET + AimSoundsConstants.SOUNDSET_IN;
		}

		sound_set = weapon.ConfigGetString(AimSoundsConstants.CONFIG_ENTRY);

		// Fallback - predict sound set
		if (!sound_set || sound_set.Length() == 0)
			sound_set = PredictAimSoundSet(weapon);

		if (exit)
			return sound_set + AimSoundsConstants.SOUNDSET_OUT;
		else
			return sound_set + AimSoundsConstants.SOUNDSET_IN;
	}

	protected string PredictAimSoundSet(Weapon_Base weapon)
	{
		if (!weapon)
			return AimSoundsConstants.DEFAULT_SOUNDSET;

		if (weapon.IsInherited(Pistol_Base) || weapon.IsInherited(Magnum_Base))
			return "FNX45";

		if (weapon.IsInherited(BoltActionRifle_InnerMagazine_Base))
			return "Mosin";
		
		if (weapon.IsInherited(BoltActionRifle_Base) || weapon.IsInherited(DoubleBarrel_Base))
			return "CR527";

		string cartridge_type = weapon.GetChamberAmmoTypeName(weapon.GetCurrentMuzzle());

		if (cartridge_type.Contains("12ga"))
			return "Saiga";

		if (cartridge_type.Contains("762x54") || cartridge_type.Contains("308Win"))
			return "SVD";
		
		if (cartridge_type.Contains("Ammo_380"))
			return "CZ61";
		
		if (cartridge_type.Contains("9x39"))
			return "VSS";

		return AimSoundsConstants.DEFAULT_SOUNDSET;
	}
}