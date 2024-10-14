modded class ItemBase
{
    bool CanChildrenAssignToQuickbar()
    {
        return true;
    }

    override bool CanAssignToQuickbar()
    {
        if (!super.CanAssignToQuickbar())
            return false;

        if (GetInventory())
        {
            InventoryLocation loc = new InventoryLocation;
            GetInventory().GetCurrentInventoryLocation(loc);
            ItemBase parent = ItemBase.Cast(loc.GetParent());
            if (parent)
                return parent.CanChildrenAssignToQuickbar();
        }

        return true;
    }
};

modded class AliceBag_ColorBase
{
    override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};