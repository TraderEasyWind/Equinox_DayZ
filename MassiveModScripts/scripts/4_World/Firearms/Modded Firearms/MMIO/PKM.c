modded class Mass_PKM_Base extends RifleBoltLock_Base
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
	ref TStringArray SNAFUOptics = 
	{
		"SNAFU_AKAimpoint_ACO",
		"SNAFU_AKElcan",
		"SNAFU_AKAimpoint_M5",
		"SNAFU_AKEOTech_EXPS3",
		"SNAFU_AKHuntingOptic",
		"SNAFU_AKKahles",
		"SNAFU_AKLeupold_Mark8",
		"SNAFU_AKNightforce",
		"SNAFU_AKTango6T_Black",
		"SNAFU_AKTrijicon_Docter",
		"SNAFU_AKWalther",
		"KazuarOptic",
		"Mass1P69"
	};
	
	ref TStringArray AKOptics = 
	{
		"KashtanOptic",
		"PSO1Optic",
		"KobraOptic"
	};
	int randomchance = Math.RandomInt(1,100);

	void SpawnAttachments()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
				m_Inventory.CreateAttachment("Mass_Mag_PKM_100Rnd");
				if (randomchance < 50)
				{
			        m_Inventory.CreateAttachment(AKOptics.GetRandomElement());	
				}	
                else
				{
				    m_Inventory.CreateAttachment(SNAFUOptics.GetRandomElement());	
				}	
					
            }
		}
    }
}