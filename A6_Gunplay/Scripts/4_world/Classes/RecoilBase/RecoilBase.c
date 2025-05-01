/*modded class RecoilBase {
    override vector GetRecoilModifier(Weapon_Base weapon) {
        #ifdef A6_WeaponScripts
        if( weapon ) {
            if ( weapon.IsBipodOpen() && weapon.A6Bipod().BipodRaycastCheck() ) {
                return weapon.GetPropertyModifierObject().m_BipodRecoilModifiers;
            } 
            else return weapon.GetPropertyModifierObject().m_RecoilModifiers;
        }  
        else return "1 1 1";
        #else
        if( weapon ) {
            return weapon.GetPropertyModifierObject().m_RecoilModifiers;
        }  
        else return "1 1 1";
        #endif

    }
}*/