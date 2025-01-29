modded class Saiga_Base
{
	void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"KobraOptic"
		};
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);
			m_Inventory.CreateAttachment("Saiga_Bttstck");
			m_Inventory.CreateAttachment("Battery9V");
            Magazine mag = SpawnAttachedMagazine("Mag_Saiga_8Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());  				
        }
    }
};