modded class MissionGameplay
{
	protected bool m_VirtualCompassToggled;

	override void OnUpdate( float timeslice )
	{
		super.OnUpdate( timeslice );

		bool inputIsFocused = false;		
		Widget focusedWidget = GetFocus();

		if ( focusedWidget )
		{
			if ( focusedWidget.ClassName().Contains( "EditBoxWidget" ) || focusedWidget.ClassName().Contains( "MultilineEditBoxWidget" ) )
			{
				inputIsFocused = true;
			}
		}

		Input input 			= GetGame().GetInput();
		UIScriptedMenu topMenu 	= m_UIManager.GetMenu();
		PlayerBase playerPB 	= PlayerBase.Cast( GetGame().GetPlayer() );
		
		if ( playerPB && playerPB.GetHumanInventory() ) 
		{
			if ( playerPB.GetPlayerState() == EPlayerStates.ALIVE && !playerPB.IsUnconscious() )
			{
				if ( !topMenu && !inputIsFocused )
				{
					if ( input.LocalPress( "UAVirtualCompassHold", false ) || input.LocalHold( "UAVirtualCompassHold", false ) )
					{
						if ( !m_VirtualCompassToggled && IsPlayerStateValid(playerPB) )
						{
							m_VirtualCompassToggled = true;
							playerPB.ShowVirtualCompass(playerPB.HasCompass());							
						} else if ( m_VirtualCompassToggled && !IsPlayerStateValid(playerPB) )
						{
							m_VirtualCompassToggled = false;
							playerPB.HideVirtualCompass();
						}
					} else if ( input.LocalRelease("UAVirtualCompassHold",false) )
                    {
						m_VirtualCompassToggled = false;
                        playerPB.HideVirtualCompass();
                    }
				}
			}
		}
	}

	private bool IsPlayerStateValid(PlayerBase player)
	{
		if ( player.HasCompass() == 0 )
			return false;

		if ( player.IsInThirdPerson() || player.IsInOptics() || player.IsInIronsights() || player.IsRestrained() )
			return false;
		
		return true;
	}
};
