modded class DayZPlayerImplementAiming {
    protected vector m_AimSpeedModifier = "1 1 1";
    protected bool m_AimSpeed = GetA6GunplayModConfig().enableAimSpeedModifier;
    float m_GlobalSwayMultiplier = GetA6GunplayModConfig().GlobalSwayMultiplier;
	float m_GlobalAimSpeedMultiplier = GetA6GunplayModConfig().GlobalAimSpeedMultiplier;
    override void OnRaiseBegin(DayZPlayerImplement player) {
        Weapon_Base weapon = Weapon_Base.Cast(player.GetHumanInventory().GetEntityInHands());
        if (weapon) {
            m_SwayModifier = weapon.GetPropertyModifierObject().m_SwayModifiers * m_GlobalSwayMultiplier;
            if ( m_AimSpeed ) {       
                m_AimSpeedModifier = weapon.GetPropertyModifierObject().m_AimSpeedModifiers * m_GlobalAimSpeedMultiplier;
                DayZPlayerCameras.RegisterTransitionTime(DayZPlayerCameras.DAYZCAMERA_1ST, DayZPlayerCameras.DAYZCAMERA_IRONSIGHTS, m_AimSpeedModifier[0], false);
                DayZPlayerCameras.RegisterTransitionTime(DayZPlayerCameras.DAYZCAMERA_1ST, DayZPlayerCameras.DAYZCAMERA_OPTICS, m_AimSpeedModifier[1], false);
                DayZPlayerCameras.RegisterTransitionTime(DayZPlayerCameras.DAYZCAMERA_IRONSIGHTS, DayZPlayerCameras.DAYZCAMERA_OPTICS, m_AimSpeedModifier[2], true);
            }    
        }
    }
}