class A6_MK18_Mjolnir_Base : RifleBoltLock_Base {
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new SvdRecoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
	}
	void A6_MK18_Mjolnir_Base() {	
		ShowPistolGrip(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
        if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
        if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_HensoldtFF_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_Bipod_RIS_Black" );
		inventory.CreateAttachment( "A6_AI_338_Suppressor" );
		inventory.CreateAttachment( "A6_M4A1_PistolGrip_Ergo" );
		inventory.CreateAttachment( "A6_PRS_Buttstock" );
		SpawnAttachedMagazine("A6_Mag_MK18_Mjolnir_10Rnd");
    } 
}
class A6_MK18_Mjolnir_Tan: A6_MK18_Mjolnir_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_HensoldtFF_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_Bipod_RIS_Black" );
		inventory.CreateAttachment( "A6_AI_338_Suppressor" );
		inventory.CreateAttachment( "A6_M4A1_PistolGrip_Ergo" );
		inventory.CreateAttachment( "A6_PRS_Buttstock_Tan" );
		SpawnAttachedMagazine("A6_Mag_MK18_Mjolnir_10Rnd");
    } 
}
class A6_MK18_Mjolnir_Black: A6_MK18_Mjolnir_Base {}
class A6_MK18_Mjolnir_Green: A6_MK18_Mjolnir_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_HensoldtFF_Optic" );	
		#endif
		inventory.CreateAttachment( "A6_Bipod_RIS_Black" );
		inventory.CreateAttachment( "A6_AI_338_Suppressor" );
		inventory.CreateAttachment( "A6_M4A1_PistolGrip_Ergo" );
		inventory.CreateAttachment( "A6_PRS_Buttstock_Green" );
		SpawnAttachedMagazine("A6_Mag_MK18_Mjolnir_10Rnd");
    } 
}
class A6_MK18_Mjolnir_F6: A6_MK18_Mjolnir_Base {}