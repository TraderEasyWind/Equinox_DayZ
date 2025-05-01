modded class Weapon_Base extends Weapon {	
    protected bool m_DisableFireGeoDmg = false;
    void Weapon_Base() {
        m_DisableFireGeoDmg = GetA6GunplayModConfig().DisableFireGeoDmgWeapon;
    }
    float GetRateOfFire() {
        float rof = GetReloadTime(0);
        return (1 / rof) * 60;
    }
    float GetBarrelVelocity() {
        string chamberedAmmoTypeName;
        float chamberedAmmoDmg;
        GetCartridgeInfo(0, chamberedAmmoDmg, chamberedAmmoTypeName);
        float initspeed = g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 initSpeed", chamberedAmmoTypeName));
        float initmultiplier = g_Game.ConfigGetFloat(string.Format("CfgWeapons %1 initSpeedMultiplier", GetType()));
        return (initspeed * initmultiplier);
    }
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef) {
        if ( damageType == DamageType.FIRE_ARM && m_DisableFireGeoDmg ) {
            return false;
        }    
        return super.EEOnDamageCalculated(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
    }
}