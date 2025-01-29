modded class AK74_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,70)<7)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_AN94",
					"AKM"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.6)
				{
					objectToSpawn = "Mass_AN94";
				}
				else
				{
					objectToSpawn = "AKM";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(Mass_AN94))
                {
                    Mass_AN94 WewusGunan94 = Mass_AN94.Cast(entity);
                    WewusGunan94.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(AKM))
                {
                    AKM WewusGunakm = AKM.Cast(entity);
                    WewusGunakm.SpawnAttachmentsOnUpgrade();
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

            Magazine mag = SpawnAttachedMagazine("Mag_AK74_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomHndGrd.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
};