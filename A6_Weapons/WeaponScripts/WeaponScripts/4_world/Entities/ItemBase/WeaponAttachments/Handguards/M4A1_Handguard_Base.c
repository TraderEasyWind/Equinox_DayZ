class A6_M4A1_Handguard_Base : A6_Handguard_Base  {}
class A6_M4A1_Handguard_Plastic : A6_M4A1_Handguard_Base {}
class A6_M4A1_Handguard_MP : A6_M4A1_Handguard_Base {}
class A6_M4A1_Handguard_MP_Green : A6_M4A1_Handguard_MP {}
class A6_M4A1_Handguard_MP_Tan : A6_M4A1_Handguard_MP {}
class A6_M4A1_Handguard_KAC_Base : A6_M4A1_Handguard_Base {}
class A6_M4A1_Handguard_KAC_Black : A6_M4A1_Handguard_KAC_Base {}
class A6_M4A1_Handguard_DD95_Base : A6_M4A1_Handguard_Base {
	override bool HasIronSights() {
		return true;
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( parent.FindAttachmentBySlotName("weaponBayonet") ) {
			return false;
		}
		return true;
	}
}
class A6_M4A1_Handguard_DD95_Tan : A6_M4A1_Handguard_DD95_Base {}
class A6_M4A1_Handguard_DD95_Black : A6_M4A1_Handguard_DD95_Base {}
class A6_M4A1_Handguard_DD95_MLOK_Base : A6_M4A1_Handguard_DD95_Base {}
class A6_M4A1_Handguard_DD95_MLOK_Tan : A6_M4A1_Handguard_DD95_MLOK_Base {}
class A6_M4A1_Handguard_DD95_MLOK_Black : A6_M4A1_Handguard_DD95_MLOK_Base {}
class A6_M4A1_Handguard_DD95_MLOK_Green : A6_M4A1_Handguard_DD95_MLOK_Base {}
class A6_M4A1_Handguard_DD125_Base : A6_M4A1_Handguard_Base {
	override bool HasIronSights() {
		return true;
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( parent.FindAttachmentBySlotName("weaponBayonet") ) {
			return false;
		}
		return true;
	}
}
class A6_M4A1_Handguard_DD125_Tan : A6_M4A1_Handguard_DD125_Base {}
class A6_M4A1_Handguard_DD125_Black : A6_M4A1_Handguard_DD125_Base {}
class A6_M4A1_Handguard_DD125_MLOK_Base : A6_M4A1_Handguard_DD125_Base {}
class A6_M4A1_Handguard_DD125_MLOK_Tan : A6_M4A1_Handguard_DD125_MLOK_Base {}
class A6_M4A1_Handguard_DD125_MLOK_Black : A6_M4A1_Handguard_DD125_MLOK_Base {}
class A6_M4A1_Handguard_DD125_MLOK_Green : A6_M4A1_Handguard_DD125_MLOK_Base {}
class A6_M4A1_Handguard_DDFSP_Base: A6_M4A1_Handguard_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( parent.FindAttachmentBySlotName("weaponBayonet") ) {
			return false;
		}
		return true;
	}
}
class A6_M4A1_Handguard_DDFSP_Tan : A6_M4A1_Handguard_DDFSP_Base {}
class A6_M4A1_Handguard_DDFSP_Black : A6_M4A1_Handguard_DDFSP_Base {}
class A6_M4A1_Handguard_DDFSP_MLOK_Base : A6_M4A1_Handguard_DDFSP_Base {}
class A6_M4A1_Handguard_DDFSP_MLOK_Tan : A6_M4A1_Handguard_DDFSP_MLOK_Base {}
class A6_M4A1_Handguard_DDFSP_MLOK_Black : A6_M4A1_Handguard_DDFSP_MLOK_Base {}
class A6_M4A1_Handguard_DDFSP_MLOK_Green : A6_M4A1_Handguard_DDFSP_MLOK_Base {}