class MassiveMod_KeyRing extends Container_Base
{
    ref array<string> KeyCargo = {"MassiveMod_KeyBase"};
    
    
    override bool CanReceiveItemIntoCargo(EntityAI item)
    {
        if(GetInventory().IsInCargo()){
            return false;
        }
        
        if (!super.CanReceiveItemIntoCargo(item))
        {
            return false;
        }

        foreach (string allowedCargo : KeyCargo)
        {
            if (item.IsKindOf(allowedCargo))
            {
                return true;
            }
        }
        return false;
    }

    override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
    {
        if (!super.CanSwapItemInCargo(child_entity, new_entity))
        {
            return false;
        }

        foreach (string allowedCargo : KeyCargo)
        {
            if (new_entity.IsKindOf(allowedCargo))
            {
                return true;
            }
        }
        return false;
    }
};