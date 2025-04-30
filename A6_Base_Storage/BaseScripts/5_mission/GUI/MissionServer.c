modded class MissionServer extends MissionBase {
	override void OnInit() {
		super.OnInit();
		Print("[A6 Base Storage Mod] OnInit");
		GetA6BaseStorageConfig();
		GetRPCManager().AddRPC( "A6BaseStorageMod", "RPCA6BaseStorageMod", this, SingeplayerExecutionType.Both );
	}
	void RPCA6BaseStorageMod( CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target ) {
		PlayerIdentity RequestedBy = PlayerIdentity.Cast(sender);
		if (RequestedBy) {
			GetRPCManager().SendRPC("A6BaseStorageMod", "RPCA6BaseStorageMod", new Param1< A6BaseStorageConfig >( GetA6BaseStorageConfig() ), true, RequestedBy);
		}
	}
}

