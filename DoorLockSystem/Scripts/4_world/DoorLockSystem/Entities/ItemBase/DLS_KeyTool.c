class DLS_KeyTool : ItemBase {
	override bool CanReceiveItemIntoCargo (EntityAI item) {
		if(item.IsKindOf("DLS_Key_Base"))
			return true;
		return false;
	}
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity) {
		if(child_entity.IsKindOf("DLS_Key_Base") && new_entity.IsKindOf("DLS_Key_Base"))
			return true;
		return false;		
	}
    override int GetDamageSystemVersionChange() {
		return 110;
	}
	override bool IsContainer() {
		return true;
	}
}    