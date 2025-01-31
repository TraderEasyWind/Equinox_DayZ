modded class Ammo_40mm_Explosive
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,80)<8)
            {
                TStringArray possibleObjects = 
                {
                    "Ammo_JD_RPG_Rocket"
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