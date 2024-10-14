

modded class PlayerBase
{
	bool m_Surrender;

	ref Timer m_UpdateTimer;

	void PlayerBase()
	{
		
	}
	
	void ~PlayerBase()
	{
		if ( GetGame().IsServer() )
        {
            if ( m_UpdateTimer )
            {
				//m_UpdateTimer.Stop();
                //delete m_UpdateTimer;
            }
        }
	}
	
	override void Init()
	{
		super.Init();
		
		if ( GetGame().IsServer() )
        {
			m_UpdateTimer = new Timer( CALL_CATEGORY_GAMEPLAY );
			m_UpdateTimer.Run( 0.01, this, "UpdateSurrender", NULL, true );
		}

		RegisterNetSyncVariableBool("m_Surrender");

		SetSynchDirty();
	}

	void UpdateSurrender()
	{
		//GetGame().GetMission().OnEvent( ChatMessageEventTypeID, new ChatMessageEventParams( CCDirect, "", "[Event] Start EmoteId: " +  m_EmoteManager.m_Callback.m_callbackID, "" ) );

		if (m_EmoteManager && m_EmoteManager.m_Callback && m_EmoteManager.m_Callback.m_callbackID == 1113)
		{
			//SetRestrained(true);
			m_Surrender = true;

			if ( !this.IsRestrained() )
			{
				//this.SetRestrained(true);
				//this.OnItemInHandsChanged();
			}
			
			//this.OnRestrainStart();
		}

		if (m_EmoteManager && m_EmoteManager.m_Callback && m_EmoteManager.m_Callback.m_callbackID == 1114)
		{
			//SetRestrained(false);
			m_Surrender = false;

			if ( this.IsRestrained() )
			{
				//this.SetRestrained(false);
				//this.OnItemInHandsChanged();
			}
			
			//this.OnRestrainStart();
		}
		
		SetSynchDirty();
	}

	override bool CanManipulateInventory()
	{
		if( IsControlledPlayer() )
		{
			return !IsRestrained() && !IsRestrainPrelocked() && !m_Surrender;
		}
		return true;
	}
}