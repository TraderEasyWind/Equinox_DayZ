modded class Clothing
{
	ref array<string> itemstospawn = {"MassiveMod_Tier1Key", "MassiveMod_Tier2Key", "MassiveMod_Tier3Key", "MassiveMod_Tier4Key"};
    override void EEOnCECreate()
    {
		Print(GetType() + " -- Key Spawned in Clothing ");
        super.EEOnCECreate();
        if (GetGame().IsServer()){
            int randomchance = Math.RandomInt(1,200);
            if (randomchance == 1)
			{
                this.GetInventory().CreateInInventory(itemstospawn.GetRandomElement());
            }    
        }
    }
}