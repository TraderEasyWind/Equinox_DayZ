modded class MassMP40_Base : RifleBoltLock_Base
{ 
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnMag, 1000);
	}
	
	void SpawnMag()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
			    m_Inventory.CreateAttachment("Mass_Mag_MP40_30Rnd"); 
            }
		}
    }
}