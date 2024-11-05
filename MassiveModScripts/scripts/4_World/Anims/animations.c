modded class ModItemRegisterCallbacks
{ 	
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterHeavy( pType, pBehavior );
		pType.AddItemInHandsProfileIK("MassiveMod_WoodenCrateX2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");
		pType.AddItemInHandsProfileIK("MassiveMod_WoodenCrateX2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");
        pType.AddItemInHandsProfileIK("MassiveMod_WoodenCrateX4", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");
		pType.AddItemInHandsProfileIK("MassiveModCrate_Base", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");
	}
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded( pType, pBehavior );
		pType.AddItemInHandsProfileIK("MassiveMod_TacticalRadio_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 					"dz/anims/anm/player/ik/gear/PersonalRadio.anm");
		pType.AddItemInHandsProfileIK("MassiveMod_AmmoBoxBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,							"dz/anims/anm/player/ik/gear/AmmoBox.anm");
        pType.AddItemInHandsProfileIK("MassiveMod_ADVKit_Base",					"dz/anims/workspaces/player/player_main/player_main_1h.asi",						pBehavior,			"dz/anims/anm/player/ik/gear/cleaning_kit_wood.anm");		
	}

	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
	    super.RegisterTwoHanded( pType, pBehavior );
	    pType.AddItemInHandsProfileIK("MassiveMod_SledgeHammer", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sledgehammer.asi", pBehavior, 		"dz/anims/anm/player/ik/two_handed/sledge_hammer.anm");
	}
	
}