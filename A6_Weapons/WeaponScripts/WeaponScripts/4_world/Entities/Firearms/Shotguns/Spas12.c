class A6_Spas12_Base: A6_SemiAutoShotgun {
	override RecoilBase SpawnRecoilObject() {
		return new Mp133Recoil(this);
	}
	#ifdef A6_OpticScripts
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	
        if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
        	return false;
        }    
        return super.CanReceiveAttachment(attachment, slotId);
	}
	#endif
} 
class A6_Spas12 : A6_Spas12_Base  {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Spas12_Buttstock" );
		inventory.CreateInInventory( "A6_Salvo12_Suppressor" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
	} 
}
class A6_Spas12_Winter : A6_Spas12_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Spas12_Buttstock_Winter" );
		inventory.CreateInInventory( "A6_Salvo12_Suppressor" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
	} 
}