modded class Vikhr
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,3)<1)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_AK9",
					"Mass_ASVAL",
					"JD_Groza"
                };
                string objectToSpawn = possibleObjects[Math.RandomInt(0, possibleObjects.Count())];
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(Mass_AK9))
                {
                    Mass_AK9 WewusGunak9 = Mass_AK9.Cast(entity);
                    WewusGunak9.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(Mass_ASVAL))
                {
                    Mass_ASVAL WewusGunmassasval = Mass_ASVAL.Cast(entity);
                    WewusGunmassasval.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(JD_Groza))
                {
                    JD_Groza WewusGungroza9 = JD_Groza.Cast(entity);
                    WewusGungroza9.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
};