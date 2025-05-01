modded class ModItemRegisterCallbacks {
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior) {
    	super.RegisterOneHanded(pType, pBehavior);
        //Mount
        pType.AddItemInHandsProfileIK("A6_MRDMount", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_fnp45_mrd.anm");
        //Optics
        pType.AddItemInHandsProfileIK("A6_ItemOptics", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_acog.anm");
        pType.AddItemInHandsProfileIK("A6_ItemOptics_NVReticle", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_acog.anm");
        pType.AddItemInHandsProfileIK("A6_ItemOptics_MultipleReticles", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_acog.anm");
        //Scopes
        pType.AddItemInHandsProfileIK("A6_ItemOpticsLongScope", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
    }
}        