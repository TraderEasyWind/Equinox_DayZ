modded class Mass_PKM_Base
{
	void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"PSO1Optic",
			"KobraOptic",
			"KazuarOptic",
			"KashtanOptic"
		};
		
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mass_Mag_PKM_100Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);			
        }
    }
};
class Mass_PKM: Mass_PKM_Base{};