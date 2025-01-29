modded class MP5K_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,6)<1)
            {
                TStringArray possibleObjects = 
                {
                    "JD_Groza_762",
					"JD_BT_MP9"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.8)
				{
					objectToSpawn = "JD_BT_MP9";
				}
				else
				{
					objectToSpawn = "JD_Groza_762";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(JD_BT_MP9))
                {
                    JD_BT_MP9 WewusGunmp9 = JD_BT_MP9.Cast(entity);
                    WewusGunmp9.SpawnAttachmentsOnUpgrade();
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
		
		ref TStringArray RandomBttstck = 
		{
			"MP5k_StockBttstck"
		};
		
		ref TStringArray RandomHndGrd = 
		{
			"MP5_RailHndgrd"
		};
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mag_MP5_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomHndGrd.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
}
class MP5K: MP5K_Base{};