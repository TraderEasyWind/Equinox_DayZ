class A6_AA12_Base : RifleBoltFree_Base {
	void A6_AA12_Base() {	
		UnfoldSightsA6(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			FoldSightsA6(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) { 
			UnfoldSightsA6(this);
		}
	}
	#ifdef A6_OpticScripts
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	
        if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
        	return false;
        }    
        return super.CanReceiveAttachment(attachment, slotId);
	}
	#endif
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_AA12_24Rnd");
	}
}
class A6_AA12 : A6_AA12_Base {}