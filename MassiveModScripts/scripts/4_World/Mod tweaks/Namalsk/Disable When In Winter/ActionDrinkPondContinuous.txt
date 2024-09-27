modded class ActionDrinkPondContinuous
{
	protected string m_DrinkPondName = "#drink";

	override string GetText()
	{
		return m_DrinkPondName;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTSurface( UAMaxDistances.DEFAULT );
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsServer() )
			return true;
		
		vector pos_cursor = target.GetCursorHitPos();
		string surfType;
		int liquidType;

		g_Game.SurfaceUnderObject( player, surfType, liquidType );

		if ( liquidType == LIQUID_WATER )
		{
			m_DrinkPondName = "#drink";
			return true;
		}
		if ( ( surfType == "nam_snow" ) || ( surfType == "nam_seaice" ) || ( surfType == "nam_lakeice_ext" ) )
		{
			m_DrinkPondName = "#nam_action_eat_snow";
			return true;
		}
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		Param1<float> nacdata = Param1<float>.Cast( action_data.m_ActionComponent.GetACData() );
		float amount = nacdata.param1 * UAQuantityConsumed.DRINK;

		EConsumeType m_WaterSourceType = EConsumeType.ENVIRO_POND;
		vector pos_cursor = action_data.m_Target.GetCursorHitPos();
		string surfType;
		int liquidType;
		g_Game.SurfaceUnderObject(action_data.m_Player, surfType, liquidType);

		if ( liquidType == LIQUID_WATER )
			m_WaterSourceType = EConsumeTypeNamalsk.ENVIRO_FREEZING;
		else if ( ( surfType == "nam_snow" ) || ( surfType == "nam_seaice" ) || ( surfType == "nam_lakeice_ext" ) )
			m_WaterSourceType = EConsumeTypeNamalsk.ENVIRO_FROZEN;

		action_data.m_Player.Consume( NULL, amount, m_WaterSourceType );
	}
};