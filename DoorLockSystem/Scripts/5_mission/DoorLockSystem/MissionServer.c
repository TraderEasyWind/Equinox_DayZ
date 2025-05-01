modded class MissionServer {
    void MissionServer() {	    
		if (GetGame().IsServer() && !GetGame().IsClient()) {
			g_DoorLockKey = null;
			GetDoorLockKey();
		}
    }
}