modded class MassSVT40_Base extends RifleBoltFree_Base
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
	ref TStringArray RandomOptics = 
	{
		"SNAFU_MAimpoint_ACO",
		"SNAFU_MElcan",
		"SNAFU_MAimpoint_M5",
		"SNAFU_MEOTech_EXPS3",
		"SNAFU_MHuntingOptic",
		"SNAFU_MKahles",
		"SNAFU_MLeupold_Mark8",
		"SNAFU_MNightforce",
		"SNAFU_MTango6T_Black",
		"SNAFU_MTrijicon_Docter",
		"SNAFU_MWalther"
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
				m_Inventory.CreateAttachment("Mass_Mag_SVT_10Rnd"); 
				if (randomchance < 50)
				{
			        m_Inventory.CreateAttachment("PUScopeOptic");					
				}	
                else
				{
				    m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());	
				}	
				
            }
		}
    }
}
