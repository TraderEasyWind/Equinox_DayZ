class A6_PKM_Base : RifleBoltFree_Base {
	override RecoilBase SpawnRecoilObject() {
		return new AkmRecoil(this);
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        SpawnAttachedMagazine("A6_Mag_PKM_100Rnd");
    }
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_SchmidtBenderPMII_Optic.Cast(attachment) || A6_NFATACRF1_Optic.Cast(attachment)) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
};
class A6_PKM : A6_PKM_Base {};