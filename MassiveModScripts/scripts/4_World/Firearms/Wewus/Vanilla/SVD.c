modded class SVD_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,10)<1)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_AN94",
					"AKM"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.7)
				{
					objectToSpawn = "Mass_SVU";
				}
				else
				{
					objectToSpawn = "SV98";
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
				if (entity.IsInherited(SV98))
                {
                    SV98 WewusGunsvu = SV98.Cast(entity);
                    WewusGunsvu.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
	void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"KazuarOptic",
			"Mass1P69",
			"Akol_AkMount_NoAttachment",
			"KashtanOptic",
			"PSO1Optic",
			"KobraOptic"
		};
        GameInventory m_Inventory = GetInventory();
     
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);
            Magazine mag = SpawnAttachedMagazine("Mag_SVD_10Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());				
        }
     
    }
};
class SVD : SVD_Base{}; //Becoming a pattern...