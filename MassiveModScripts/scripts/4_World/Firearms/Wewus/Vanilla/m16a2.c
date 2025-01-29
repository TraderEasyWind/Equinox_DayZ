modded class M16A2_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,50)<8)
            {
                TStringArray possibleObjects = 
                {
                    "MassM16",
					"AKM",
					"AK74",
					"AK101"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				switch (objectToSpawn)
                {
                    case "MassM16":
                    {
                        MassM16 WewusGunm16a1 = MassM16.Cast(entity);
                        WewusGunm16a1.SpawnAttachmentsOnUpgrade();
                        break;
                    }
                    case "AKM":
                    {
                        AKM WewusGunakm = AKM.Cast(entity);
                        WewusGunakm.SpawnAttachmentsOnUpgrade();
                        break;
                    }
                    case "AK74":
                    {
                        AK74 WewusGunak74 = AK74.Cast(entity);
                        WewusGunak74.SpawnAttachmentsOnUpgrade();
                        break;
                    }
                     case "AK101":
                    {
                        AK101 WewusGunak101 = AK101.Cast(entity);
                        WewusGunak101.SpawnAttachmentsOnUpgrade();
                        break;
                    }
                }
				Delete();
            }
        }
	}
};