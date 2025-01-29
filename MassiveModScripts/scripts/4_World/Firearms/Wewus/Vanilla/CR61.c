modded class CZ61_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,8)<2)
            {
                TStringArray possibleObjects = 
                {
                    "MP5K",
					"JD_CZ_EVO3A1"
                };
                string objectToSpawn = possibleObjects[Math.RandomInt(0, possibleObjects.Count())];
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(MP5K))
                {
                    MP5K WewusGunmp5k = MP5K.Cast(entity);
                    WewusGunmp5k.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(JD_CZ_EVO3A1))
                {
                    JD_CZ_EVO3A1 WewusGunczevo = JD_CZ_EVO3A1.Cast(entity);
                    WewusGunczevo.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
};
class CZ61: CZ61_Base{};