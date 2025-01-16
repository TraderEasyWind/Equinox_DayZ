modded class MassSVT40_Base extends RifleBoltFree_Base
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
        // Ensure there is no parent, then spawn the new object
        if (!GetParent())
        {
            // If the item rolls a 5% chance, it transforms
            if (Math.RandomInt(1, 100) < 5)
            {
                // Define an array of possible objects to spawn
                TStringArray possibleObjects = 
                {
                    "M14"
                };

                // Randomly pick an object from the array
                string objectToSpawn = possibleObjects[Math.RandomInt(0, possibleObjects.Count())];

                // Create the selected object at the same position as the Mosin
                EntityAI entity = EntityAI.Cast(GetGame().CreateObject(objectToSpawn, GetPosition(), false, true, true));

                // Set the orientation of the new object to match the original one
                entity.SetOrientation(GetOrientation());

                // Ensure the new object goes through the same central economy initialization
                entity.EEOnCECreate();

                // Log the transformation
                Print("[MassDEBUG] SVT40 transformed into " + objectToSpawn);

                // Check and call the specific SpawnAttachmentsOnUpgrade method for each object
                if (entity.IsInherited(M14))
                {
                    M14 m14Entity = M14.Cast(entity); // Cast to M14
                    m14Entity.SpawnAttachmentsOnUpgrade(); // Call M14's method
                }
				// Delete the original Mosin
				Delete();
            }
        }
	}
	
	
	void SpawnAttachments()
    {
        GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
        {
            if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
                AddHealth("", "",9999);

                Magazine mag = SpawnAttachedMagazine("Mass_Mag_SVT_10Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);  
                m_Inventory.CreateAttachment("PUScopeOptic");				
            }
        }
    }
	
	void SpawnAttachmentsOnUpgrade()
    {
        GameInventory m_Inventory = GetInventory();
        if (GetGame() &&  (GetGame().IsServer() || !GetGame().IsMultiplayer() ))
        {
            AddHealth("", "",9999);

            Magazine mag = SpawnAttachedMagazine("Mass_Mag_SVT_10Rnd", WeaponWithAmmoFlags.MAX_CAPACITY_MAG | WeaponWithAmmoFlags.CHAMBER);  
            m_Inventory.CreateAttachment("PUScopeOptic");				
        }
    }
}
