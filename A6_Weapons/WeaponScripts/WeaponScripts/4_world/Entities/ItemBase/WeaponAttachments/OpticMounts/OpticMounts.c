class A6_Optic_Mount_Base extends ItemBase {
    override bool CanPutAsAttachment( EntityAI parent ) {
        if ( !super.CanPutAsAttachment(parent) ) {return false;}
        if ( parent.FindAttachmentBySlotName("weaponOpticsAK") ) {
            return false;
        }
        return super.CanPutAsAttachment(parent);
    }
    override bool CanDetachAttachment (EntityAI parent) {
        if ( parent.FindAttachmentBySlotName("weaponOptics")) {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}
class A6_Optic_Mount_M16 extends A6_Optic_Mount_Base{}
class A6_Optic_Mount_FAL extends A6_Optic_Mount_Base{}
class A6_Optic_Mount_SKS extends A6_Optic_Mount_Base{}
class A6_Optic_Mount_MP5 extends A6_Optic_Mount_Base{}
class A6_Optic_Mount9A91 extends A6_Optic_Mount_Base{}
class A6_Optic_MountSVD extends A6_Optic_Mount_Base{}
class A6_Optic_MountAK extends A6_Optic_Mount_Base {
    override bool CanPutAsAttachment(EntityAI parent) {
        if (!super.CanPutAsAttachment(parent)) {
            return false;
        }
        bool canAcceptSideMount = parent.ConfigIsExisting("CanAcceptSideMount") && parent.ConfigGetBool("CanAcceptSideMount");
        return canAcceptSideMount && parent.FindAttachmentBySlotName("weaponOpticsAK") == NULL;
    }
}
class A6_AK_Dustcover_Optic_Mount extends A6_Optic_Mount_Base {
    override bool CanPutAsAttachment(EntityAI parent) {
        if (!super.CanPutAsAttachment(parent)) {
            return false;
        }
        bool canAcceptDustCover = parent.ConfigIsExisting("CanAcceptDustCover") && parent.ConfigGetBool("CanAcceptDustCover");
        return canAcceptDustCover && parent.FindAttachmentBySlotName("weaponOpticsAK") == NULL;
    }
}
class A6_Mossberg_OpticMount_Base extends A6_Optic_Mount_Base {}
class A6_Mossberg_OpticMount : A6_Mossberg_OpticMount_Base {}
class A6_Mossberg_Shroud_Rail : A6_Mossberg_OpticMount_Base {
    override bool CanDetachAttachment(EntityAI parent) {
        array<string> restrictedSlots = {"weaponLightLeft","weaponLightRight","weaponLightTop","weaponBipod","weaponOptics"};
        foreach (string slot : restrictedSlots) {
            if (parent.FindAttachmentBySlotName(slot)) {
                return false;
            }
        }
        return super.CanDetachAttachment(parent);
    }
}