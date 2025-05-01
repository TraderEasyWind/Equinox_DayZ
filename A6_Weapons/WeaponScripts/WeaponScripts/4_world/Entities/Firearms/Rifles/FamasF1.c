class A6_FamasF1_Base : RifleBoltFree_Base {
	void A6_FamasF1_Base() {	
		HideRail(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new FamasRecoil(this);
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
		if (ItemOptics.Cast(item)) { 
			ShowRail(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			HideRail(this);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        SpawnAttachedMagazine("A6_Mag_Famas_25Rnd");
    }		
};
class A6_FamasF1 : A6_FamasF1_Base {};