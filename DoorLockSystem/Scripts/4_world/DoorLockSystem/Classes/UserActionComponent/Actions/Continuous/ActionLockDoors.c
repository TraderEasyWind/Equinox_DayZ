modded class ActionLockDoors: ActionContinuousBase {
	override void OnFinishProgressServer( ActionData action_data ) {
		if (!action_data.m_Player)
			return;
		if ( GetDoorLockKey().m_DoorLockSettings.DisableLockPicksForLockedDoors ) {
			Building building;
			string lockpick_message = GetDoorLockKey().m_DoorLockSettings.LockPickMessage;
			if ( Class.CastTo(building, action_data.m_Target.GetObject()) ) {
				vector current_building = building.GetPosition();
				int doorIndex = building.GetDoorIndex(action_data.m_Target.GetComponentIndex());
				if ( doorIndex != -1 ) {									
					for (int i = 0; i < GetDoorLockKey().m_DoorLockSettings.LockedDoorLocations.Count(); i++) {
						auto lockedDoorLocation = GetDoorLockKey().m_DoorLockSettings.LockedDoorLocations[i];
						vector building_location = Vector(lockedDoorLocation.building_x, lockedDoorLocation.building_z, lockedDoorLocation.building_y);
						if (current_building == building_location) {
 							if (lockpick_message != "") {
								Param1<string> m_MessageParam_ = new Param1<string>(lockpick_message);
								GetGame().RPCSingleParam(action_data.m_Player, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam_, true, action_data.m_Player.GetIdentity());
							}
							return;
						}
					}
				}
			}
		}	
		super.OnFinishProgressServer(action_data);
	}
}