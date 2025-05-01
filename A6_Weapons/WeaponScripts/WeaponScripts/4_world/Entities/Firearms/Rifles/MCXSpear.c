class A6_MCX_Spear_Base : RifleBoltLock_Base {	
	void A6_MCX_Spear_Base() {	
		ShowIrons4Laser(this);
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new FALRecoil(this);
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
		switch (slot_name) {
			case "weaponLightTop":
				HideIrons4Laser(this);
			break;	
		}	
		if (ItemOptics.Cast(item)) { 
			SetAnimationPhase("rotate", 1);
		}
		if (A6_Suppressor_Base.Cast(item)) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		switch (slot_name) {
			case "weaponLightTop":
				ShowIrons4Laser(this);
			break;	
		}
		if (A6_Suppressor_Base.Cast(item)) { 
            ShowMuzzle(this);
        }	
		if (ItemOptics.Cast(item)) { 
			SetAnimationPhase("rotate", 0);
		}
	}	
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_MOESLK_Buttstock_Tan" );
		inventory.CreateInInventory( "A6_SLX68_Suppressor" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_SigSauerTango6T_Tan_Optic" );    
        #endif
        SpawnAttachedMagazine("A6_Mag_MCX_Spear_20Rnd");
	}
};
class A6_MCX_Spear : A6_MCX_Spear_Base {};
