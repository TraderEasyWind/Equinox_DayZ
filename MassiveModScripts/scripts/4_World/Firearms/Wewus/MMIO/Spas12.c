modded class Mass_SPAS12_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,20)<5)
            {
                TStringArray possibleObjects = 
                {
                    "Saiga"
                };
                string objectToSpawn;
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				if (entity.IsInherited(Saiga))
                {
                    Saiga WewusGunczsaiga = Saiga.Cast(entity);
                    WewusGunczsaiga.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
};