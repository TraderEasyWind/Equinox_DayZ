class A6_Mossberg_Forearm_Base : A6_Handguard_Base {
    override bool CanDetachAttachment(EntityAI parent) {
        ref array<string> blockedSlots = {"weaponForegrip","weaponLightLeft","weaponLightRight"};
        foreach (string slot : blockedSlots) {
            if (parent.FindAttachmentBySlotName(slot)) {
                return false;
            }
        }
        return true;
    }
}
class A6_Mossberg_Forearm_Plastic : A6_Mossberg_Forearm_Base{}
class A6_Mossberg_Forearm_Plastic_2: A6_Mossberg_Forearm_Base{}
class A6_Mossberg_Shroud_Base : A6_Handguard_Base {}
class A6_Mossberg_Shroud : A6_Mossberg_Shroud_Base{}
class A6_MP153_Forearm_Base : A6_Handguard_Base {}
class A6_MP153_Forearm_Plastic : A6_MP153_Forearm_Base{}
