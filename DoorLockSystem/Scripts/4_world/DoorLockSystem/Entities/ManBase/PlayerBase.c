modded class PlayerBase {
	autoptr Setup_LockedDoors m_DoorLockSettings;
    autoptr LockedBuildingLocations best_door;
	override void OnPlayerLoaded() {
		super.OnPlayerLoaded();
		isPlayerLoggedOutInLockedLocation();
	}
	void isPlayerLoggedOutInLockedLocation() {
        m_DoorLockSettings = Setup_LockedDoors.Load();
        if ( GetSimulationTimeStamp() < 20 && m_DoorLockSettings.TeleportLoggedOutPlayers ) {
			int radiusCheck = m_DoorLockSettings.TeleportLoggedOutRadiusCheck;
			autoptr array<Object> objects = new array<Object>;
			JsonDataContaminatedAreas data = EffectAreaLoader.GetData();
			GetGame().GetObjectsAtPosition(this.GetPosition(), radiusCheck, objects, null);
			for ( int i = 0; i < m_DoorLockSettings.LockedDoorLocations.Count(); i++ ) {
				vector building_locations;
				building_locations[0] = m_DoorLockSettings.LockedDoorLocations.Get(i).building_x;
				building_locations[1] = m_DoorLockSettings.LockedDoorLocations.Get(i).building_z;
				building_locations[2] = m_DoorLockSettings.LockedDoorLocations.Get(i).building_y;
				for ( int o = 0; o < objects.Count(); o++ ) {
					Object obj = objects.Get(o);
					if (obj.IsTree() || obj.IsRock() || obj.IsBush() || obj.IsInventoryItem())
						continue;							
					if ( obj.GetType() == m_DoorLockSettings.LockedDoorLocations.Get(i).BuildingClassName && obj.GetPosition() == building_locations ) {
                        best_door = GetDoorLockKey().m_DoorLockSettings.LockedDoorLocations.Get(i); 
                        if ( best_door.TeleportLoggedOutPlayers ) {
                            GetDoorLockKey().TeleportCheck(this, data.SafePositions);
                            if (GetDoorLockKey().m_DoorLockSettings.ADMLogging) {
								GetGame().AdminLog( "[DoorLockSystem]: " + this.GetIdentity().GetPlainName() + " (" + this.GetIdentity().GetPlainId() + ") logged into a locked room, player teleported to: " + this.GetPosition() );
                            }
                        }    	
					}	
				}
			}
		} else {
            return;
        }
	}
}