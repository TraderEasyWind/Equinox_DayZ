modded class MassAR15DMR_Base
{
	override void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"ACOGOptic",
			"ACOGOptic_6x",
			"BUISOptic",
			"StarlightOptic",
			"ReflexOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"M4_CarryHandleOptic"
		};
		
		ref TStringArray RandomBttstck = 
		{
			"M4_CQBBttstck",
			"M4_MPBttstck"
		};
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mag_STANAG_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
};
class MassAR15DMR: MassAR15DMR_Base{};