modded class MassSVT40_Base
{
	//override void EEOnCECreate()
    //{
    //    if (!GetParent())
    //    {
    //        if (Math.RandomInt(1,50)<4)
    //        {
    //            TStringArray possibleObjects = 
    //            {
    //                "SVD"
    //            };
    //            string objectToSpawn;
	//			objectToSpawn = possibleObjects.GetRandomElement();
    //            EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));
    //            entity.SetOrientation(GetOrientation());
    //            entity.EEOnCECreate();
    //            Print("[WEWUSDEBUG] " + GetType() + " transformed into " + objectToSpawn);
    //            if (entity.IsInherited(SVD))
    //            {
    //                SVD WewusGunsvd = SVD.Cast(entity);
    //                WewusGunsvd.SpawnAttachmentsOnUpgrade();
    //            }
	//			Delete();
    //        }
    //    }
    //}

	void SpawnAttachmentsOnUpgrade()
    {
		ref TStringArray RandomOptics = 
		{
			"PUScopeOptic"
		};
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mass_Mag_SVT_10Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);
            m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());  				
        }
    }
};