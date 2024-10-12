modded class MassPPSH41 : RifleBoltLock_Base
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnMag, 1000);
	}
	

	int randomchance = Math.RandomInt(1,100);
	void SpawnMag()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
				if (randomchance < 20)
				{
			        m_Inventory.CreateAttachment("Mass_Mag_PPSh_71RndDrum"); 
				}	
                else
				{
				    m_Inventory.CreateAttachment("Mass_Mag_PPSh_30Rnd");
				}	
            }
		}
    }
};
