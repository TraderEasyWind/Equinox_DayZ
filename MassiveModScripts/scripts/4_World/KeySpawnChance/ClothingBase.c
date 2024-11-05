//modded class Clothing
//{
//	ref array<string> itemstospawn = {"MassiveMod_Tier1Key", "MassiveMod_Tier2Key", "MassiveMod_Tier3Key", "MassiveMod_Tier4Key"};
//    override void EEOnCECreate()
//    {
//		Print(GetType() + " -- Key Spawned in Clothing ");
//        super.EEOnCECreate();
//        if (GetGame().IsServer()){
//            int randomchance = Math.RandomInt(1,250);
//            if (randomchance == 1)
//			{
//                this.GetInventory().CreateInInventory(itemstospawn.GetRandomElement());
//            }    
//        }
//    }
//}
//modded class Clothing
//{
//    override void EEOnCECreate()
//    {
//        super.EEOnCECreate();
//
//        if (GetGame().IsServer())
//        {
//            if (!GetInventory() || !GetInventory().GetCargo()) //Checks if item has any cargo for key to fit inside of
//                return;
//
//            if (Math.RandomInt(1,250) == 1)
//            {
//                array<string> itemstospawn = {"MassiveMod_Tier1Key", "MassiveMod_Tier2Key", "MassiveMod_Tier3Key", "MassiveMod_Tier4Key"};
//                EntityAI ent = EntityAI .Cast(GetInventory().CreateInInventory(itemstospawn.GetRandomElement()));
//
//                if (!ent)
//                  return;
//                
//                Print("[MASS DEBUG] "+GetPosition() + " -- Spawned "+ ent.GetType()+" in "+ GetType());
//            }    
//        }
//    }
//};
modded class ItemBase
{
    override void EEOnCECreate()
    {
        super.EEOnCECreate();

        if (GetGame().IsServer())
        {
            if (!GetInventory() || !GetInventory().GetCargo()) //Checks if item has any cargo for key to fit inside of
                return;

            if (Math.RandomInt(1,125) == 1)
            {
                array<string> itemstospawn = {"MassiveMod_Tier1Key", "MassiveMod_Tier2Key", "MassiveMod_Tier3Key", "MassiveMod_Tier4Key"};
                int keyToGen = 0;
                //EntityAI ent = EntityAI .Cast(GetInventory().CreateInInventory(itemstospawn.GetRandomElement()));
                //Bri Wrote Dis
                if (Math.RandomInt(1,3) == 1)
                {
                    keyToGen++;
                    if (Math.RandomInt(1,4) == 1)
                    {
                        keyToGen++;
                        if (Math.RandomInt(1,5) == 1)
                        {
                            keyToGen++;
                        }
                    } 
                }
                
                EntityAI ent = EntityAI.Cast(GetInventory().CreateInInventory(itemstospawn[keyToGen]));

                if (!ent)
                  return;
                
                Print("[MASS DEBUG] "+GetPosition() + " -- Spawned "+ ent.GetType()+" in "+ GetType());
            }    
        }
    }
};