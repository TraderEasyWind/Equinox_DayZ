modded class M14_Base
{
	override void EEOnCECreate()
    {
        if (!GetParent())
        {
            if (Math.RandomInt(1,20)<1)
            {
                TStringArray possibleObjects = 
                {
                    "Mass_RugerPrecision"
                };
                string objectToSpawn;
				objectToSpawn = possibleObjects.GetRandomElement();
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
                entity.SetOrientation(GetOrientation());
                entity.EEOnCECreate();
                Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
				if (entity.IsInherited(Mass_RugerPrecision))
                {
                    Mass_RugerPrecision WewusGunrugerprecision = Mass_RugerPrecision.Cast(entity);
                    WewusGunrugerprecision.SpawnAttachmentsOnUpgrade();
                }
				Delete();
            }
        }
    }
	
   //borocili wrote dis
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

            Magazine mag = SpawnAttachedMagazine("Mag_M14_20Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());        
        }
      
    }
}