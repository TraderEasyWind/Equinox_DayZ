class A6_MK12_Base : RifleBoltLock_Base {
    void A6_MK12_Base() {	
		ShowPistolGrip(this);
		ShowRailGuards(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (A6_ForeGrip_Base.Cast(item)) { 
            HideRailGuards(this);
        }
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
        if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (A6_ForeGrip_Base.Cast(item)) { 
            ShowRailGuards(this);
        }
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
        if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
	}	
};
class A6_MK12 : A6_MK12_Base  {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Hybrid_46_Suppressor" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_LeupoldOptic" );    
        #endif
        SpawnAttachedMagazine("A6_Mag_Stanag_20Rnd");
	}	
};