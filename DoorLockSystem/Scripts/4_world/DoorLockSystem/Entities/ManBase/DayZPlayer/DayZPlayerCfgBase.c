modded class ModItemRegisterCallbacks {
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior) {
    	super.RegisterOneHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("DLS_KeyChain", "dz/anims/workspaces/player/player_main/props/player_main_1h_lighter.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/sparkplug.anm");
        pType.AddItemInHandsProfileIK("DLS_KeyTool", "dz/anims/workspaces/player/player_main/props/player_main_1h_lighter.asi", pBehavior, "dz/anims/anm/player/ik/gear/petrol_lighter.anm");
        pType.AddItemInHandsProfileIK("DLS_KeyCard_Holder", "dz/anims/workspaces/player/player_main/props/player_main_1h_tablets.asi", pBehavior, "dz/anims/anm/player/ik/gear/tetracycline_tablets.anm");
        pType.AddItemInHandsProfileIK("DLS_Key_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/PunchedCard.anm");
        pType.AddItemInHandsProfileIK("DLS_KeyCard_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/PunchedCard.anm");
        pType.AddItemInHandsProfileIK("DLS_KeyCard_InfiniteUse", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/PunchedCard.anm");
	}
}