class A6_AK_Handguard_Base : A6_Handguard_Base {}
class A6_AK_Handguard_Plastic : A6_AK_Handguard_Base {}
class A6_AK_Handguard_AKM : A6_AK_Handguard_Base {}
class A6_AK_Handguard_RPK : A6_AK_Handguard_Base {}
class A6_AK_Handguard_MOE : A6_AK_Handguard_Base {}
class A6_AK_Handguard_Tactical_Polymer_Base : A6_AK_Handguard_Base {}
class A6_AK_Handguard_Tactical_Polymer_Black : A6_AK_Handguard_Tactical_Polymer_Base {}
class A6_AK_Handguard_Tactical_Polymer_Tan : A6_AK_Handguard_Tactical_Polymer_Base {}
class A6_AK_Handguard_Wood_Zentico : A6_AK_Handguard_Base {}
class A6_AK_Handguard_Zentico : A6_AK_Handguard_Base {}
class A6_AK_Handguard_Zentico_Long_Base : A6_AK_Handguard_Base {
    override bool CanPutAsAttachment(EntityAI parent) {
        return !parent.FindAttachmentBySlotName("weaponBayonetAK");
    }
}
class A6_AK_Handguard_Zentico_Long_Black : A6_AK_Handguard_Zentico_Long_Base {}
class A6_AK_Handguard_Zentico_Long_Tan : A6_AK_Handguard_Zentico_Long_Base {}