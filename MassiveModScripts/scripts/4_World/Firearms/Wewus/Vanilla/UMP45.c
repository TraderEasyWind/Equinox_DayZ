modded class UMP45_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,4)<1)
            {
                TStringArray possibleObjects = 
                {
                    "JD_P90",
                };
                string objectToSpawn;
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(JD_P90))
                {
                    JD_P90 WewusGunp90 = JD_P90.Cast(entity);
                    WewusGunp90.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
	void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"ACOGOptic",
			"ReflexOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
		};
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mag_UMP_25Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement()); 			
        }
    }
};
class UMP45: UMP45_Base{};