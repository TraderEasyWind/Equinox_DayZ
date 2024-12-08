//class MassiveMod_KeyRing extends Container_Base
//{
//    ref array<string> KeyCargo = {"MassiveMod_KeyBase"};
//    
//    override bool CanLoadItemIntoCargo(EntityAI item)
//    {
//        
//        if (string allowedCargo : KeyCargo)
//        {
//            if (item.IsKindOf(allowedCargo))
//            {
//                return true;  
//            }
//        }
//        return false;
//    }
//	
//    override bool CanReceiveItemIntoCargo(EntityAI item)
//    {
//        if(GetInventory().IsInCargo()){
//            return false;
//        }
//        
//        if (!super.CanReceiveItemIntoCargo(item))
//        {
//            return false;
//        }
//
//        foreach (string allowedCargo : KeyCargo)
//        {
//            if (item.IsKindOf(allowedCargo))
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//
//    override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
//    {
//        if (!super.CanSwapItemInCargo(child_entity, new_entity))
//        {
//            return false;
//        }
//
//        foreach (string allowedCargo : KeyCargo)
//        {
//            if (new_entity.IsKindOf(allowedCargo))
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};

class MassiveMod_KeyRing extends Container_Base
{
    ref array<string> KeyCargo = {"MassiveMod_KeyBase"};
    
    // Check if the container is in the player's cargo and lock its inventory
    bool IsInPlayerCargo()
    {
        return GetInventory().IsInCargo();
    }

    // Lock loading items into the container if it is in the player's cargo
    override bool CanLoadItemIntoCargo(EntityAI item)
    {
        if (IsInPlayerCargo()) {
            return false;  // Block loading items if in cargo
        }

        // Allow only items in the KeyCargo list to be loaded
        foreach (string allowedCargo : KeyCargo)
        {
            if (item.IsKindOf(allowedCargo))
            {
                return true;
            }
        }
        return false;  // Disallow loading if the item is not in KeyCargo
    }

    // Lock receiving items into the container if it is in the player's cargo
    override bool CanReceiveItemIntoCargo(EntityAI item)
    {
        if (IsInPlayerCargo()) {
            return false;  // Block receiving items if in cargo
        }

        if (GetInventory().IsInCargo()) {
            return false;  // Prevent if already in cargo
        }

        if (!super.CanReceiveItemIntoCargo(item)) {
            return false;  // Call the parent class to check other conditions
        }

        // Allow only items in the KeyCargo list to be received
        foreach (string allowedCargo : KeyCargo) {
            if (item.IsKindOf(allowedCargo)) {
                return true;
            }
        }
        return false;  // Reject all items not in the KeyCargo list
    }

    // Lock swapping items if the container is in the player's cargo
    override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
    {
        if (IsInPlayerCargo()) {
            return false;  // Block swapping items if in cargo
        }

        if (!super.CanSwapItemInCargo(child_entity, new_entity)) {
            return false;  // Call parent class to handle standard conditions
        }

        // Allow only valid items in KeyCargo to be swapped
        foreach (string allowedCargo : KeyCargo) {
            if (new_entity.IsKindOf(allowedCargo)) {
                return true;
            }
        }
        return false;  // Reject all non-"KeyCargo" items from swapping
    }
};