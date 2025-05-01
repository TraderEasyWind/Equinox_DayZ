class DLS_KeyCard_Holder : ItemBase {
    ref array<string> m_AllowedCargo = {"DLS_KeyCard_Base","DLS_KeyCard_InfiniteUse"};
	override bool CanReceiveItemIntoCargo (EntityAI item) {
		foreach( string allowedCargo : m_AllowedCargo ) {
			if(item.IsKindOf(allowedCargo))
				return true;
		}
		return false;
	}
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity) {
		foreach( string allowedCargo : m_AllowedCargo ) {		
			if(child_entity.IsKindOf(allowedCargo) && new_entity.IsKindOf(allowedCargo))
				return true;
		}		
		return false;		
	}
    override int GetDamageSystemVersionChange() {
		return 110;
	}
	override bool IsContainer() {
		return true;
	}
}    
