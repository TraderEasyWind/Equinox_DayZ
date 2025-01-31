//modded Mag_STANAG_60Rnd
//{
//	override void EEOnCECreate()
//    {
//        if (!GetParent())
//        {
//            if (Math.RandomInt(1,100)<5)
//            {
//                TStringArray possibleObjects = 
//                {
//                    "Mag_CMAG_10Rnd_Black"
//                };
//                string objectToSpawn = possibleObjects[Math.RandomInt(0, possibleObjects.Count())];
//                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
//                entity.SetOrientation(GetOrientation());
//                entity.EEOnCECreate();
//                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
//				Delete();
//            }
//        }
//    }
//};