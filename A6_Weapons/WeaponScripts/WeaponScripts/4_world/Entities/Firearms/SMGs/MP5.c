class A6_MP5_Base : RifleBoltLock_Base
{ 
	void A6_MP5_Base() {	
		ShowCap(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new Mp5kRecoil(this);
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

		if (A6_MP5_Buttstock_Base.Cast(item))
		{
			HideCap(this);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (A6_MP5_Buttstock_Base.Cast(item))
		{
			ShowCap(this);
		}
	}
	override bool CanDisplayAttachmentSlot(int slot_id) {    
        if ( slot_id == InventorySlots.GetSlotIdFromString("weaponOptics") ) {
            return ( FindAttachmentBySlotName( "weaponMP5OpticMount") != NULL);    
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponForegrip" ) ) {
            return ( FindAttachmentBySlotName( "weaponForearmMP5") != NULL && this.FindAttachmentBySlotName("weaponForearmMP5").ConfigGetBool("CanAcceptGrip") == true);       
        }
        if ( slot_id == InventorySlots.GetSlotIdFromString( "weaponLightRight" ) ) {
            return ( FindAttachmentBySlotName( "weaponForearmMP5") != NULL && this.FindAttachmentBySlotName("weaponForearmMP5").ConfigGetBool("CanAcceptRightFlashlight") == true);       
        }
        return super.CanDisplayAttachmentSlot(slot_id);
    }
};
class A6_MP5: A6_MP5_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_MP5_Buttstock" );
		inventory.CreateInInventory( "A6_Optic_Mount_MP5" );
		inventory.CreateInInventory( "A6_MP5_Forearm" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_MP5_30Rnd");
	}
};