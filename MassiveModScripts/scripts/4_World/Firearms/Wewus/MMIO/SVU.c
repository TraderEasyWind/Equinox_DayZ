modded class Mass_SVU_Base
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
					Wewusm24.OnWewusTransform();
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
}
class Mass_SVU: Mass_SVU_Base{};