modded class DayZPlayerImplementAiming {
    float m_BipodSwayModifier = GetA6GunplayModConfig().BipodSwayModifier;
    bool isBipodStandingRaycasted() {
        Weapon_Base weapon = Weapon_Base.Cast(m_PlayerPb.GetHumanInventory().GetEntityInHands());
        return weapon && weapon.IsBipodOpen() && weapon.A6Bipod().BipodRaycastCheck();  
    }
    bool isBipodProneRaycasted() {
        Weapon_Base weapon = Weapon_Base.Cast(m_PlayerPb.GetHumanInventory().GetEntityInHands());
        return weapon && weapon.IsBipodOpen(); 
    }
    override protected float CalculateWeight(int stance_index, float current_stamina, float camera_sway_modifier, bool holding_breath) {
        bool isStanding = isBipodStandingRaycasted();
        bool isProne = isBipodProneRaycasted();
        if ((isStanding && (stance_index == DayZPlayerConstants.STANCEIDX_RAISEDERECT || stance_index == DayZPlayerConstants.STANCEIDX_RAISEDCROUCH)) || (isProne && stance_index == DayZPlayerConstants.STANCEIDX_RAISEDPRONE)) {
            return (1 - m_BipodSwayModifier) * m_AimNoiseAllowed * camera_sway_modifier * SWAY_WEIGHT_SCALER;
        }
        return super.CalculateWeight(stance_index, current_stamina, camera_sway_modifier, holding_breath);   
    }
}