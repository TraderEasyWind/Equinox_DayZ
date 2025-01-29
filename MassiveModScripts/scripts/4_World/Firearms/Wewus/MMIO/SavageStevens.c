modded class Stevens_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,20)<2)
            {
                TStringArray possibleObjects = 
                {
                    "Mosin9130",
					"Massmini14",
					"Repeater",
					"Mass_MP40",
					"MassMP153"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(Massmini14))
                {
                    Massmini14 WewusGunmini14 = Massmini14.Cast(entity);
                    WewusGunmini14.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(Mass_MP40))
                {
                    Mass_MP40 WewusGunmp40 = Mass_MP40.Cast(entity);
                    WewusGunmp40.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
}