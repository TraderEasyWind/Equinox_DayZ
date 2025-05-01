modded class MissionGameplay extends MissionBase {
	void MissionGameplay() {
		GetRPCManager().AddRPC( "A6GunplayMod", "RPCA6GunplaySettings", this, SingeplayerExecutionType.Both );
	}
	override void OnMissionStart() {
		super.OnMissionStart();
		Print("[A6GunplayMod] [Client] Requesting Settings From Server");
		GetRPCManager().SendRPC("A6GunplayMod", "RPCA6GunplaySettings", new Param1< A6GunplayModConfig >( NULL ), true, NULL);
	}
	void RPCA6GunplaySettings( CallType type,  ParamsReadContext ctx, PlayerIdentity sender, Object target ) {
		Param1< A6GunplayModConfig > data  
		if ( !ctx.Read( data ) ) return;
		m_A6GunplayModConfig = data.param1;
		Print("[A6GunplayMod] [Client] Settings Received");
	}
}