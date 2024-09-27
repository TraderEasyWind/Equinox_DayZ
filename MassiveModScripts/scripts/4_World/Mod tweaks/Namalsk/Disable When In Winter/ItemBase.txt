modded class ItemBase
{
	override void ProcessItemWetness( float delta, bool hasParent, bool hasRootAsPlayer, ItemBase refParentIB )
	{
		if ( !hasRootAsPlayer )
		{
			if ( !hasParent )
			{
				// drying on ground
				if ( m_VarWet > m_VarWetMin )
					AddWet( delta * GameConstants.WETNESS_RATE_DRYING_GROUND );
			}
			else if ( refParentIB )
			{
				// parent is wet
				if ( ( refParentIB.GetWet() >= GameConstants.STATE_SOAKING_WET ) && ( m_VarWet < m_VarWetMax ) )
					AddWet( delta * GameConstants.WETNESS_RATE_WETTING_INSIDE );
				// parent has liquid inside
				else if ( ( refParentIB.GetLiquidType() != 0 ) && ( refParentIB.GetQuantity() > 0 ) && ( m_VarWet < m_VarWetMax ) )
					AddWet( delta * GameConstants.WETNESS_RATE_WETTING_LIQUID );
				// drying
				else if ( m_VarWet > m_VarWetMin )						
					AddWet( delta * GameConstants.WETNESS_RATE_DRYING_INSIDE );
			}
		}
		/*
		string worldname;
		GetGame().GetWorldName(worldname);
		worldname.ToLower(); //to be safe 
		if ( worldname == "chernarusplus" )
		{
			if ( !hasRootAsPlayer )
			{
				if ( !hasParent )
				{
					// drying on ground
					if ( m_VarWet > m_VarWetMin )
						AddWet( delta * GameConstants.WETNESS_RATE_DRYING_GROUND );
				}
				else if ( refParentIB )
				{
					// parent is wet
					if ( ( refParentIB.GetWet() >= GameConstants.STATE_SOAKING_WET ) && ( m_VarWet < m_VarWetMax ) )
						AddWet( delta * GameConstants.WETNESS_RATE_WETTING_INSIDE );
					// parent has liquid inside
					else if ( ( refParentIB.GetLiquidType() != 0 ) && ( refParentIB.GetQuantity() > 0 ) && ( m_VarWet < m_VarWetMax ) )
						AddWet( delta * GameConstants.WETNESS_RATE_WETTING_LIQUID );
					// drying
					else if ( m_VarWet > m_VarWetMin )						
						AddWet( delta * GameConstants.WETNESS_RATE_DRYING_INSIDE );
				}
			}
		
		}
		else if ( worldname == "namlask" )
		{
			if ( !hasRootAsPlayer )
			{
				if ( !hasParent )
				{
					// drying on ground
					if ( ( m_VarWet > m_VarWetMin ) && ( m_VarWet <= 1.0 ) )
						AddWet( delta * GameConstants.WETNESS_RATE_DRYING_GROUND );
				}
				else if ( refParentIB )
				{
					// parent is wet
					if ( ( refParentIB.GetWet() >= GameConstants.STATE_SOAKING_WET ) && ( m_VarWet < m_VarWetMax ) && ( m_VarWet <= 1.0 ) )
						AddWet( delta * GameConstants.WETNESS_RATE_WETTING_INSIDE );
					// parent has liquid inside
					else if ( ( refParentIB.GetLiquidType() != 0 ) && ( refParentIB.GetQuantity() > 0 ) && ( m_VarWet < m_VarWetMax ) && ( m_VarWet <= 1.0 ) )
						AddWet( delta * GameConstants.WETNESS_RATE_WETTING_LIQUID );
					// drying
					else if ( ( m_VarWet > m_VarWetMin ) && ( m_VarWet <= 1.0 ) )
						AddWet( delta * GameConstants.WETNESS_RATE_DRYING_INSIDE );
				}
			}
		}
		*/

	}
}