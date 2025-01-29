modded class MassMini14_Base
{
    override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,5)<1)
            {
                TStringArray possibleObjects = 
                {
                    "Winchester70",
					"CZ550"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(CZ550))
                {
                    CZ550 WewusGuncz550 = CZ550.Cast(entity);
                    WewusGuncz550.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"ACOGOptic",
			"ACOGOptic_6x",
			"M68Optic",
			"M4_T3NDRDSOptic",
			"ReflexOptic",
			"StarlightOptic"
		};
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mass_Mag_Mini14_10rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());  				
        }
    }
}
class Massmini14 extends MassMini14_Base{}; //oops. Forgot to do that in MMIO.