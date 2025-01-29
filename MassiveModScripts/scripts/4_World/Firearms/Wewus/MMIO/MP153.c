modded class MassMP153_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,10)<2)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_SPAS12",
					"MassTMP153"
					"JD_SerbuSuperShorty",
					"JD_Model1887"
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
};
class MassMP153 extends MassMP153_Base{};//OOPS
class MassTMP153 extends MassMP153_Base{};