modded class AK101_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,20)<5)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_SLR106"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				if (entity.IsInherited(Mass_SLR106))
                {
                    Mass_SLR106 WewusGunslr106 = Mass_SLR106.Cast(entity);
                    WewusGunslr106.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
	override void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"PSO1Optic",
			"KobraOptic",
			"KazuarOptic",
			"KashtanOptic"
		};
		
		ref TStringArray RandomBttstck = 
		{
			"AK_WoodBttstck_Camo",
			"AK_WoodBttstck_Black",
			"AK_PlasticBttstck_Green",
			"AK_FoldingBttstck_Green"
		};
		
		ref TStringArray RandomHndGrd = 
		{
			"AK_WoodHndgrd_Camo",
			"AK_WoodHndgrd_Black",
			"AK_RailHndgrd_Green"
		};
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mag_AK101_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomHndGrd.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
};