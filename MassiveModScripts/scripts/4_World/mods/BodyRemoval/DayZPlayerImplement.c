modded class DayZPlayerImplement
{	
    override void EEKilled(Object killer)
    {	super.EEKilled(killer);
	
		#ifdef EXPANSIONMODAI
			PlayerBase player;
			if (Class.CastTo(player, this))
			{
				if (player.IsAI())
					return;
			}
		#endif
		
		float PlayerLifetime = StatGet("playtime");
		int QuickBodyCleanupLifetime = GetGame().ServerConfigGetInt("QuickBodyCleanupLifetime");
		
		if (PlayerLifetime <= QuickBodyCleanupLifetime)
		{	// If the body was not younger than [QuickBodyCleanupLifetime], delete the body
			int QuickBodyCleanupTime = ( GetGame().ServerConfigGetInt("QuickBodyCleanupTime") * 1000 );
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Delete, QuickBodyCleanupTime);	
		} else if (GetGame().ServerConfigGetInt("OldBodyCleanupEnabled") == 1)
		{	// If old body cleanup is enabled, delete the body after [OldBodyCleanupTime] seconds
			int OldBodyCleanupTime = ( GetGame().ServerConfigGetInt("OldBodyCleanupTime") * 1000 );
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Delete, OldBodyCleanupTime);
		}
    }
}

