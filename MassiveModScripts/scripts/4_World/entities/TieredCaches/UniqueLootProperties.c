modded class MetalPlate
{
	override void EEOnCECreate()
    {
        super.EEOnCECreate();
        
        if (GetGame().IsServer())
        {
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.CheckAndSetQuantity, 1000);
        }
    }
    
    void CheckAndSetQuantity()
    {
        if (GetHierarchyParent() && GetHierarchyParent().IsInherited(MassiveModCrate_Base))
        {
            SetQuantity(10);
        }
    }
}