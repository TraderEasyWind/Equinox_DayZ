class A6_TubeStock_Base extends ItemBase {
    override bool CanPutAsAttachment( EntityAI parent ) {
        if ( !super.CanPutAsAttachment(parent) ) {return false;}
        if (parent.FindAttachmentBySlotName("weaponButtstockAK") || parent.FindAttachmentBySlotName("weaponVectorButtstock") || parent.FindAttachmentBySlotName("weaponScarButtstock")) {
            return false;
        }   
        return super.CanPutAsAttachment(parent);
    }     
    override bool CanDetachAttachment (EntityAI parent) {
        if (parent.FindAttachmentBySlotName("weaponButtstockM4")) {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}

class A6_SVD_TubeStock_Adapter : A6_TubeStock_Base {}
class A6_AK_TubeStock_Adapter : A6_TubeStock_Base {}
class A6_Vector_TubeStock_Adapter : A6_TubeStock_Base {}
class A6_SCAR_TubeStock_Adapter : A6_TubeStock_Base {}
class A6_ASVAL_TubeStock_Adapter : A6_TubeStock_Base {
    override bool CanDetachAttachment (EntityAI parent) {
        if ( parent.FindAttachmentBySlotName("weaponButtstockM4") || parent.FindAttachmentBySlotName("weaponAKPistolGrip")) {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}