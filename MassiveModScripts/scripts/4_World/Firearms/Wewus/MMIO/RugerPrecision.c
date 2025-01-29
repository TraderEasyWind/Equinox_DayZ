modded class Mass_RugerPrecision_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,100)<15)
            {
                TStringArray possibleObjects = 
                {
                    "MassM24"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(MassM24))
                {
                    MassM24 Wewusm24 = MassM24.Cast(entity);
                    Wewusm24.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
	override void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"ACOGOptic",
			"ACOGOptic_6x",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"StarlightOptic"
		};
		
		
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mass_Mag_RugerPrecision_10Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());  			
        }
    }
};
class Mass_RugerPrecision: Mass_RugerPrecision_Base{};