class AK74_Green: AK74
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
	ref TStringArray SNAFUOptics74 = 
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
	ref TStringArray AKOptics74 = 
	{
		"KashtanOptic",
		"PSO1Optic",
		"KobraOptic"
	};
	int randomchance74 = Math.RandomInt(1,100);

	override void SpawnAttachments()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				m_Inventory.CreateAttachment("AK_RailHndgrd_Green");
				m_Inventory.CreateAttachment("AK_PlasticBttstck_Green");
				m_Inventory.CreateAttachment("Mag_AK74_30Rnd_Green");
				AddHealth("", "",9999);
				if (randomchance74 < 50)
				{
			        m_Inventory.CreateAttachment(AKOptics74.GetRandomElement());	
				}	
                else
				{
				    m_Inventory.CreateAttachment(SNAFUOptics74.GetRandomElement());	
				}	
            }
		}
    }
}