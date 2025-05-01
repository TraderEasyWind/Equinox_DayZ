class A6_FNEvolys_Base : RifleBoltFree_Base {
    void A6_FNEvolys_Base() {	
		ShowIronSightsA6(this);
		ShowMuzzle(this);
		ShowIrons4Laser(this);
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
		if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            HideMuzzle(this);
        }
		if (ItemOptics.Cast(item)) { 
			HideIronSightsA6(this);
		}
		switch (slot_name) {
			case "weaponLightTop":
				HideIrons4Laser(this);
			break;	
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            ShowMuzzle(this);
        }
		if (ItemOptics.Cast(item)) { 
			ShowIronSightsA6(this);
		}
		switch (slot_name) {
			case "weaponLightTop":
				ShowIrons4Laser(this);
			break;	
		}
	}	
};
class A6_FNEvolys : A6_FNEvolys_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_MRS_Optic" );  
        inventory.CreateInInventory( "Battery9V" );
        #endif
        SpawnAttachedMagazine("A6_Mag_FNEvolys_100Rnd");
    }
};