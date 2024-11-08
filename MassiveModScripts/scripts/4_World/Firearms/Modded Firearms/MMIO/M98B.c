modded class Mass_M98B_Base: CZ527_Base
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
            if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
                AddHealth("", "",9999);

                Magazine mag = SpawnAttachedMagazine("Mass_Mag_M98B_7Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
                m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());  				
            }
        }
    }
}