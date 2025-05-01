class A6_M60E4_Base : RifleBoltFree_Base {
    void A6_M60E4_Base() {	
		ShowIronSightsA6(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new AkmRecoil(this);
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
		if (ItemOptics.Cast(item)) { 
			HideIronSightsA6(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			ShowIronSightsA6(this);
		}
	}	
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        SpawnAttachedMagazine("A6_Mag_M60E4_100Rnd");
    }
};
class A6_M60E4 : A6_M60E4_Base {};