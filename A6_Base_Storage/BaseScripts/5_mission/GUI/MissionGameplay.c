modded class MissionGameplay extends MissionBase {
	void MissionGameplay() {
		GetRPCManager().AddRPC( "A6BaseStorageMod", "RPCA6BaseStorageMod", this, SingeplayerExecutionType.Both );
	}
	override void OnMissionStart() {
		super.OnMissionStart();
		Print("[A6 Base Storage Mod] [Client] Requesting Settings From Server");
		GetRPCManager().SendRPC("A6BaseStorageMod", "RPCA6BaseStorageMod", new Param1< A6BaseStorageConfig >( NULL ), true, NULL);
	}
	void RPCA6BaseStorageMod( CallType type,  ParamsReadContext ctx, PlayerIdentity sender, Object target ) {
		Param1< A6BaseStorageConfig > data  
		if ( !ctx.Read( data ) ) return;
		m_A6BaseStorageConfig = data.param1;
		Print("[A6 Base Storage Mod] [Client] Settings Received");
	}
}