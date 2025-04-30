modded class ModItemRegisterCallbacks {
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior) {
        super.RegisterHeavy(pType, pBehavior);
        pType.AddItemInHandsProfileIK("A6_MilitaryStorageCrate", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");
        pType.AddItemInHandsProfileIK("A6_Kit", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");
    }
}