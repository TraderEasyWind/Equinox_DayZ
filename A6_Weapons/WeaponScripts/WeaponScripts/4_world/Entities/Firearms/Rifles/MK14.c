class A6_MK14_Base : RifleBoltLock_Base {
	void A6_MK14_Base() {	
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M14Recoil(this);
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
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            ShowMuzzle(this);
        } 
	}
};
class A6_MK14: A6_MK14_Base {
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Bipod_RIS_Black" );
        #ifdef A6_OpticScripts      
        inventory.CreateInInventory( "A6_EoTechOptic" );	
		inventory.CreateInInventory( "Battery9V" );   
        #endif
        SpawnAttachedMagazine("A6_Mag_M14_20Rnd");
	}
};