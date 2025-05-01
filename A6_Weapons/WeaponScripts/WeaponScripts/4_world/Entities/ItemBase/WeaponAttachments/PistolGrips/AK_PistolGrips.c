class A6_AK_PistolGrip_Base : A6_PistolGrip_Base {
    override bool CanPutAsAttachment(EntityAI parent) {
        if (!super.CanPutAsAttachment(parent)) {
            return false;
        }
        if ( GetGame().IsServer() ) {
            return true;
        }
        if ( parent.IsKindOf("A6_ASVAL_Base") && parent.FindAttachmentBySlotName("weaponTubeStockAdapterASVAL") == NULL ) {
            return false;
        }
        return true;
    }
}

class A6_AK_PistolGripWood : A6_AK_PistolGrip_Base {}
class A6_AK_Bakelite_PistolGrip : A6_AK_PistolGrip_Base {}
class A6_AK_PP19_PistolGrip : A6_AK_PistolGrip_Base {}
class A6_AK_MOE_PistolGrip : A6_AK_PistolGrip_Base {}
class A6_AK_12_PistolGrip : A6_AK_PistolGrip_Base {}
class A6_AK_Zenitco_RK3_PistolGrip : A6_AK_PistolGrip_Base {}