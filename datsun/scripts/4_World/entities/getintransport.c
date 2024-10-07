modded class ActionGetInTransport: ActionBase
{
	override void Start( ActionData action_data )
	{
		action_data.m_State = UA_START;
		
		if( LogManager.IsActionLogEnable() )
			Debug.ActionLog("Time stamp: " + action_data.m_Player.GetSimulationTimeStamp(), this.ToString() , "n/a", "OnStart", action_data.m_Player.ToString() );
		
		OnStart(action_data);
		
		if ( GetGame().IsServer() )
			OnStartServer(action_data);
		else
			OnStartClient(action_data);
		
		InformPlayers(action_data.m_Player,action_data.m_Target,UA_START);
		
		Transport trans = Transport.Cast(action_data.m_Target.GetObject());
		int componentIndex = action_data.m_Target.GetComponentIndex();
		int crew_index = trans.CrewPositionIndex(componentIndex);
		int seat = trans.GetSeatAnimationType(crew_index);
		//Print("Crew Index = " + crew_index + ", AnimationType = " + seat);
		HumanCommandVehicle vehCommand = action_data.m_Player.StartCommand_Vehicle(trans, crew_index, seat);

		if (vehCommand)
		{
			if (trans.IsKindOf("nd_datsun") && crew_index > 1)
				vehCommand.SetVehicleType(VehicleAnimInstances.V3S);
			else
				vehCommand.SetVehicleType(trans.GetAnimInstance());

			action_data.m_Player.TryHideItemInHands(true);

			GetDayZGame().GetBacklit().OnEnterCar();
			if (action_data.m_Player.GetInventory())
				action_data.m_Player.GetInventory().LockInventory(LOCK_FROM_SCRIPT);
		}
	}
}