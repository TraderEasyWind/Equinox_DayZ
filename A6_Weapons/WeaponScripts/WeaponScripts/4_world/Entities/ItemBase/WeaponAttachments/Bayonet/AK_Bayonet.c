class A6_AK_Bayonet extends AK_Bayonet {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzleAK") == NULL ) {
			if ( parent.FindAttachmentBySlotName("weaponHandguardAK") == NULL ) {
				return true;
			}
			if ( parent.FindAttachmentBySlotName("weaponHandguardAK").ConfigIsExisting("CanAcceptBayonet") && parent.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("CanAcceptBayonet")) {
				return true;
			}		
		}
		return false;
	}
	override bool CanDetachAttachment (EntityAI parent) {
		if ( parent.FindAttachmentBySlotName("weaponMuzzleAK") || parent.FindAttachmentBySlotName("weaponmuzzle338") ) {
			return false;
		}
		return true;
	}
}