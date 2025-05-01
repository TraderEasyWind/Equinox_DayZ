#ifdef A6_OpticScripts
modded class A6_ItemOptics extends ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void A6_ItemOptics() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}

	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class A6_ItemOpticsLongScope extends A6_ItemOptics {
	void A6_ItemOpticsLongScope() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		bool lasertoclose 		= false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("IsLargeMount") && attachment.ConfigGetBool("IsLargeMount"))
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	override void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}	
#endif

modded class ACOGOptic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void ACOGOptic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class ACOGOptic_6x : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void ACOGOptic_6x() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class M68Optic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void M68Optic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class M4_T3NRDSOptic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void M4_T3NRDSOptic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class ReflexOptic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void ReflexOptic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class BUISOptic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void BUISOptic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class M4_CarryHandleOptic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void M4_CarryHandleOptic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}	
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class KobraOptic : ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
        if(!super.CanPutAsAttachment(parent)) {return false;}
        if (parent.FindAttachmentBySlotName("weaponOpticMountAK") == NULL && parent.FindAttachmentBySlotName("weaponOpticMount") == NULL) {
            return true;
        }
        return false;
    }
}
modded class KashtanOptic : ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
        if(!super.CanPutAsAttachment(parent)) {return false;}
        if (parent.FindAttachmentBySlotName("weaponOpticMountAK") == NULL && parent.FindAttachmentBySlotName("weaponOpticMount") == NULL) {
            return true;
        }
        return false;
    }
}
modded class PSO11Optic : ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
        if(!super.CanPutAsAttachment(parent)) {return false;}
        if (parent.FindAttachmentBySlotName("weaponOpticMountAK") == NULL && parent.FindAttachmentBySlotName("weaponOpticMount") == NULL) {
            return true;
        }
        return false;
    }
}
modded class PSO1Optic : ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
        if(!super.CanPutAsAttachment(parent)) {return false;}
        if (parent.FindAttachmentBySlotName("weaponOpticMountAK") == NULL && parent.FindAttachmentBySlotName("weaponOpticMount") == NULL) {
            return true;
        }
        return false;
    }
}
modded class KazuarOptic : ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
        if(!super.CanPutAsAttachment(parent)) {return false;}
        if (parent.FindAttachmentBySlotName("weaponOpticMountAK") == NULL && parent.FindAttachmentBySlotName("weaponOpticMount") == NULL) {
            return true;
        }
        return false;
    }
}
modded class StarlightOptic : ItemOptics {
	ref array<int>		m_AttachmentSlotsCheck;
	void StarlightOptic() {
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
        if ( GetGame().IsServer() ) {return true;}
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ ) {
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 ) {
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots) {
		if (!AttSlots) {
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountM16"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponFALOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponOpticMountAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("MossbergOpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponMP5OpticMount"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponSKSOpticMount"));
		}
	}
}
modded class HuntingOptic : ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {return false;}	
		if (parent.ConfigIsExisting("canReceiveHuntingOptic") && parent.ConfigGetBool("canReceiveHuntingOptic")) {
			return true;
		}
		return false;
	}	
}