modded class JD_P90_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,20)<2)
            {
                TStringArray possibleObjects = 
                {
                    "JD_Groza_762",
                };
                string objectToSpawn;
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				if (entity.IsInherited(JD_Groza_762))
                {
                    JD_Groza_762 WewusGungroza762 = JD_Groza_762.Cast(entity);
                    WewusGungroza762.SpawnAttachmentsOnUpgrade();
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
			"ReflexOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
		};
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("JD_Mag_P90_50Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());			
        }
    }
};