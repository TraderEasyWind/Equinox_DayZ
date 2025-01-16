modded class Mosin9130
{
    override void EEOnCECreate()
    {
        // Ensure there is no parent, then spawn the new object
        if (!GetParent())
        {
            // If the item rolls a 5% chance, it transforms
            if (Math.RandomInt(1, 100) < 5)
            {
                // Define an array of possible objects to spawn
                TStringArray possibleObjects = 
                {
                    "MassSVT40",
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
                Print("[MassDEBUG] Mosin transformed into " + objectToSpawn);

                // Check and call the specific SpawnAttachmentsOnUpgrade method for each object
                if (entity.IsInherited(MassSVT40))
                {
                    MassSVT40 svt40Entity = MassSVT40.Cast(entity); // Cast to MassSVT40
                    svt40Entity.SpawnAttachmentsOnUpgrade(); // Call SVT40's method
                }
                else if (entity.IsInherited(M14))
                {
                    M14 dmrEntity = M14.Cast(entity); // Cast to M14
                    dmrEntity.SpawnAttachmentsOnUpgrade(); // Call M14's method
                }
				// Delete the original Mosin
				Delete();
            }
        }
    }
};
