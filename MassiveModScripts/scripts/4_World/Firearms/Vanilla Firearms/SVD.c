modded class SVD_Base : RifleBoltLock_Base
{
	override void EEOnCECreate()
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.SpawnAttachments, 1000);
    }
	
	ref TStringArray RandomOptics = 
	{
		"KazuarOptic",
		"Mass1P69",
		"Akol_AkMount_NoAttachment",
		"KashtanOptic",
		"PSO1Optic",
		"KobraOptic"
	};
	

	void SpawnAttachments()
    {
        GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
        {
            if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
                AddHealth("", "",9999);
                Magazine mag = SpawnAttachedMagazine("Mag_SVD_10Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
                m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());				
            }
        }
    }
}