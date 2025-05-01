class A6_ASH12_Base : RifleBoltFree_Base {
	void A6_ASH12_Base() {	
		ShowIronSightsA6(this);
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new SvdRecoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
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
		if (A6_ASH12_Suppressor.Cast(item)) { 
			HideMuzzle(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			ShowIronSightsA6(this);
		}
		if (A6_ASH12_Suppressor.Cast(item)) { 
			ShowMuzzle(this);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_ASH12_Suppressor" );
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_ElcanSpecterOptic" );	
		#endif
        SpawnAttachedMagazine("A6_Mag_ASH12_20Rnd");
    }	
};

class A6_ASH12: A6_ASH12_Base {};