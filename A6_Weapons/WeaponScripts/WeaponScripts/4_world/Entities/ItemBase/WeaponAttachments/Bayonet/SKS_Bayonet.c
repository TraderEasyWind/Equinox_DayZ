class A6_SKS_Bayonet extends SKS_Bayonet {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponMuzzle") == NULL && parent.FindAttachmentBySlotName("weaponMuzzleSKS") == NULL) {
			return true;
		}
		return false;
	}
	override bool CanDetachAttachment (EntityAI parent) {
		if ( parent.FindAttachmentBySlotName("weaponMuzzleSKS") ) {
			return false;
		}
		return true;
	}
}