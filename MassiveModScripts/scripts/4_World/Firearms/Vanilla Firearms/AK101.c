class AK101_Green: AK101
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
    ref TStringArray SNAFUOptics101 = 
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
	ref TStringArray AKOptics101 = 
	{
		"KashtanOptic",
		"PSO1Optic",
		"KobraOptic"
	};
	int randomchance101 = Math.RandomInt(1,100);

	override void SpawnAttachments()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
				m_Inventory.CreateAttachment("AK_RailHndgrd_Green");
				m_Inventory.CreateAttachment("AK_FoldingBttstck_Green");
				m_Inventory.CreateAttachment("Mag_AK101_30Rnd_Green");
				if (randomchance101 < 50)
				{
			        m_Inventory.CreateAttachment(AKOptics101.GetRandomElement());	
				}	
                else
				{
				    m_Inventory.CreateAttachment(SNAFUOptics101.GetRandomElement());	
				}
            }
		}
    }
}