modded class MagazineStorage : Magazine {	
    protected bool m_DisableFireGeoDmg = false;
    void MagazineStorage() {
        m_DisableFireGeoDmg = GetA6GunplayModConfig().DisableFireGeoDmgMagazine;
    }
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef) {
        if ( damageType == DamageType.FIRE_ARM && m_DisableFireGeoDmg ) {
            return false;
        }    
        return super.EEOnDamageCalculated(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
    }
}