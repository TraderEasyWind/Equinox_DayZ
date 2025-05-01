class A6_Bipod_Base extends ItemBase {
	protected bool m_IsOpened;
	ref array<int>		m_AttachmentSlotsCheck;
	void A6_Bipod_Base() {
		RegisterNetSyncVariableBool("m_IsOpened");
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
		UpdateVisualState();
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			//modded
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardHKG28"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardHK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFAL"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponForearmMP5k"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponForearmMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardASVAL"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergForearm"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));

		}
	}
	bool BipodRaycastCheck() {
		vector contact_pos; 
		vector contact_dir;
		int contact_component;
        return DayZPhysics.RaycastRV(ModelToWorld(GetMemoryPointPos("bipod_center")), ModelToWorld(GetMemoryPointPos("bipod_center_2")), contact_pos, contact_dir, contact_component, NULL , NULL, GetHierarchyRootPlayer(), false, false, ObjIntersectGeom);     
	}
	override void Open() {
		m_IsOpened = true;
		SetSynchDirty();
		UpdateVisualState();
	}
	override void Close() {
		m_IsOpened = false;
		SetSynchDirty();
		UpdateVisualState();
	}
	override bool IsOpen() {
		return m_IsOpened;
	}
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		UpdateVisualState();
	}
	override void OnStoreSave( ParamsWriteContext ctx ) {   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );	
	}
	override bool OnStoreLoad( ParamsReadContext ctx, int version ) {
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		if (!ctx.Read( m_IsOpened ) )
			return false;
		if ( m_IsOpened )
			Open();
		else
			Close();
		return true;
	}
	void UpdateVisualState() {
		if ( IsOpen() ) {
			SetAnimationPhase("bipod",1);
		} else {
			SetAnimationPhase("bipod",0);
		}
	}
	override void OnWasDetached( EntityAI parent, int slot_id ) {
		super.OnWasDetached( parent, slot_id );
		if ( Weapon_Base.Cast(parent) && IsOpen())  {
			Close();
		}
	}
}
class A6_Bipod_RIS_Black : A6_Bipod_Base {
	override bool CanPutAsAttachment(EntityAI parent) {
		if (!super.CanPutAsAttachment(parent)) { return false; }
        if ( GetGame().IsServer() ) {return true;}
		return CanParentAcceptBipod(parent) || CheckRailAttachments(parent);
	}
	bool CanParentAcceptBipod(EntityAI parent) {
		return parent.ConfigIsExisting("CanAcceptBipod") && parent.ConfigGetBool("CanAcceptBipod") && parent.ConfigIsExisting("hasRailFunctionality") && parent.ConfigGetBool("hasRailFunctionality");
	}
	bool IsValidRailAttachment(ItemBase attachment) {
		return attachment && attachment.ConfigIsExisting("CanAcceptBipod") && attachment.ConfigGetBool("CanAcceptBipod") && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality");
	}
	bool IsParentMlock(EntityAI parent) {
		return parent.ConfigIsExisting("isMlock") && parent.ConfigGetBool("isMlock");
	}
	bool IsAnyMlockAttachment(ItemBase attachment) {
		return attachment && (attachment.ConfigIsExisting("isMlock") && attachment.ConfigGetBool("isMlock") || attachment.ConfigIsExisting("isMlockBipod") && attachment.ConfigGetBool("isMlockBipod"));
	}
	bool CheckRailAttachments(EntityAI parent) {
		for (int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++) {
			int slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if (m_AttachmentSlotsCheck.Find(slot_id) != -1) {
				ItemBase attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if (IsValidRailAttachment(attachment)) {
					return true;
				}	
			}
		}
		return false;
	}
	bool CheckForMlockAttachments(EntityAI parent) {
		for (int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++) {
			int slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if (m_AttachmentSlotsCheck.Find(slot_id) != -1) {
				ItemBase attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if (IsAnyMlockAttachment(attachment)) {
					return true;
				}
			}
		}
		return false;
	}
	void ShowMlockAdapter() {
		SetObjectTexture(0,"A6_Weapons\\Rifles\\RSASS\\data\\camo_pic_rail_co.paa");
		SetObjectMaterial(0,"A6_Weapons\\Rifles\\RSASS\\data\\camo_pic_rail.rvmat");
	}
	void HideMlockAdapter() {
		SetObjectTexture(0,"");
		SetObjectMaterial(0,"");
	}
	override void OnWasAttached(EntityAI parent, int slot_id) {
		super.OnWasAttached(parent, slot_id);
		if ( IsParentMlock(parent) || CheckForMlockAttachments(parent)) {
			ShowMlockAdapter();
		} else {
			HideMlockAdapter();
		}	
	}	
	override void OnWasDetached( EntityAI parent, int slot_id ) {
		super.OnWasDetached( parent, slot_id );
		HideMlockAdapter();
	}
}
class A6_Bipod_RIS_Tan : A6_Bipod_RIS_Black{}
class A6_Bipod_Rotator : A6_Bipod_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.ConfigIsExisting("ROT") && parent.ConfigGetBool("ROT");
	}
}
class A6_Bipod_Integrated_Base : A6_Bipod_Base {
	override bool CanDetachAttachment (EntityAI parent) {
		return false;
	}
}
class A6_Bipod_Snipex : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_Alligator_Snipex_Base");
	}
}
class A6_Bipod_M200 : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_M200_Base");
	}
}
class A6_Bipod_M200_Tan : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_M200_Base");
	}
}
class A6_Bipod_VSSK : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_VSSK_Base");
	}
}
class A6_Bipod_SV98 : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_SV98_Base");
	}
}
class A6_Bipod_M249 : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_M249_Base");
	}
}	
class A6_Bipod_AS50 : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_AS50_Base");
	}
}
class A6_Bipod_G36 : A6_Bipod_Integrated_Base {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		return parent.IsKindOf("A6_G36_Base");
	}
}