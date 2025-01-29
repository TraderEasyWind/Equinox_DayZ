modded class Mass_HK416_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,30)<1)
            {
                TStringArray possibleObjects = 
                {
                    "MassAR15DMR",
					"FAL"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(MassAR15DMR))
                {
                    MassAR15DMR WewusGunpred = MassAR15DMR.Cast(entity);
                    WewusGunpred.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(FAL))
                {
                    FAL WewusGunfal = FAL.Cast(entity);
                    WewusGunfal.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
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

            Magazine mag = SpawnAttachedMagazine("Mag_CMAG_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
}
class  Mass_HK416: M16A2_Base{};