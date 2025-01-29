modded class AKM_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,50)<5)
            {
                TStringArray possibleObjects = 
                {
                    "M14",
					"Mass_AN94",
					"JD_Groza_762"
                };
				// New conditional check to split chances
				string objectToSpawn;
				float randomValue = Math.RandomFloat01();
				if (randomValue < 0.25)
				{
					objectToSpawn = "M14";
				}
				else if (randomValue < 0.75)
				{
					objectToSpawn = "JD_Groza_762";
				}
				else
				{
					objectToSpawn = "Mass_AN94";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(M14))
                {
                    M14 WewusGunm14 = M14.Cast(entity);
                    WewusGunm14.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(JD_Groza_762))
                {
                    JD_Groza_762 WewusGungroza762 = JD_Groza_762.Cast(entity);
                    WewusGungroza762.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(Mass_AN94))
                {
                    Mass_AN94 WewusGunan94 = Mass_AN94.Cast(entity);
                    WewusGunan94.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
	void SpawnAttachmentsOnUpgrade()
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

            Magazine mag = SpawnAttachedMagazine("Mag_AKM_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());
			m_Inventory.CreateAttachment(RandomHndGrd.GetRandomElement());
			m_Inventory.CreateAttachment(RandomBttstck.GetRandomElement());  			
        }
    }
};
class AKM: AKM_Base{}; //This one was really shocking to me.