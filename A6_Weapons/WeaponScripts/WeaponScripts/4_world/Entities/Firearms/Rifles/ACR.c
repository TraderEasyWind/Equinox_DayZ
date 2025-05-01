class A6_ACR_Base : RifleBoltLock_Base {
	void A6_ACR_Base() {	
		UnfoldSightsA6(this);
		ShowPistolGrip(this);
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new AkmRecoil(this);
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
		if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
			HideMuzzle(this);
		}
		if (ItemOptics.Cast(item)) { 
			FoldSightsA6(this);
		}
		if ( A6_M4A1_PistolGrip_Base.Cast(item)) {
			HidePistolGrip(this);
		}	
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
			ShowMuzzle(this);
		}
		if (ItemOptics.Cast(item)) { 
			UnfoldSightsA6(this);
		}
		if ( A6_M4A1_PistolGrip_Base.Cast(item)) {
			ShowPistolGrip(this);
		}	
	}
};
class A6_ACR : A6_ACR_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_68_SPC_30Rnd");
	}
};