modded class ItemBase
{
#ifdef SERVER
    protected ref map<string, float> m_HealthCalculated;
    private float m_VestProtectionValue;

    float GetCfgProtectionValue()
    {
        if ( ConfigIsExisting("protectionValue") )
            return ConfigGetFloat("protectionValue"); // grab from config.cpp

        return m_VestProtectionValue;
    }

	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);

		ctx.Write(m_VestProtectionValue);
	}

	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if ( !super.OnStoreLoad(ctx, version) )
			return false;
		if ( !ctx.Read(m_VestProtectionValue) )
            UpdateProtectionValues();

		return true;
	}

    // we add protection
    override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);

        UpdateProtectionValues();
    }

    // we remove protection
    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);

        UpdateProtectionValues();
    }

    void UpdateProtectionValues()
    {        
        m_VestProtectionValue = 0;
		for (int i = 0; i < GetInventory().AttachmentCount(); i++)
		{
			ItemBase itembs = ItemBase.Cast(GetInventory().GetAttachmentFromIndex(i));
            if (itembs)
                m_VestProtectionValue = Math.Max(0, m_VestProtectionValue + itembs.GetCfgProtectionValue() * itembs.GetHealth01());
		}
    }

    // we apply the health reduction here
    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);

        PlayerBase player;
        if ( PlayerBase.CastTo(player, GetParent()) )
        {
            string damageZone = dmgZone;
            if (damageZone == "")
                damageZone = "GlobalHealth";
    
            float health = m_HealthCalculated[dmgZone];
            float dmg = damageResult.GetDamage(damageZone, "Health");
    
            if (health > 0)
            {
                Print("DMG REDUCTION ON ITEM OF "+m_VestProtectionValue);
                float calculatedDmg = dmg * ( 1 - m_VestProtectionValue );
                SetHealth(damageZone, "Health", Math.Max(health - calculatedDmg, 0));
            }
            
            UpdateProtectionValues();
        }
    }

    // We remember where we got hit, how much and how much hp we had
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        if (!super.EEOnDamageCalculated( damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef))
            return false;
            
        PlayerBase player;
        if ( PlayerBase.CastTo(player, GetParent()) )
        {
            m_HealthCalculated = new map<string, float>;
            m_HealthCalculated[dmgZone] = GetHealth(dmgZone, "Health");
        }

        return true;
    }
#endif
};
