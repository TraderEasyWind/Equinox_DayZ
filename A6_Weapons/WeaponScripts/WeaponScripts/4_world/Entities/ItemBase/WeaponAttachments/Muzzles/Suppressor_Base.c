class A6_Suppressor_Base extends SuppressorBase {
    bool CanAttachToPistol() {
        return false;
    }
    override bool CanPutAsAttachment(EntityAI parent) {
        array<string> restrictedSlots = {
            "weaponBayonetSKS",
            "weaponBayonet",
            "weaponBayonetAK"
        };
        foreach (string slot : restrictedSlots) {
            if (parent.FindAttachmentBySlotName(slot)) {
                return false;
            }
        }
        if (parent.IsKindOf("Pistol_Base") && !CanAttachToPistol()) {
            return false;
        }
        return true;
    }
}

class A6_DeadAirMask22_Suppressor extends A6_Suppressor_Base {
    override bool CanAttachToPistol() {
        return true;
    }
}

class A6_OspreySuppressor extends A6_Suppressor_Base {
    override bool CanAttachToPistol() {
        return true;
    }
}

class A6_Gemtech_Tundra_Suppressor : A6_Suppressor_Base {
    override bool CanAttachToPistol() {
        return true;
    }
}

class A6_9A91_Suppressor extends A6_Suppressor_Base {
    override bool CanDetachAttachment(EntityAI parent) {
        array<string> restrictedSlots = {
            "weaponForegrip",
            "weaponLightRight"
        };
        foreach (string slot : restrictedSlots) {
            if (parent.FindAttachmentBySlotName(slot)) {
                return false;
            }
        }
        return true;
    }
}

class A6_MP7A2Suppressor extends A6_Suppressor_Base {}

class A6_HoneyBadger_Suppressor extends A6_Suppressor_Base {}

class A6_Salvo12_Suppressor extends A6_Suppressor_Base {}

class A6_AK_PSB1_Suppressor extends A6_Suppressor_Base {} 

class A6_Omega_300_Suppressor : A6_Suppressor_Base {}
class A6_Omega_300_Tan : A6_Omega_300_Suppressor {}

class A6_Hybrid_46_Suppressor : A6_Suppressor_Base {}
class A6_Hybrid_46_Suppressor_Gray : A6_Hybrid_46_Suppressor {}
class A6_Hybrid_46_Suppressor_Tan : A6_Hybrid_46_Suppressor {}

class A6_Chimera_300_Suppressor : A6_Suppressor_Base {}

class A6_TBA_Ultra5_Suppressor : A6_Suppressor_Base {}

class A6_Jumbo_Shrimp_Suppressor : A6_Suppressor_Base {}

class A6_SLX68_Suppressor extends A6_Suppressor_Base {}

class A6_AWC_Thor_Suppressor : A6_Suppressor_Base {}

class A6_HXQD_Suppressor extends A6_Suppressor_Base {}

class A6_AI_338_Suppressor extends A6_Suppressor_Base  {}

class A6_ASH12_Suppressor extends A6_Suppressor_Base {}

class A6_Windtalker_Suppressor extends A6_Suppressor_Base {}
class A6_Windtalker_Suppressor_Tan : A6_Windtalker_Suppressor {}

class A6_QDL_Suppressor extends A6_Suppressor_Base {}