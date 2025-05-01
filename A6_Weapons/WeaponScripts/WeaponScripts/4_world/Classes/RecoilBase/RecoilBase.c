modded class RecoilBase {
    vector GetRecoilModifier(Weapon_Base weapon) {
        if( weapon ) {
            if ( weapon.IsBipodOpen() && weapon.A6Bipod().BipodRaycastCheck() ) {
                return weapon.GetPropertyModifierObject().m_BipodRecoilModifiers;
            } 
            else return weapon.GetPropertyModifierObject().m_RecoilModifiers;
        }  
        else return "1 1 1";
    }
}   