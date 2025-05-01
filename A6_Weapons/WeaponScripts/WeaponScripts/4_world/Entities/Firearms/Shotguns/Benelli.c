class A6_Benelli_Base: A6_SemiAutoShotgun {
	override RecoilBase SpawnRecoilObject() {
		return new Mp133Recoil(this);
	}
	#ifdef A6_OpticScripts
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	
        if ( A6_ItemOpticsLongScope.Cast(attachment)) {
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
	}
}
class A6_Benelli : A6_Benelli_Base {}