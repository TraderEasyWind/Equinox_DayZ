modded class FAL_Base : RifleBoltLock_Base
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
	ref TStringArray RandomOptics = 
	{
		"SNAFU_Aimpoint_ACO",
		"SNAFU_Elcan",
		"SNAFU_Aimpoint_M5",
		"SNAFU_EOTech_EXPS3",
		"SNAFU_HuntingOptic",
		"SNAFU_Kahles",
		"SNAFU_Leupold_Mark8",
		"SNAFU_Nightforce",
		"SNAFU_Tango6T_Black",
		"SNAFU_Trijicon_Docter",
		"SNAFU_Walther",
		"ACOGOptic",
		"ACOGOptic_6x",
		"MassScope",
		"SNAFU_Kobra",
		"M68Optic",
		"M4_T3NDRDSOptic",
		"ReflexOptic",
		"StarlightOptic"
	};

	void SpawnAttachments()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
				m_Inventory.CreateAttachment("Fal_OeBttstck");
				m_Inventory.CreateAttachment("Mag_FAL_20Rnd");
			    m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());		
            }
		}
    }
}