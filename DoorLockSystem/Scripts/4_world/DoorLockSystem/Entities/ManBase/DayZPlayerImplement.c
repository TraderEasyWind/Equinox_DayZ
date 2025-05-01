modded class DayZPlayerImplement {
	autoptr Setup_LockedDoors DoorLock_CFGData;
	autoptr array<vector> locked_locations;
	void DayZPlayerImplement() {
		DoorLock_CFGData = new Setup_LockedDoors();
		locked_locations = new array<vector>;
	}
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx) {
		super.OnRPC(sender, rpc_type, ctx);
		if (GetGame().IsServer() && !GetGame().IsClient()) {
			if (rpc_type == DAYZ_REFRESH_CONFIG) {
				autoptr Param10<bool, bool, bool, int, bool, int, bool, string, bool, bool> config_data = new Param10<bool, bool, bool, int, bool, int, bool, string, bool, bool>( false, false, false, 0, false, 0, false, "I can't seem to lockpick this door...", false, false );
				ctx.Read( config_data );
				GetDoorLockKey().UpdateCFG(config_data.param1, config_data.param2, config_data.param3, config_data.param4, config_data.param5, config_data.param6, config_data.param7, config_data.param8, config_data.param9, config_data.param10);
			}
			if (rpc_type == DAYZ_DOORLOCK_FORCELOCK) {
				autoptr Param1<bool> force_lock_data = new Param1<bool>(false);
				ctx.Read( force_lock_data );
				GetDoorLockKey().Init_DoorLocks();
			}
		} else {
			if (rpc_type == DAYZ_DOORLOCK_DATA) {			
				autoptr Param3<bool, vector, Setup_LockedDoors> DoorLock_data = new Param3<bool, vector, Setup_LockedDoors>( false, Vector(0, 0, 0), null);
				ctx.Read( DoorLock_data );
				locked_locations.Insert(DoorLock_data.param2);
				DoorLock_CFGData = DoorLock_data.param3;
			}		
		}
	}
}