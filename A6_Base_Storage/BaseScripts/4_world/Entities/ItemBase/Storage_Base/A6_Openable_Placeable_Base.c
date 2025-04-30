class A6_Openable_Placeable_Base: A6_Openable_Base {   
    override bool CanPutInCargo( EntityAI parent ) {
        #ifdef CodeLock
        if ( IsCodeLocked() ) {
            return false;
        }
        #endif
        #ifdef RA_BaseBuilding_Scripts
        if ( IsCodeLocked() ) {
            return false;
        }
        #endif
        #ifdef EXPANSIONMODBASEBUILDING
	    if ( ExpansionHasCodeLock() ) {
            return false;
        }
        #endif
        if (GetNumberOfItems() == 0 && !IsOpen()) {
			return true;
        }    
        return false;
    }
    override bool CanPutIntoHands(EntityAI parent) {
        #ifdef CodeLock
        if ( IsCodeLocked() ) {
            return false;
        }
        #endif
        #ifdef RA_BaseBuilding_Scripts
        if ( IsCodeLocked() ) {
            return false;
        }
        #endif
        #ifdef EXPANSIONMODBASEBUILDING
	    if ( ExpansionHasCodeLock() ) {
            return false;
        }
        #endif
        if (GetNumberOfItems() == 0 && !IsOpen()) {
			return true;
        }    
        return false;
    }
    override bool IsDeployable() {
        return true;
    }
    override void SetActions() {
        super.SetActions();
        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
    } 
}