modded class MassMP40_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,30)<5)
            {
                TStringArray possibleObjects = 
                {
                    "MassPPSH41"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
                if (entity.IsInherited(MassPPSH41))
                {
                    MassPPSH41 WewusGuncppsh = MassPPSH41.Cast(entity);
                    WewusGuncppsh.SpawnAttachmentsOnUpgrade();
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

            Magazine mag = SpawnAttachedMagazine("Mass_Mag_MP40_30Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER); 				
        }
    }
}
class Mass_MP40 extends MassMP40_Base{};//Forgot in mod