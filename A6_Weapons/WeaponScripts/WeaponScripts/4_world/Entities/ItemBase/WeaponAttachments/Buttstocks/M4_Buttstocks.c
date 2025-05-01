class A6_M4_Buttstock : ButtstockBase {
	ref array<int>		m_AttachmentSlotsCheck;
	void A6_M4_Buttstock() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponTubeStockAdapterScar"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponTubeStockAdapterSpear"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponTubeStockAdapterSVD"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponTubeStockAdapterAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponTubeStockAdapterASVAL"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponTubeStockAdapterVector"));
		}
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}
		bool req_attachment 		= false;
		bool tube_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					tube_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && tube_attachment_found);
	}
}

class A6_M4OE_Buttstock : A6_M4_Buttstock {}
class A6_M4OE_Buttstock_Green : A6_M4OE_Buttstock {}
class A6_M4OE_Buttstock_Tan : A6_M4OE_Buttstock {}

class A6_CAR15_OE_Buttstock : A6_M4_Buttstock {}

class A6_CAR15_Wire_Buttstock : A6_M4_Buttstock {
	override bool CanPutAsAttachment(EntityAI parent) {
		if (!super.CanPutAsAttachment(parent)) {
			return false;
		}
		return parent.ConfigIsExisting("CanAcceptCAR15Buttstock") && parent.ConfigGetBool("CanAcceptCAR15Buttstock");
	}
}
class A6_MFT_Min_Buttstock : A6_M4_Buttstock {}
class A6_MFT_Min_Buttstock_Black : A6_MFT_Min_Buttstock {}

class A6_PRS_Buttstock : A6_M4_Buttstock {}
class A6_PRS_Buttstock_Tan : A6_PRS_Buttstock {}
class A6_PRS_Buttstock_Green : A6_PRS_Buttstock {}

class A6_DD_Buttstock : A6_M4_Buttstock {}
class A6_DD_Buttstock_Tan : A6_DD_Buttstock {}

class A6_MFT_Buttstock : A6_M4_Buttstock {}
class A6_MFT_Buttstock_Tan : A6_MFT_Buttstock {}

class A6_M110_Buttstock : A6_M4_Buttstock {}

class A6_B5Bravo_Buttstock_Black : A6_M4_Buttstock {}
class A6_B5Bravo_Buttstock_Tan : A6_B5Bravo_Buttstock_Black {}
class A6_B5Bravo_Buttstock_Green : A6_B5Bravo_Buttstock_Black {}

class A6_Carbine_Buttstock : A6_M4_Buttstock {}
class A6_Carbine_Buttstock_Green : A6_Carbine_Buttstock {}
class A6_Carbine_Buttstock_Tan : A6_Carbine_Buttstock {}

class A6_DS150_Buttstock : A6_M4_Buttstock {}
class A6_DS150_Buttstock_Green : A6_M4_Buttstock {}
class A6_DS150_Buttstock_Tan : A6_M4_Buttstock {}

class A6_MOESLK_Buttstock : A6_M4_Buttstock {}
class A6_MOESLK_Buttstock_Green : A6_MOESLK_Buttstock {} 
class A6_MOESLK_Buttstock_Tan : A6_MOESLK_Buttstock {}

class A6_BCM_Buttstock : A6_M4_Buttstock {}
class A6_BCM_Buttstock_Green : A6_BCM_Buttstock {}
class A6_BCM_Buttstock_Tan : A6_BCM_Buttstock {}

class A6_HK_E1_Buttstock_Black : A6_M4_Buttstock {}
class A6_HK_E1_Buttstock_Tan : A6_HK_E1_Buttstock_Black {}
class A6_HK_E1_Buttstock_Green : A6_HK_E1_Buttstock_Black {}

class A6_HK_Slim_Line_Buttstock_Black : A6_M4_Buttstock {}
class A6_HK_Slim_Line_Buttstock_Tan : A6_HK_Slim_Line_Buttstock_Black {}
class A6_HK_Slim_Line_Buttstock_Green : A6_HK_Slim_Line_Buttstock_Black {}

class A6_HKG28_Buttstock_Black : A6_M4_Buttstock {}
class A6_HKG28_Buttstock_Tan : A6_HKG28_Buttstock_Black {}