class A6_500SW extends Magnum {
    override void AssembleGun() {
        if ( !FindAttachmentBySlotName(ATT_SLOT_EJECTOR) && !FindAttachmentBySlotName(ATT_SLOT_CYLINDER) ) {
            GetInventory().CreateAttachment("A6_500SW_Ejector");
            GetInventory().CreateAttachment("A6_500SW_Cylinder");
        }
        super.AssembleGun();
    }
};
class A6_500SW_Gold extends Magnum {
    override void AssembleGun() {
        if ( !FindAttachmentBySlotName(ATT_SLOT_EJECTOR) && !FindAttachmentBySlotName(ATT_SLOT_CYLINDER) ) {
            GetInventory().CreateAttachment("A6_500SW_Black_Ejector");
            GetInventory().CreateAttachment("A6_500SW_Black_Cylinder");
        }
        super.AssembleGun();
    }
};
class A6_500SW_Future extends Magnum {
    override void AssembleGun() {
        if ( !FindAttachmentBySlotName(ATT_SLOT_EJECTOR) && !FindAttachmentBySlotName(ATT_SLOT_CYLINDER) ) {
            GetInventory().CreateAttachment("A6_500SW_Black_Ejector");
            GetInventory().CreateAttachment("A6_500SW_Black_Cylinder");
        }
        super.AssembleGun();
    }
};
class A6_500SW_Cylinder extends Magnum_Cylinder {};
class A6_500SW_Black_Cylinder extends Magnum_Cylinder {};
class A6_500SW_Ejector extends Magnum_Ejector {};
class A6_500SW_Black_Ejector extends Magnum_Ejector {};