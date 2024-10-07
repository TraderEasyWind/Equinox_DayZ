modded class ModItemRegisterCallbacks
{
    override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterHeavy(pType, pBehavior);
			pType.AddItemInHandsProfileIK("nd_datsun_driverdoor", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("nd_datsun_codriverdoor", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("nd_datsun_trunk", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("nd_datsun_hood", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			"dz/anims/anm/player/ik/vehicles/hatchback/hatchback_hood.anm");
    };
};