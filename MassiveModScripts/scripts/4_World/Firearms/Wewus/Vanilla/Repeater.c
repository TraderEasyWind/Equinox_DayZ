modded class Repeater
{
    override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,25)<2)
            {
                TStringArray possibleObjects = 
                {
                    "Winchester70"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				Delete();
            }
        }
    }
}