class A6_ForeGrip_Base extends ItemBase {
	ref array<int>	m_AttachmentSlotsCheck;
	void A6_ForeGrip_Base() {
		m_AttachmentSlotsCheck = {
			InventorySlots.GetSlotIdFromString("weaponHandguardM4"),
			InventorySlots.GetSlotIdFromString("weaponHandguardAK"),
			InventorySlots.GetSlotIdFromString("weaponHandguardMP5"),
			InventorySlots.GetSlotIdFromString("weaponHandguardHKG28"),
			InventorySlots.GetSlotIdFromString("weaponHandguardHK"),
			InventorySlots.GetSlotIdFromString("weaponHandguardM16"),
			InventorySlots.GetSlotIdFromString("weaponHandguardFAL"),
			InventorySlots.GetSlotIdFromString("weaponForearmMP5k"),
			InventorySlots.GetSlotIdFromString("weaponForearmMP5"),
			InventorySlots.GetSlotIdFromString("weaponHandguardASVAL"),
			InventorySlots.GetSlotIdFromString("MossbergForearm"),
			InventorySlots.GetSlotIdFromString("MossbergOpticMount"),
			InventorySlots.GetSlotIdFromString("Suppressor9A91")
		}
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		return CanParentAcceptGrip(parent) || CheckRailAttachments(parent);
	}
	bool CanParentAcceptGrip(EntityAI parent) {
		return parent.ConfigIsExisting("CanAcceptGrip") && parent.ConfigGetBool("CanAcceptGrip") && parent.ConfigIsExisting("hasRailFunctionality") && parent.ConfigGetBool("hasRailFunctionality");
	}
	bool IsValidRailAttachment(ItemBase attachment) {
		return attachment && attachment.ConfigIsExisting("CanAcceptGrip") && attachment.ConfigGetBool("CanAcceptGrip") && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality");
	}
	bool IsParentMlock(EntityAI parent) {
		return parent.ConfigIsExisting("isMlock") && parent.ConfigGetBool("isMlock");
	}
	bool IsAnyMlockAttachment(ItemBase attachment) {
		return attachment && (attachment.ConfigIsExisting("isMlock") && attachment.ConfigGetBool("isMlock"));
	}
	bool CheckRailAttachments(EntityAI parent) {
		for (int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++) {
			int slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if (m_AttachmentSlotsCheck.Find(slot_id) != -1) {
				ItemBase attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if (IsValidRailAttachment(attachment)) {
					return true;
				}	
			}
		}
		return false;
	}
	bool CheckForMlockAttachments(EntityAI parent) {
		for (int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++) {
			int slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if (m_AttachmentSlotsCheck.Find(slot_id) != -1) {
				ItemBase attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if (IsAnyMlockAttachment(attachment)) {
					return true;
				}
			}
		}
		return false;
	}
	void ShowMlockAdapter() {
		SetObjectTexture(0,"A6_Weapons\\Rifles\\RSASS\\data\\camo_pic_rail_co.paa");
		SetObjectMaterial(0,"A6_Weapons\\Rifles\\RSASS\\data\\camo_pic_rail.rvmat");
	}
	void HideMlockAdapter() {
		SetObjectTexture(0,"");
		SetObjectMaterial(0,"");
	}
	override void OnWasAttached(EntityAI parent, int slot_id) {
		super.OnWasAttached(parent, slot_id);
		if ( IsParentMlock(parent) || CheckForMlockAttachments(parent)) {
			ShowMlockAdapter();
		} else {
			HideMlockAdapter();
		}	
	}		
	override void OnWasDetached( EntityAI parent, int slot_id ) {
		super.OnWasDetached( parent, slot_id );
		HideMlockAdapter();
	}
}