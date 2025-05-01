class A6_P90_Base : RifleBoltLock_Base {
    override RecoilBase SpawnRecoilObject() {
		return new Cz61Recoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
};
class A6_P90: A6_P90_Base  {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts
        inventory.CreateInInventory( "A6_EoTechOptic" );
        inventory.CreateInInventory( "Battery9V" );
        #endif
        SpawnAttachedMagazine("A6_Mag_P90_50Rnd");
    }
};