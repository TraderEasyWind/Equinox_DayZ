modded class MissionGameplay
{
    override void ShowInventory()
    {
        super.ShowInventory();
        
        CloseBag();
    }
    
    override void HideInventory()
    {
        super.HideInventory();
        
        CloseBag(true);
    }

    protected void CloseBag(bool noisy = false)
    {
        RightArea rightArea;
        map<EntityAI, ref Container> showedItems;

        EnScript.GetClassVar(Inventory.GetInstance(), "m_RightArea", 0, rightArea);

        if (rightArea == NULL)
            return;
        
        EnScript.GetClassVar(rightArea.GetPlayerContainer(), "m_ShowedItems", 0, showedItems);

        if (showedItems == NULL)
            return;
        
        foreach (EntityAI entity, Container container: showedItems)
        {
            ClosableContainer cargo;
            if (Class.CastTo(cargo, container))
            {
                InventoryLocation location = new InventoryLocation;
                if (!entity.GetInventory().GetCurrentInventoryLocation(location))
                    break;
                
                if (location.GetSlot() == InventorySlots.BACK)
                {
                    Inventory.MoveAttachmentToTop( location.GetSlot() );
                    rightArea.GetPlayerContainer().UpdateSelectionIcons();
                    rightArea.GetPlayerContainer().CloseContainer(entity, noisy);
                }
            }
        }
    }
}