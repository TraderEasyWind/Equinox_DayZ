modded class DayZPlayerCameraOptics : DayZPlayerCameraIronsights {
    protected bool m_AimSpeed = GetA6GunplayModConfig().enableAimSpeedModifier;
    override void OnActivate (DayZPlayerCamera pPrevCamera, DayZPlayerCameraResult pPrevCameraResult) {
        super.OnActivate(pPrevCamera,pPrevCameraResult);   
        PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
        Weapon_Base weapon = Weapon_Base.Cast(player.GetItemInHands());
        if(!player) {
            return;
        }
        if(!weapon) {
            return;
        }
        if (player && m_opticsUsed) {
            if ( m_AimSpeed ) {
                GetGame().GetCallQueue(CALL_CATEGORY_GUI).Remove(player.HideClothing);
                GetGame().GetCallQueue(CALL_CATEGORY_GUI).Remove(SetCameraPP);
                GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(SetCameraPP,(weapon.GetPropertyModifierObject().GetAimSpeedModifierPercentageOptic()) - 100,false,true,this);
                GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(player.HideClothing,(weapon.GetPropertyModifierObject().GetAimSpeedModifierPercentageOptic()),false,m_opticsUsed,true);
            } else {    
                GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(player.HideClothing,m_CameraPPDelay*1000,false,m_opticsUsed,true);
            }    
        }   
    }
}      