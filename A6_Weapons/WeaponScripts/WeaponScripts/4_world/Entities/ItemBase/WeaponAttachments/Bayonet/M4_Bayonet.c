class A6_M4_Bayonet extends M9A1_Bayonet {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzleM4") == NULL ) {
			if ( parent.FindAttachmentBySlotName("weaponHandguardM4") == NULL ) {
				return true;
			}
			if ( parent.FindAttachmentBySlotName("weaponHandguardM4").ConfigIsExisting("CanAcceptBayonet") && parent.FindAttachmentBySlotName("weaponHandguardM4").ConfigGetBool("CanAcceptBayonet")) {
				return true;
			}		
		}
		return false;
	}
	override bool CanDetachAttachment (EntityAI parent) {
		if ( parent.FindAttachmentBySlotName("weaponMuzzleM4") ) {
			return false;
		}
		return true;
	}
}