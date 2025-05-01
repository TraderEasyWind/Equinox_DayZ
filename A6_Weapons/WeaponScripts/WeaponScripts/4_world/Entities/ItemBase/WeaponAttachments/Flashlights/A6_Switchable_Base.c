class A6_Switchable_Base extends Switchable_Base {
    ref array<int> m_AttachmentSlotsCheck;
    void A6_Switchable_Base() {
        InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
    }
    override bool CanPutAsAttachment(EntityAI parent) {
        if (!super.CanPutAsAttachment(parent)) {
            return false;
        }
        if ( GetGame().IsServer() ) {return true;}
        bool parent_accepts = CanParentAcceptFlashlight(parent);
        bool rail_attachment_found = CheckRequiredAttachments(parent);
        return parent_accepts || rail_attachment_found;
    }
    void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
        if (!AttSlots) {
            AttSlots = new array<int>;
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
            // Modded slots
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardHKG28"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardHK"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM16"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFAL"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponForearmMP5k"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponForearmMP5"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardASVAL"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergForearm"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
            AttSlots.Insert(InventorySlots.GetSlotIdFromString("Suppressor9A91"));
        }
    }
    bool CanParentAcceptFlashlight(EntityAI parent) {
        return (CheckFlashlightConfig(parent, "CanAcceptRightFlashlight") || CheckFlashlightConfig(parent, "CanAcceptLeftFlashlight") || CheckFlashlightConfig(parent, "CanAcceptTopFlashlight"));
    }
    bool CheckFlashlightConfig(EntityAI parent, string configName) {
        return parent.ConfigIsExisting(configName) && parent.ConfigGetBool(configName) && parent.ConfigIsExisting("hasRailFunctionality") && parent.ConfigGetBool("hasRailFunctionality");
    }
    bool CheckRequiredAttachments(EntityAI parent) {
        bool rail_attachment_found = false;
        for (int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++) {
            int slot_id = parent.GetInventory().GetAttachmentSlotId(i);
            if (m_AttachmentSlotsCheck.Find(slot_id) != -1) {
                ItemBase attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
                if (attachment && attachment.ConfigIsExisting("CanAcceptRightFlashlight") && attachment.ConfigGetBool("CanAcceptRightFlashlight") && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality")) {
                    rail_attachment_found = true;
                }
                if (attachment && attachment.ConfigIsExisting("CanAcceptLeftFlashlight") && attachment.ConfigGetBool("CanAcceptLeftFlashlight") && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality")) {
                    rail_attachment_found = true;
                }
                if (attachment && attachment.ConfigIsExisting("CanAcceptTopFlashlight") && attachment.ConfigGetBool("CanAcceptTopFlashlight") && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality")) {
                    rail_attachment_found = true;
                }
            }
        }
        return rail_attachment_found;
    }
    bool IsAttachmentMlock(EntityAI parent) {
        bool parent_accepts = parent.ConfigIsExisting("isMlock") && parent.ConfigGetBool("isMlock");
        bool rail_attachment_found = false;

        for (int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++) {
            int slot_id = parent.GetInventory().GetAttachmentSlotId(i);
            if (m_AttachmentSlotsCheck.Find(slot_id) != -1) {
                ItemBase attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
                if (attachment && attachment.ConfigIsExisting("isMlock") && attachment.ConfigGetBool("isMlock")) {
                    rail_attachment_found = true;
                }
            }
        }
        return parent_accepts || rail_attachment_found;
    }
    void ShowMlockAdapter() {
        SetObjectTexture(0, "A6_Weapons\\Rifles\\RSASS\\data\\camo_pic_rail_co.paa");
        SetObjectMaterial(0, "A6_Weapons\\Rifles\\RSASS\\data\\camo_pic_rail.rvmat");
    }
    void HideMlockAdapter() {
        SetObjectTexture(0, "");
        SetObjectMaterial(0, "");
    }
    override void OnWasAttached(EntityAI parent, int slot_id) {
        super.OnWasAttached(parent, slot_id);
        if (IsAttachmentMlock(parent)) {
            ShowMlockAdapter();
        } else {
            HideMlockAdapter();
        }
    }
    override void OnWasDetached(EntityAI parent, int slot_id) {
        super.OnWasDetached(parent, slot_id);
        HideMlockAdapter();
    }
}