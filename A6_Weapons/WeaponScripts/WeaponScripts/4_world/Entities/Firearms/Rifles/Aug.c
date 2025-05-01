class A6_Aug_Base : RifleBoltFree_Base {	
	void A6_Aug_Base() {	
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new AUGRecoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	    
		#ifdef A6_OpticScripts  
		if ( A6_ItemOpticsLongScope.Cast(attachment) ) {
			return false;
		}	
		#endif  
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand) {
		if ( weaponAction == WeaponActions.RELOAD) {
			switch (subCommand) {
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET;
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET;
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET;
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET;
				default:
					return subCommand;
			}
		}
		return subCommand;
	}
};
class A6_AugA1 : A6_Aug_Base {
	override bool CanEnterIronsights() {
		return true;
	}
	override void AssembleGun() {
		super.AssembleGun();
		if ( !FindAttachmentBySlotName("weaponOpticsAug") ) {
			GetInventory().CreateAttachment("A6_AugOptic");
		}
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_M4A1_Muzzle_Base.Cast(item) ) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_M4A1_Muzzle_Base.Cast(item) ) { 
            ShowMuzzle(this);
        }
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_Aug_30Rnd");
	}
};
class A6_AugA1_Black : A6_AugA1 {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		SpawnAttachedMagazine("A6_Mag_Aug_Black_30Rnd");
	}
};
class A6_AugA3 : A6_Aug_Base {
	override bool CanReceiveAttachment(EntityAI attachment, int slotId) {	     
		if ( A6_ANPEQ15_Base.Cast(attachment) || A6_ANPEQ15_Base.Cast(attachment) ) {
			return false;
		}	
        return super.CanReceiveAttachment(attachment, slotId);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if ( A6_M4A1_Muzzle_Base.Cast(item) ) { 
            HideMuzzle(this);
        }
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_M4A1_Muzzle_Base.Cast(item) ) { 
            ShowMuzzle(this);
        }
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SigSauerBravo4" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );	
		inventory.CreateInInventory( "Battery9V" );
		SpawnAttachedMagazine("A6_Mag_Aug_30Rnd");
	}
};
class A6_AugA3_Black : A6_AugA3 {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_SigSauerBravo4" );
		inventory.CreateInInventory( "A6_TroyMini_Grip" );	
		inventory.CreateInInventory( "Battery9V" );
		SpawnAttachedMagazine("A6_Mag_Aug_Black_30Rnd");
	}
};