class A6_MedicalCabinet : A6_Openable_Base  {
    override bool CanBeDismantled() {
		return true;
	}  
    bool IsItemWhitelisted(EntityAI item) {
        if(GetA6BaseStorageConfig().EnableMedicalCabinetWhitelist) {
            array<string> itemWhitelist = GetA6BaseStorageConfig().GetMedicalWhitelist();
            foreach (string whitelist : itemWhitelist) {
		    	if(item.IsKindOf(whitelist)) {
                    return true;
                }        
		    }
            return false;
        }
        return true;
    }  
	override bool CanReceiveItemIntoCargo( EntityAI item ) {
        return IsItemWhitelisted(item) && super.CanReceiveItemIntoCargo(item); 
    }
    override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity) {
        return IsItemWhitelisted(new_entity) && super.CanSwapItemInCargo(child_entity, new_entity);
    }
    override bool AcceptsCodeLocks() {
        return false;
    }
}
class A6_MedicalCabinet_Black : A6_MedicalCabinet {}