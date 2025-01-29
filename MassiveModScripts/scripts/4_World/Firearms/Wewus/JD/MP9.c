modded class JD_BT_MP9_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,30)<5)
            {
                TStringArray possibleObjects = 
                {
                    "JD_Groza_762",
					"JD_MP7"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.8)
				{
					objectToSpawn = "JD_MP7";
				}
				else
				{
					objectToSpawn = "JD_Groza_762";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(JD_MP7))
                {
                    JD_MP7 WewusGunmp7 = JD_MP7.Cast(entity);
                    WewusGunmp7.SpawnAttachmentsOnUpgrade();
                }
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

            Magazine mag = SpawnAttachedMagazine("JD_BT_MP9_30Rnd_Mag", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());			
        }
    }
};