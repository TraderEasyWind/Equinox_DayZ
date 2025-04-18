class ActionUnlockCrate: ActionSingleUseBase
{
	void ActionUnlockCrateBase()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_POKE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_FullBody = true;
	}
	
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Unlock Cache";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target ) return false;
		if ( !IsInReach(player, target, 10) ) return false;

		MassiveMod_CrateTier1 Tier1;
		MassiveMod_CrateTier2 Tier2;
		MassiveMod_CrateTier3 Tier3;
		MassiveMod_CrateTier4 Tier4;
		MassiveMod_CrateTier5 Tier5;
		MassiveMod_ConstructionSuppliesCache ConstructionCache;
		MassiveMod_MedicalSuppliesCache MedicalCache;
		MassiveMod_AmmunitionsSupplyCache AmmunitionCache;
		MassiveMod_WeaponSuppliesCache WeaponCache;

		if (Class.CastTo(Tier1, target.GetObject()) && !Tier1.IsInventoryVisible() && item.IsInherited(MassiveMod_Tier1Key))
		{
			return true;
		}
		if (Class.CastTo(Tier2, target.GetObject()) && !Tier2.IsInventoryVisible() && item.IsInherited(MassiveMod_Tier2Key))
		{
			return true;
		}
		if (Class.CastTo(Tier3, target.GetObject()) && !Tier3.IsInventoryVisible() && item.IsInherited(MassiveMod_Tier3Key))
		{
			return true;
		}
		if (Class.CastTo(Tier4, target.GetObject()) && !Tier4.IsInventoryVisible() && item.IsInherited(MassiveMod_Tier4Key))
		{
			return true;
		}
		if (Class.CastTo(Tier5, target.GetObject()) && !Tier5.IsInventoryVisible() && item.IsInherited(MassiveMod_Tier5Key))
		{
			return true;
		}
		if (Class.CastTo(ConstructionCache, target.GetObject()) && !ConstructionCache.IsInventoryVisible() && item.IsInherited(MassiveMod_ConstructionSuppliesKey))
		{
			return true;
		}
		if (Class.CastTo(MedicalCache, target.GetObject()) && !MedicalCache.IsInventoryVisible() && item.IsInherited(MassiveMod_MedicalSuppliesKey))
		{
			return true;
		}
		if (Class.CastTo(AmmunitionCache, target.GetObject()) && !AmmunitionCache.IsInventoryVisible() && item.IsInherited(MassiveMod_MunitionsSuppliesKey))
		{
			return true;
		}
		if (Class.CastTo(WeaponCache, target.GetObject()) && !WeaponCache.IsInventoryVisible() && item.IsInherited(MassiveMod_WeaponSuppliesKey))
		{
			return true;
		}

		return false;
	}
	
	override void OnExecuteClient( ActionData action_data )
    {
        MassiveModCrate_Base target_TB;
        Class.CastTo(target_TB,  action_data.m_Target.GetObject() );
        action_data.m_MainItem.Delete();
        
        target_TB.UnlockMe();
    }
    
	
	override void OnExecuteServer( ActionData action_data )
	{
		MassiveModCrate_Base target_TB;
		Class.CastTo(target_TB,  action_data.m_Target.GetObject() );
		action_data.m_MainItem.Delete();
		
		target_TB.UnlockMe();
	}
	
};