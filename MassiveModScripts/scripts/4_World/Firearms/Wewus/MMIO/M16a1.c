modded class MassM16
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,40)<6)
            {
                TStringArray possibleObjects = 
                {
                    "AugShort",
					"M4A1"
                };
                string objectToSpawn;
				// New conditional check to split chances
				if (Math.RandomFloat01() < 0.6)
				{
					objectToSpawn = "AugShort";
				}
				else
				{
					objectToSpawn = "M4A1";
				}
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(AugShort))
                {
                    AugShort WewusGunaugshort = AugShort.Cast(entity);
                    WewusGunaugshort.SpawnAttachmentsOnUpgrade();
                }
				if (entity.IsInherited(M4A1))
                {
                    M4A1 WewusGunm4 = M4A1.Cast(entity);
                    WewusGunm4.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
	void SpawnAttachmentsOnUpgrade()
    {
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mag_STANAG_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);			
        }
    }
};