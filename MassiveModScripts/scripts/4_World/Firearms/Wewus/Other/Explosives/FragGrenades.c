modded class M67Grenade
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,40)<2)
            {
                TStringArray possibleObjects = 
                {
                    "Plastic_Explosive"
                };
                string objectToSpawn = possibleObjects[Math.RandomInt(0, possibleObjects.Count())];
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				Delete();
            }
        }
    }
};
modded class RGD5Grenade
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,40)<2)
            {
                TStringArray possibleObjects = 
                {
                    "Plastic_Explosive"
                };
                string objectToSpawn = possibleObjects[Math.RandomInt(0, possibleObjects.Count())];
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				Delete();
            }
        }
    }
};
