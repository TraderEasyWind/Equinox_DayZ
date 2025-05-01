static int DAYZ_DOORLOCK_DATA = 10765;
static int DAYZ_REFRESH_CONFIG = 10766;
static int DAYZ_DOORLOCK_FORCELOCK = 10767;

class DoorLockKeySystem {	
	autoptr Setup_LockedDoors m_DoorLockSettings;
	protected autoptr Timer DoorLockClosure;
	protected autoptr Timer MappingTimer;
	protected autoptr Timer StartupTimer;
	protected bool m_DisableDamageForLockedDoors = false;
	void ~DoorLockKeySystem() {}
	void DoorLockKeySystem() {
		m_DoorLockSettings = Setup_LockedDoors.Load();
		DoorLockClosure = new Timer();
		MappingTimer = new Timer();
		StartupTimer = new Timer();
		m_DisableDamageForLockedDoors = m_DoorLockSettings.DisableDamageForLockedDoors;
		if (m_DoorLockSettings.ServerAutomaticRelock ) {
			Init_RunCardTimer(m_DoorLockSettings.AutomaticRelockTime);
		}	
		StartupTimer.Run(30, this, "Init_DoorLocks", NULL, false);
	}
	void UpdateCFG(bool DebugBuild, bool ADMLogging, bool automatic_relock, int relock_time, bool TeleportLoggedOutPlayers, int TeleportLoggedOutRadiusCheck, bool DisableLockPicksForLockedDoors, string LockPickMessage, bool DisableDamageForLockedDoors, bool InfiniteUseColorKeycards) {
		if (GetGame().IsServer() && !GetGame().IsClient()) {
			if ( FileExist( PATH_DoorLocks ) ) {
				m_DoorLockSettings = GetDoorLockKey().m_DoorLockSettings.Load();	
				if (m_DoorLockSettings) {
					m_DoorLockSettings.DebugBuild = DebugBuild;
					m_DoorLockSettings.ADMLogging = ADMLogging;
					m_DoorLockSettings.ServerAutomaticRelock = automatic_relock;
					m_DoorLockSettings.AutomaticRelockTime = relock_time;
					m_DoorLockSettings.TeleportLoggedOutPlayers = TeleportLoggedOutPlayers;
					m_DoorLockSettings.TeleportLoggedOutRadiusCheck = TeleportLoggedOutRadiusCheck;
					m_DoorLockSettings.DisableLockPicksForLockedDoors = DisableLockPicksForLockedDoors;
					m_DoorLockSettings.LockPickMessage = LockPickMessage;
					m_DoorLockSettings.DisableDamageForLockedDoors = DisableDamageForLockedDoors;
					m_DoorLockSettings.InfiniteUseColorKeycards = InfiniteUseColorKeycards;
					JsonFileLoader<autoptr Setup_LockedDoors>.JsonSaveFile( PATH_DoorLocks, m_DoorLockSettings );
					RefreshCFG();
				}		
			}
		}
	}
	void RefreshCFG() {
		if (GetGame().IsServer() && !GetGame().IsClient()) {
			m_DoorLockSettings = Setup_LockedDoors.Load();
		}
	}
	void Init_RunCardTimer(int time) {
		MappingTimer.Run(1 * 60, this, "Init_DoorLocks", NULL, false);
		if (m_DoorLockSettings && m_DoorLockSettings.ServerAutomaticRelock)
			DoorLockClosure.Run(time * 60, this, "Init_DoorLocks", NULL, true);	
	}
	static void TeleportCheck(notnull PlayerBase player, notnull array<ref array<float>> safe_positions) {
        if( player.GetSimulationTimeStamp() < 20  ) {
            vector player_pos = player.GetPosition();
            vector closest_safe_pos = MiscGameplayFunctions.GetClosestSafePos(player_pos, safe_positions);            
            if (player_pos!=closest_safe_pos) {
                closest_safe_pos[1] = GetGame().SurfaceY(closest_safe_pos[0], closest_safe_pos[2]);        
                player.SetPosition( closest_safe_pos );
                GetGame().RPCSingleParam(player, ERPCs.RPC_WARNING_TELEPORT, null, true, player.GetIdentity());
            }
        }
    }
	void Init_DoorLocks() {				
		for (int i = 0; i < m_DoorLockSettings.LockedDoorLocations.Count(); i++) {
			auto lockedDoor = m_DoorLockSettings.LockedDoorLocations.Get(i);
			vector building_locations = Vector(lockedDoor.building_x, lockedDoor.building_z, lockedDoor.building_y);
			Building building;
			autoptr array<Object> nearbyObjects = new array<Object>;
			GetGame().GetObjectsAtPosition(building_locations, 20, nearbyObjects, null);	
			for (int j = 0; j < nearbyObjects.Count(); j++) {
				Object obj = nearbyObjects.Get(j);
				if (obj.IsTree() || obj.IsRock() || obj.IsBush() || obj.IsInventoryItem())
					continue;
				if (obj.GetType() == lockedDoor.BuildingClassName && obj.GetPosition() == building_locations) {	
					bool should_lock = true;
					autoptr array<Object> closeObjects = new array<Object>;
					GetGame().GetObjectsAtPosition(building_locations, 20, closeObjects, null);	
					obj.CastTo(building, obj);	
					for (int k = 0; k < closeObjects.Count(); k++) {
						Object closeObj = closeObjects.Get(k);
						if (closeObj && closeObj.IsMan()) {
							should_lock = false;
							break;
						}
					}
					if (building && building.GetPosition() == building_locations) {
						if (m_DisableDamageForLockedDoors) {
							building.SetAllowDamage(false);
						}
						if (should_lock) {
							int doorIndex = lockedDoor.door_index;
							if (building.IsDoorOpen(doorIndex))
								building.CloseDoor(doorIndex);
							if (!building.IsDoorLocked(doorIndex) && !building.IsDoorOpen(doorIndex)) {
								building.LockDoor(doorIndex);
							}
						}
					}
				}
			}
		}
	}
}
static autoptr DoorLockKeySystem g_DoorLockKey;
static autoptr DoorLockKeySystem GetDoorLockKey() {
    if ( !g_DoorLockKey ) {
         g_DoorLockKey = new autoptr DoorLockKeySystem();
    }
    return g_DoorLockKey;
}