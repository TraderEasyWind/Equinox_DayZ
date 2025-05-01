modded class ActionOpenDoors: ActionInteractBase {
	override void OnStartServer( ActionData action_data ) {
		super.OnStartServer(action_data);
		if (GetDoorLockKey().m_DoorLockSettings.DebugBuild) {
			Print("[DoorLockSystem]: Debug Build Enabled, all opened doors will be inputted into the DoorLockSystem.json file in your profiles folder.");
			Print("[DoorLockSystem]: This is for setting up locked doors, please disable this in the config file before going live.");
			Building building;
			HumanInventory inv = action_data.m_Player.GetHumanInventory();
			EntityAI hand = inv.GetEntityInHands();	
            string key_type = hand.GetType();
            string key_name = hand.GetDisplayName();
			if( Class.CastTo(building, action_data.m_Target.GetObject()) ) {
				int doorIndex = building.GetDoorIndex(action_data.m_Target.GetComponentIndex());
				if( doorIndex != -1 ) {
					if (GetGame().IsServer() && !GetGame().IsClient() && GetDoorLockKey()) {
						if ( FileExist( PATH_DoorLocks ) ) {
							autoptr Setup_LockedDoors m_DoorLockSettings = new autoptr Setup_LockedDoors();
							m_DoorLockSettings = GetDoorLockKey().m_DoorLockSettings.Load();
							if (m_DoorLockSettings) {							
								m_DoorLockSettings.LockedDoorLocations.Insert( new autoptr LockedBuildingLocations(building.GetPosition()[0], building.GetPosition()[2], building.GetPosition()[1], doorIndex, "CHANGE ME", building.GetType(), key_type, "That didn't seem to work... I need the " + key_name, "Access_Denied", "Alarm_Military", true));		
								JsonFileLoader<autoptr Setup_LockedDoors>.JsonSaveFile( PATH_DoorLocks, m_DoorLockSettings );
								GetDoorLockKey().RefreshCFG();
								Param1<string> m_MessageParam_ = new Param1<string>("Door Location saved to DoorLockSystem.json in Profiles Folder. Please check the file and finish setting up the door.");
								GetGame().RPCSingleParam(action_data.m_Player, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam_, true, action_data.m_Player.GetIdentity());
							}	
						}
					}
				}
			}
		}
	}
}