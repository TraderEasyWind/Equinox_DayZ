class A6_HoneyBadger_Base : RifleBoltLock_Base {
    void A6_HoneyBadger_Base() {	
		ShowPistolGrip(this);
		ShowIrons4Laser(this);
	}
	override RecoilBase SpawnRecoilObject(){
		return new M4a1Recoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
        if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
		switch (slot_name) {
			case "weaponLightTop":
				HideIrons4Laser(this);
			break;	
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
		switch (slot_name) {
			case "weaponLightTop":
				ShowIrons4Laser(this);
			break;	
		}	
	}	
};
class A6_HoneyBadger : A6_HoneyBadger_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_HoneyBadger_Suppressor" );
        #ifdef A6_OpticScripts
        inventory.CreateInInventory( "A6_MRS_Optic" );
        inventory.CreateInInventory( "Battery9V" );
        #endif
        SpawnAttachedMagazine("A6_Mag_300BLK_PMAG_20Rnd");
    }
};