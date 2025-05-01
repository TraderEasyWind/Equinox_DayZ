modded class MissionServer extends MissionBase {
	override void OnInit() {
		super.OnInit();
		Print("[A6GunplayMod] OnInit");
		GetA6GunplayModConfig();
		GetRPCManager().AddRPC( "A6GunplayMod", "RPCA6GunplaySettings", this, SingeplayerExecutionType.Both );
	}
	void RPCA6GunplaySettings( CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target ) {
		PlayerIdentity RequestedBy = PlayerIdentity.Cast(sender);
		if (RequestedBy) {
			GetRPCManager().SendRPC("A6GunplayMod", "RPCA6GunplaySettings", new Param1< A6GunplayModConfig >( GetA6GunplayModConfig() ), true, RequestedBy);
		}
	}
}

