class A6_MP5k_Forearm_Base : A6_Handguard_Base {}
class A6_MP5k_Forearm : A6_MP5k_Forearm_Base{}
class A6_MP5k_Forearm_Proto : A6_MP5k_Forearm_Base{}
class A6_MP5k_Forearm_SP : A6_MP5k_Forearm_Base {
	override bool BlockSuppressor() {
		return true;
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("pistolMuzzle") != NULL) {
			return false;
		}
		return true;
	}
}