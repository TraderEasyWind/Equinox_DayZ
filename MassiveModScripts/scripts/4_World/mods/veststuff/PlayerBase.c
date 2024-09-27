modded class PlayerBase
{
#ifdef SERVER
    protected ref map<string, float> m_HealthCalculated;
    override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);

        if ( slot_name == "Vest" )
        {
            ItemBase itembs = ItemBase.Cast(item);
            itembs.UpdateProtectionValues();
        }
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);

        if ( slot_name == "Vest" )
        {
            ItemBase itembs = ItemBase.Cast(item);
            itembs.UpdateProtectionValues();
        }
    }

    float GetCfgProtectionValue()
    {
        ItemBase vest = ItemBase.Cast(GetInventory().FindAttachmentByName("Vest"));
        if ( vest )
            return vest.GetCfgProtectionValue();

        return 0;
    }

    // we apply the health reduction here
    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);

        float proval = GetCfgProtectionValue();
        if ( proval > 0.0 )
        {
            string damageZone = dmgZone;
            if (damageZone == "")
                damageZone = "GlobalHealth";
            
            float health = m_HealthCalculated[dmgZone];
            float dmg = damageResult.GetDamage(damageZone, "Health");
    
            if (health > 0)
            {
                Print("DMG REDUCTION ON PLAYER OF "+proval);
                float calculatedDmg = dmg * ( 1 - proval );
                SetHealth(damageZone, "Health", Math.Max(health - calculatedDmg, 0));
            }
        }
    }

    // We remember where we got hit, how much and how much hp we had
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        if (!super.EEOnDamageCalculated( damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef))
            return false;
        
        if ( GetCfgProtectionValue() > 0 )
        {
            m_HealthCalculated = new map<string, float>;
            m_HealthCalculated[dmgZone] = GetHealth(dmgZone, "Health");
        }

        return true;
    }
#endif
};
