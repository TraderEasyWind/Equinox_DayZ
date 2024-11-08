modded class JD_MP7_Base : RifleBoltLock_Base
{
    override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
	ref TStringArray RandomOptics = 
	{
		"ACOGOptic",
		"ACOGOptic_6x",
		"MassScope",
		"M68Optic",
		"M4_T3NRDSOptic",
		"ReflexOptic",
		"StarlightOptic"
	};
	
	
	void SpawnAttachments()
    {
        GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
        {
            if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
                AddHealth("", "",9999);

                Magazine mag = SpawnAttachedMagazine("JD_Mag_MP7_40Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
                m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
                m_Inventory.CreateAttachment("JD_MP7Suppressor");  				
            }
        }
    }
}