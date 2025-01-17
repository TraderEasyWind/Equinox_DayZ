modded class Mosin9130
{
    override void EEOnCECreate()
    {
        // Ensure there is no parent, then spawn the new object
        if (!GetParent())
        {
            // Create the Massm300 object at the same position as the Mosin
            EntityAI entity = EntityAI.Cast(GetGame().CreateObject("Massm300", GetPosition(), false, true, true));

            // Set orientation of the new object to match the original one
            entity.SetOrientation(GetOrientation());

            // Ensure the new object goes through the same central economy initialization
            entity.EEOnCECreate();

            // Log the transformation
            Print("[MassDEBUG] Mosin transformed into M300");

            // Delete the original Mosin
            Delete();
        }
    }
};
