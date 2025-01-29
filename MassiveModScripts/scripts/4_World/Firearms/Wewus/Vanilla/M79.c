modded class M79
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,20)<1)
            {
                TStringArray possibleObjects = 
                {
                    "JD_RPG"
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