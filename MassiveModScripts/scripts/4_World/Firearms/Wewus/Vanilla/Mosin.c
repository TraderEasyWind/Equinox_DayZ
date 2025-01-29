modded class Mosin9130_Base
{
    override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,15)<2)
            {
                TStringArray possibleObjects = 
                {
                    "MassSVT40",
					"CZ550"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.6)
				{
					objectToSpawn = "CZ550";
				}
				else
				{
					objectToSpawn = "MassSVT40";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(CZ550))
                {
                    CZ550 WewusGuncz550 = CZ550.Cast(entity);
                    WewusGuncz550.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(MassSVT40))
                {
                    MassSVT40 WewusGunsvt40 = MassSVT40.Cast(entity);
                    WewusGunsvt40.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
};