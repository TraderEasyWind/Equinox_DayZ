class Setup_LockedDoors {	
	bool DebugBuild;
	bool ADMLogging;
	bool ServerAutomaticRelock;
	int AutomaticRelockTime;
	bool TeleportLoggedOutPlayers;
	int TeleportLoggedOutRadiusCheck;
	bool DisableLockPicksForLockedDoors;
	string LockPickMessage;
	int DisableDamageForLockedDoors;
	int InfiniteUseColorKeycards;
	autoptr array< autoptr LockedBuildingLocations > LockedDoorLocations;
	void Setup_LockedDoors() {
		DebugBuild = false;
		ADMLogging = true;
		ServerAutomaticRelock = true;
		AutomaticRelockTime = 60;
		TeleportLoggedOutPlayers = true;
		TeleportLoggedOutRadiusCheck = 10;
		DisableLockPicksForLockedDoors = true;
		LockPickMessage = "You can't pick this lock, it's too advanced.";
		DisableDamageForLockedDoors = true;
		InfiniteUseColorKeycards = true;
		LockedDoorLocations = new autoptr array< autoptr LockedBuildingLocations >;
	}
	void Init_Config() {	
		if (GetGame().IsServer() && !GetGame().IsClient()) {			
			LockedDoorLocations.Insert( new autoptr LockedBuildingLocations(1688.0740966796876, 14212.7763671875, 455.49609375, 16, "Tisy Underground Room", "Land_Tisy_HQ", "DLS_KeyCard_Labs_Black", "Didn't work, seems I need a Black Keycard for this...", "Access_Denied", "Alarm_Military", true));
			LockedDoorLocations.Insert( new autoptr LockedBuildingLocations(4047.376220703125, 11712.568359375, 380.8150939941406, 4, "Bash Underground", "Land_Mil_Barracks5_Basement", "DLS_KeyCard_Labs_Access", "Didn't work, seems I need an Access Keycard for this...", "Access_Denied", "Alarm_Police", true));
			LockedDoorLocations.Insert( new autoptr LockedBuildingLocations(2206.72119140625, 3274.464599609375, 96.24073028564453, 6, "Pavlovo Office", "Land_Office2", "DLS_Key_01", "Didn't work, the door is labeled Office Key...", "Access_Denied", "Alarm_Bank", true));
			if (!FileExist(m_ProfileDirectory_DoorLocks + ConfigDir_DoorLocks + "/"))
				MakeDirectory(m_ProfileDirectory_DoorLocks + ConfigDir_DoorLocks + "/");
			JsonFileLoader<autoptr Setup_LockedDoors>.JsonSaveFile( PATH_DoorLocks, this );
		}
	}
	static autoptr Setup_LockedDoors Load() {
		if (GetGame().IsServer() && !GetGame().IsClient()) {
			autoptr Setup_LockedDoors settings = new Setup_LockedDoors();
			if (!FileExist(ConfigDir_DoorLocks))
           	 	MakeDirectory(ConfigDir_DoorLocks);
			if ( FileExist( PATH_DoorLocks ) ) {
				JsonFileLoader<autoptr Setup_LockedDoors>.JsonLoadFile( PATH_DoorLocks, settings );
			} else {
				settings.Init_Config();
			}
			return settings;
		}
		return null;
	}
}