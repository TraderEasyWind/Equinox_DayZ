//#ifdef SERVER
//modded class BaseBuilding
//{
//    protected ref map<string, float> m_PrevHealth;
//    
//    void BaseBuilding()
//    {
//        m_PrevHealth = new map<string, float>;
//    }
//
//    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
//    {
//        super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
//
//        if (damageType == DamageType.CLOSE_COMBAT)
//        {
//            string damageZone = dmgZone;
//            if (damageZone == "")
//                damageZone = "GlobalHealth";
//    
//            float health = m_PrevHealth[dmgZone];
//            if (health > 0)
//                SetHealth(damageZone, "Health", health);
//        }
//    }
//
//    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
//    {
//        if (!super.EEOnDamageCalculated( damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef))
//            return false;
//
//        if (damageType == DamageType.CLOSE_COMBAT)
//        {
//            m_PrevHealth[dmgZone] = GetHealth(dmgZone, "Health");
//            return false;
//        }
//
//        return true;
//    }
//}
//#endif