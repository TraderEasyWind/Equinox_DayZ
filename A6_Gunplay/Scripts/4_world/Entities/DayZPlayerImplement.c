modded class DayZPlayerImplement {
	static const string ZEROING_SOUND = "combinationlock_changenumber_SoundSet";
	static const string ZOOMING_SOUND = "combinationlock_changedial_SoundSet";
	protected bool m_AimingSoundSynchServer;
	protected bool m_AimingSoundSynchClient;
    protected bool m_AimSpeed = false;
    protected bool m_AimingSounds = false;
    protected bool m_ZoomingSounds = false;
    protected bool m_ZeroingSounds = false;
    protected int m_HipFireMode = 0;
	void DayZPlayerImplement() {
		RegisterNetSyncVariableBool("m_AimingSoundSynchServer");
        m_AimSpeed = GetA6GunplayModConfig().enableAimSpeedModifier;
        m_AimingSounds = GetA6GunplayModConfig().enableAimingSounds;
        m_ZoomingSounds = GetA6GunplayModConfig().enableZoomingSounds;
        m_ZeroingSounds = GetA6GunplayModConfig().enableZeroingSounds;
        m_HipFireMode = GetA6GunplayModConfig().HipFireMode;
	}
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		if ( m_AimingSounds ) {
			if (AimingShouldPlaySound() && m_Initialized) {
				SyncAimingSound();
			}
		}	
	}
	void SyncAimingSound() {
		m_AimingSoundSynchClient = m_AimingSoundSynchServer;
		bool exit = !m_IsFireWeaponRaised;
		Weapon_Base weapon;
		if (!Class.CastTo(weapon, GetHumanInventory().GetEntityInHands())) {
			return;
		}
		PlayAimingSound(weapon, exit);
    }	
	override void HandleWeapons(float pDt, Entity pInHands, HumanInputController pInputs, out bool pExitIronSights) {
        super.HandleWeapons(pDt, pInHands, pInputs, pExitIronSights);
        Weapon_Base weapon;
        if ( !Class.CastTo( weapon, pInHands ) ) return;
        ItemOptics optic = weapon.GetAttachedOptics();
		int muzzleIndex = weapon.GetCurrentMuzzle();
		float currentZeroingDistance = weapon.GetCurrentZeroing(muzzleIndex);
        if ( m_AimingSounds ) { 
            if ( m_IsFireWeaponRaised && !m_RaiseStarted ) {
                SendAimingSound( weapon, false );
            } else if ( !m_IsFireWeaponRaised && m_RaiseStarted ) {
                SendAimingSound( weapon, true );
            }
        }
		if ( m_ZoomingSounds ) {
			if ( optic && optic.IsInOptics() ) {
				if ((optic.GetStepFOVIndex() < optic.GetStepFOVCount() - 1 && pInputs.IsZoomIn()) || (optic.GetStepFOVIndex() > 0 && pInputs.IsZoomOut())) {
					SEffectManager.PlaySoundOnObject( ZOOMING_SOUND, optic );
				}	
			}
		}
		if ( m_ZeroingSounds ) {
			if ( optic && ( optic.IsInOptics() || optic.IsUsingWeaponIronsightsOverride() ) ) {
				if ((pInputs.IsZeroingUp() && currentZeroingDistance < optic.GetZeroingDistanceZoomMax()) || (pInputs.IsZeroingDown() && currentZeroingDistance > optic.GetZeroingDistanceZoomMin())) {
					SEffectManager.PlaySoundOnObject( ZEROING_SOUND, optic );
				}
			}
		}
    }
	void SendAimingSound(Weapon_Base weapon, bool exit) {
		AimingSoundSynch();
	}
	protected void PlayAimingSound(Weapon_Base weapon, bool exit) {
		if (GetGame().IsServer() && GetGame().IsMultiplayer()) return;
		string sound_set = GetAimingSoundSet(weapon, exit);
		EffectSound sound;
		PlaySoundSet(sound, sound_set, 0, 0);
		sound.SetSoundAutodestroy(true);
		sound.SetSoundVolume(1);
	}
	protected string GetAimingSoundSet(Weapon_Base weapon, bool exit) {
		if (!weapon) {
			return GetDefaultAimingSoundSet(exit);
		}
		string sound_set = weapon.ConfigGetString(AimingSoundsConstants.CONFIG_ENTRY);
		if (!sound_set || sound_set == string.Empty) {
			sound_set = PredictAimSoundSet(weapon);
		}
		return AppendExitSuffix(sound_set, exit);
	}
	protected string GetDefaultAimingSoundSet(bool exit) {
		if (exit) {
			return AimingSoundsConstants.DEFAULT_SOUNDSET + AimingSoundsConstants.SOUNDSET_OUT;
		} else {
			return AimingSoundsConstants.DEFAULT_SOUNDSET + AimingSoundsConstants.SOUNDSET_IN;
		}
	}
	protected string AppendExitSuffix(string sound_set, bool exit) {
		if (exit) {
			return sound_set + AimingSoundsConstants.SOUNDSET_OUT;
		} else {
			return sound_set + AimingSoundsConstants.SOUNDSET_IN;
		}
	}
	protected string PredictAimSoundSet(Weapon_Base weapon) {
		if (!weapon)
			return AimingSoundsConstants.DEFAULT_SOUNDSET;
		if (weapon.IsInherited(Pistol_Base) || weapon.IsInherited(Magnum_Base))
			return "FNX45";
		if (weapon.IsInherited(BoltActionRifle_InnerMagazine_Base))
			return "Mosin";
		if (weapon.IsInherited(BoltActionRifle_Base) || weapon.IsInherited(DoubleBarrel_Base))
			return "CR527";
		string cartridge_type = weapon.GetChamberAmmoTypeName(weapon.GetCurrentMuzzle());
		if (cartridge_type.Contains("12ga"))
			return "Saiga";
		if (cartridge_type.Contains("762x54") || cartridge_type.Contains("308Win") || cartridge_type.Contains("762x51"))
			return "SVD";
		if (cartridge_type.Contains("380"))
			return "CZ61";
		if (cartridge_type.Contains("9x39"))
			return "VSS";
		return AimingSoundsConstants.DEFAULT_SOUNDSET;
	}
	void AimingSoundSynch() {
		m_AimingSoundSynchServer = !m_AimingSoundSynchServer;
		SetSynchDirty();
	}
	bool AimingShouldPlaySound() {
		return m_AimingSoundSynchClient != m_AimingSoundSynchServer;
	}
	override void ExitSights() {
        super.ExitSights();
        ItemOptics optics = null;
		EntityAI entityInHands = GetHumanInventory().GetEntityInHands();
        optics = ItemOptics.Cast(entityInHands);
		if (optics) {
			optics.ExitOptics();
			optics.OnOpticExit();
		}
	}
	override void SwitchOptics(ItemOptics optic, bool state) {
		PlayerBase player = PlayerBase.Cast(this);
		if(!player) {
            return;
        }
		Weapon_Base weapon = Weapon_Base.Cast(player.GetItemInHands());
		if(!weapon) {
            return;
        }
		if (optic) {
			if (state) {
				if (m_AimSpeed) {
					int delay = weapon.GetPropertyModifierObject().GetAimSpeedModifierPercentageOptic() - 200;
					GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLaterByName(optic, "EnterOptics", delay, false);
					GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLaterByName(optic, "OnOpticEnter", delay, false);
				} else {
					if (optic.HasEnergyManager()) {
						optic.GetCompEM().SwitchOn();
					}
					optic.EnterOptics();
					optic.OnOpticEnter();
				}
			} else {
				optic.ExitOptics();
				optic.OnOpticExit();
				if (optic.HasEnergyManager()) {
					optic.GetCompEM().SwitchOff();
				}
				if (m_AimSpeed) {
					GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).RemoveByName(optic, "OnOpticEnter");
					GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).RemoveByName(optic, "EnterOptics");
				}
			}
		}
		if (m_CameraOptics != state) {
			SetOptics(state);
		}
	}
    override bool IsShootingFromCamera() {
        if (m_HipFireMode == 0) {
            return m_IsShootingFromCamera;
        }
        if (m_HipFireMode == 1) {
            return false;
        }
        if (m_HipFireMode == 2) {    
            #ifdef A6_WeaponScripts
            Weapon_Base weapon = Weapon_Base.Cast(GetHumanInventory().GetEntityInHands());
            if (weapon && weapon.HasLaserAttached()) {
                return false;
            } else {
                return m_IsShootingFromCamera;
            }
            #else
            return m_IsShootingFromCamera;
            #endif
        }
        return m_IsShootingFromCamera;
    }    
}