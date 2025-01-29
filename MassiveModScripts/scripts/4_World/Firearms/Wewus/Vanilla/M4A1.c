modded class M4A1_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,30)<5)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_HK416",
					"M14"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.7)
				{
					objectToSpawn = "Mass_HK416";
				}
				else
				{
					objectToSpawn = "M14";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(Mass_HK416))
                {
                    Mass_HK416 WewusGunhk416 = Mass_HK416.Cast(entity);
                    WewusGunhk416.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(M14))
                {
                    M14 WewusGunsm14 = M14.Cast(entity);
                    WewusGunsm14.SpawnAttachmentsOnUpgrade();
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
		
		ref TStringArray RandomHndGrd = 
		{
			"M4_MPHndgrd",
			"M4_RISHndgrd",
			"M4_RISHndgrd_Green"
		};
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mag_CMAG_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomHndGrd.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
};
class M4A1 : M4A1_Base{};