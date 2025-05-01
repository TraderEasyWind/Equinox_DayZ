modded class ModItemRegisterCallbacks {
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior) {
    	super.RegisterOneHanded(pType, pBehavior);
        //Bayonets
        pType.AddItemInHandsProfileIK("A6_AK_Bayonet", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/bayonet_ak.anm");
        pType.AddItemInHandsProfileIK("A6_M4_Bayonet", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/combatknife.anm");
        pType.AddItemInHandsProfileIK("A6_SKS_Bayonet", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/bayonet_sks.anm");
        //Pistol Flashlights
        pType.AddItemInHandsProfileIK("A6_Foxtrot_PistolLight", "dz/anims/workspaces/player/player_main/props/player_main_1h_flashlight.asi", pBehavior, "dz/anims/anm/player/ik/attachments/light/universallight.anm");
        //Universal Flashlights 
        pType.AddItemInHandsProfileIK("A6_Switchable_Base", "dz/anims/workspaces/player/player_main/props/player_main_1h_flashlight.asi", pBehavior, "dz/anims/anm/player/ik/attachments/light/universallight.anm");
        //Bipods
        pType.AddItemInHandsProfileIK("A6_Bipod_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/bipod_atlas.anm");
        //Handguards
        pType.AddItemInHandsProfileIK("A6_Handguard_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/handguard_m4_ris.anm");
        //Tubestock Adapters
        pType.AddItemInHandsProfileIK("A6_TubeStock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_ak_wood.anm");
        //Buttstocks
        pType.AddItemInHandsProfileIK("A6_G36_Buttstock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        pType.AddItemInHandsProfileIK("A6_MP5_Buttstock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_mp5_stock.anm");
        pType.AddItemInHandsProfileIK("A6_Mossberg_Buttstock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_ak_wood.anm");
        pType.AddItemInHandsProfileIK("A6_Spas12_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        pType.AddItemInHandsProfileIK("A6_M4_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        pType.AddItemInHandsProfileIK("A6_AK_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_ak_wood.anm");
        pType.AddItemInHandsProfileIK("A6_FAL_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_fal_oe.anm");
        pType.AddItemInHandsProfileIK("A6_Vector_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        pType.AddItemInHandsProfileIK("A6_Scorpion_Evo_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        pType.AddItemInHandsProfileIK("A6_UMP45_Buttstock", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        pType.AddItemInHandsProfileIK("A6_SCAR_Buttstock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/support/buttstock_m4_oe.anm");
        //Foregrips 
        pType.AddItemInHandsProfileIK("A6_ForeGrip_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");

        //Muzzles & Suppressors
        pType.AddItemInHandsProfileIK("A6_Suppressor_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
        pType.AddItemInHandsProfileIK("A6_SKS_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_Shotgun_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_408_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_338_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_FAL_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_308_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_M4A1_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        pType.AddItemInHandsProfileIK("A6_AK_Muzzle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mosin.anm");
        //Optic Mounts
        pType.AddItemInHandsProfileIK("A6_Optic_Mount_Base", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_pso1.anm");
        //LMGs Magazines
        pType.AddItemInHandsProfileIK("A6_Mag_FNEvolys_100Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M60E4_100Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_RPK_75Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_PKM_100Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M249_200Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        //Pistol Magazines
        pType.AddItemInHandsProfileIK("A6_Mag_RugerMarkIV_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mk2.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Glock19_15Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M1911_Compact_9Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_1911.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M1911_7Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_1911.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_PX4_14Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M9_15Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_FiveSeven_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MPShield_13Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP9Pro_17Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_P320_17Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_P320_Tan_17Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_DesertEagle_9Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        //Rifles Magazines
        pType.AddItemInHandsProfileIK("A6_Mag_XM8_100Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_HKG28_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_HK_PMG2_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M14_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M14_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_556_PMAG_60Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz527.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_300BLK_PMAG_60Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz527.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Stanag_60Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz527.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_308_PMAG_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_OPSKS_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_VSS_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_vss_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_VAL_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_vss_10rnd.anm"); //todo placeholder
        pType.AddItemInHandsProfileIK("A6_Mag_Vikhr_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_vss_10rnd.anm"); //todo placeholder
        pType.AddItemInHandsProfileIK("A6_Mag_SR3_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_vss_10rnd.anm"); //todo placeholder
        pType.AddItemInHandsProfileIK("A6_Mag_SR3_Red_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_vss_10rnd.anm"); //todo placeholder
        pType.AddItemInHandsProfileIK("A6_Mag_Aug_Black_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Aug_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_308_Stanag_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_ASH12_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_ASH12_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_300BLK_PMAG_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_300BLK_PMAG_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Stanag_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Stanag_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_556_PMAG_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_556_PMAG_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MCX_Spear_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_SCARH_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_SCARH_Tan_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Beowulf_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_68_SPC_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_FAL_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_FAL_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_FAL_50Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AK101_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AK74_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AK74_Orange_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AK74_45Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AK74_Orange_45Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AKM_Poly_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AKM_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AKM_PMAG_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        //Shotgun Magazines
        pType.AddItemInHandsProfileIK("A6_Mag_AA12_24Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        //SMGs Magazines
        pType.AddItemInHandsProfileIK("A6_Mag_PP19Bizon_64Rnd",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_ruger1022_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Gripped_PP19Bizon_64Rnd",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_ruger1022_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP5_15Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_15rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP5_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP5_Waffle_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP5_100Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_PP19_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AugPara_32Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_ump45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_UMP45_25Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_ump45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Vector_33Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Vector_50Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP7A2_40Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MP7A2_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Scorpion_Evo_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Scorpion_Evo_40Rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_P90_50Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_9A91_30Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        //Sniper Magazines
        pType.AddItemInHandsProfileIK("A6_Mag_SV98_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_MK18_Mjolnir_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Alligator_Snipex_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_DVL10_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AX_7Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M82_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_GM6Lynx_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AWM_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M200_7Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M200_Tan_7Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_T5000_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_M24_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_AX50_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_VSSK_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_SRSA2_8Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_TheFix_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_R700_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_Delta5_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_SVD_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("A6_Mag_SVD_20Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");		
	}
    override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior ) {
        super.RegisterPistol( pType, pBehavior );  
        pType.AddItemInHandsProfileIK("A6_RugerMarkIV_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_rugermk2.asi", pBehavior, "dz/anims/anm/player/ik/weapons/MK2.anm", "dz/anims/anm/player/reloads/RugerMK2/w_MK2_states.anm");
        pType.AddItemInHandsProfileIK("A6_Glock19_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Glock19.anm", "dz/anims/anm/player/reloads/Glock/w_Glock19_states.anm");
        pType.AddItemInHandsProfileIK("A6_M1911_Compact_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_1911.asi", pBehavior, "dz/anims/anm/player/ik/weapons/1911.anm", "dz/anims/anm/player/reloads/1911/w_1911_states.anm");
        pType.AddItemInHandsProfileIK("A6_M1911_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_1911.asi", pBehavior, "dz/anims/anm/player/ik/weapons/1911.anm", "dz/anims/anm/player/reloads/1911/w_1911_states.anm");
        pType.AddItemInHandsProfileIK("A6_P320_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");                
        pType.AddItemInHandsProfileIK("A6_MPShield_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");
        pType.AddItemInHandsProfileIK("A6_MP9Pro_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");               
        pType.AddItemInHandsProfileIK("A6_DesertEagle_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_deagle.asi", pBehavior, "dz/anims/anm/player/ik/weapons/deagle.anm", "dz/anims/anm/player/reloads/deagle/w_deagle_states.anm");
        pType.AddItemInHandsProfileIK("A6_FiveSeven_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");
        pType.AddItemInHandsProfileIK("A6_M9_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz75.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz75.anm", "dz/anims/anm/player/reloads/cz75/w_cz75_states.anm");
        pType.AddItemInHandsProfileIK("A6_PX4_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz75.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz75.anm", "dz/anims/anm/player/reloads/cz75/w_cz75_states.anm");
        pType.AddItemInHandsProfileIK("A6_500SW_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_magnum.asi", pBehavior, "dz/anims/anm/player/ik/weapons/magnum.anm", "dz/anims/anm/player/reloads/magnum/w_magnum_states.anm");
    }
    override void RegisterFireArms(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior) {
        super.RegisterFireArms( pType, pBehavior );
        //LMGs
        pType.AddItemInHandsProfileIK("A6_FNEvolys_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        pType.AddItemInHandsProfileIK("A6_M249_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m14.asi", pBehavior, "dz/anims/anm/player/ik/weapons/M14_ik.anm","dz/anims/anm/player/reloads/M14/w_M14_states.anm");
        pType.AddItemInHandsProfileIK("A6_M60E4_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        pType.AddItemInHandsProfileIK("A6_PKM_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        pType.AddItemInHandsProfileIK("A6_RPK_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        //Rifles
        pType.AddItemInHandsProfileIK("A6_HKG28_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_OPSKS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm",  "dz/anims/anm/player/reloads/svd/w_svd_states.anm");
        pType.AddItemInHandsProfileIK("A6_MK12_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_M110_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_AR10_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_SCAR20S_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_MK14_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m14.asi", pBehavior, "dz/anims/anm/player/ik/weapons/M14_ik.anm","dz/anims/anm/player/reloads/M14/w_M14_states.anm");
        //Assault Rifles
        pType.AddItemInHandsProfileIK("A6_G36_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_HK417_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_HK416_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_CAR15_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_M16", "dz/anims/workspaces/player/player_main/weapons/player_main_m16a2.asi", pBehavior, "dz/anims/anm/player/ik/weapons/M16A2_ik.anm", "dz/anims/anm/player/reloads/m16a2/w_m16a2_states.anm");
        pType.AddItemInHandsProfileIK("A6_FamasF1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
        pType.AddItemInHandsProfileIK("A6_Aug_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_aug.asi", pBehavior, "dz/anims/anm/player/ik/weapons/aug.anm", "dz/anims/anm/player/reloads/aug/w_aug_states.anm");
        pType.AddItemInHandsProfileIK("A6_AN94_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK101_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK102_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK104_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK105_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK74_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_VPO_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AKM_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK74N", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_AKMN", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
        pType.AddItemInHandsProfileIK("A6_M4A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_ASVAL_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_as_val.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VAL.anm","dz/anims/anm/player/reloads/VAL/w_VAL_states.anm");
        pType.AddItemInHandsProfileIK("A6_VSS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_vss.asi", pBehavior, "dz/anims/anm/player/ik/weapons/vss.anm",  "dz/anims/anm/player/reloads/vss/w_vss_states.anm"); 
        pType.AddItemInHandsProfileIK("A6_Beowulf_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_AK50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        pType.AddItemInHandsProfileIK("A6_ASH12_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
        pType.AddItemInHandsProfileIK("A6_AR15_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_MCX_Spear_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_MK18_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_DDM4_300S_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_ACR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_FAL_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_SA58_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_SCARL_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_SCARH_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_RSASS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        //Shotguns
        pType.AddItemInHandsProfileIK("A6_Mossberg_590_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp133.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm","dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
        pType.AddItemInHandsProfileIK("A6_MP153_Base", "A6_Weapons/Shotguns/Animations/SemiAutoShotgun.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm", "dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
        pType.AddItemInHandsProfileIK("A6_Spas12_Base", "A6_Weapons/Shotguns/Animations/SemiAutoShotgun.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm", "dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
        pType.AddItemInHandsProfileIK("A6_Benelli_Base", "A6_Weapons/Shotguns/Animations/SemiAutoShotgun.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm", "dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
        pType.AddItemInHandsProfileIK("A6_AA12_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_Saiga.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Saiga.anm",  "dz/anims/anm/player/reloads/Saiga/w_Saiga_states.anm");
        pType.AddItemInHandsProfileIK("A6_KSG_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp133.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm", "dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");
        //SMGs
        pType.AddItemInHandsProfileIK("A6_PP19Bizon_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_PP19.asi", pBehavior, "dz/anims/anm/player/ik/weapons/bizon.anm", "dz/anims/anm/player/reloads/Bizon/w_bizon_states.anm");
        pType.AddItemInHandsProfileIK("A6_MP5k_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp5.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp5k.anm", "dz/anims/anm/player/reloads/mp5/w_mp5k_states.anm");
        pType.AddItemInHandsProfileIK("A6_MP5_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
        pType.AddItemInHandsProfileIK("A6_MP5SD_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
        pType.AddItemInHandsProfileIK("A6_UMP45_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
        pType.AddItemInHandsProfileIK("A6_HoneyBadger_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm",  "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
        pType.AddItemInHandsProfileIK("A6_AKS74U_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ak74u.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKS74U.anm", "dz/anims/anm/player/reloads/AK74U/w_AKS74U_states.anm");
        pType.AddItemInHandsProfileIK("A6_AKS74UN", "dz/anims/workspaces/player/player_main/weapons/player_main_ak74u.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKS74U.anm", "dz/anims/anm/player/reloads/AK74U/w_AKS74U_states.anm");
        pType.AddItemInHandsProfileIK("A6_PP19_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ak74u.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKS74U.anm", "dz/anims/anm/player/reloads/AK74U/w_AKS74U_states.anm");
        pType.AddItemInHandsProfileIK("A6_AugPara_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_aug.asi", pBehavior, "dz/anims/anm/player/ik/weapons/aug.anm", "dz/anims/anm/player/reloads/aug/w_aug_states.anm");
        pType.AddItemInHandsProfileIK("A6_Vector_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_vss.asi", pBehavior, "dz/anims/anm/player/ik/weapons/vss.anm",  "dz/anims/anm/player/reloads/vss/w_vss_states.anm"); 
        pType.AddItemInHandsProfileIK("A6_9A91_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_vss.asi", pBehavior, "dz/anims/anm/player/ik/weapons/vss.anm",  "dz/anims/anm/player/reloads/vss/w_vss_states.anm"); 
        pType.AddItemInHandsProfileIK("A6_Scorpion_Evo_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/UMP45/w_UMP45_states.anm");
        pType.AddItemInHandsProfileIK("A6_MP7A2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
        pType.AddItemInHandsProfileIK("A6_P90_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
        //Snipers
        pType.AddItemInHandsProfileIK("A6_SV98_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_MK18_Mjolnir_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("A6_M300_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_CZ527_states.anm");
        pType.AddItemInHandsProfileIK("A6_AS50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        pType.AddItemInHandsProfileIK("A6_AR50A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_winchester70.asi", pBehavior, "dz/anims/anm/player/ik/weapons/winchester70.anm", "dz/anims/anm/player/reloads/Winchester70/w_winchester70_states.anm");
        pType.AddItemInHandsProfileIK("A6_Alligator_Snipex_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_Delta5_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_M24A3_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_winchester70.asi", pBehavior, "dz/anims/anm/player/ik/weapons/winchester70.anm", "dz/anims/anm/player/reloads/Winchester70/w_winchester70_states.anm");
        pType.AddItemInHandsProfileIK("A6_M82_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm",  "dz/anims/anm/player/reloads/svd/w_svd_states.anm");
        pType.AddItemInHandsProfileIK("A6_GM6Lynx_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
        pType.AddItemInHandsProfileIK("A6_T5000_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_AWM_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_AX_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_M200_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_VSSK_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
        pType.AddItemInHandsProfileIK("A6_AX50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_TheFix_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_SRSA2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_M24_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm",  "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
        pType.AddItemInHandsProfileIK("A6_R700_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm",  "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
        pType.AddItemInHandsProfileIK("A6_DVL10_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
        pType.AddItemInHandsProfileIK("A6_SVD_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm",  "dz/anims/anm/player/reloads/svd/w_svd_states.anm");
        pType.AddItemInHandsProfileIK("A6_SVD_Tiger_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm",  "dz/anims/anm/player/reloads/svd/w_svd_states.anm");      
    }
    override void CustomBoneRemapping(DayZPlayerType pType) {       
        super.CustomBoneRemapping( pType );
        array<string> ShotgunBoneRemapNew ={ "bolt", "Weapon_Bolt", "pump", "Weapon_Bone_01","feedRamp", "Weapon_Bone_02", "trigger", "Weapon_Trigger","bullet", "Weapon_Bullet", "boltrelease", "Weapon_Bone_03"};
        pType.AddItemBoneRemap("A6_Mossberg_590_Base", ShotgunBoneRemapNew);
        pType.AddItemBoneRemap("A6_MP153_Base", ShotgunBoneRemapNew);
        pType.AddItemBoneRemap("A6_Spas12_Base", ShotgunBoneRemapNew);
        pType.AddItemBoneRemap("A6_Benelli_Base", ShotgunBoneRemapNew);
        pType.AddItemBoneRemap("A6_KSG_Base", ShotgunBoneRemapNew);
    }
}