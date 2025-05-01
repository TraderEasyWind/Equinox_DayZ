class A6_AugPara_Base : RifleBoltFree_Base {	
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
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
	}
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_TroyMini_Grip" );	
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_SigSauerBravo4" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_AugPara_32Rnd");
	}
};
class A6_AugPara : A6_AugPara_Base {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_TroyMini_Grip" );	
		inventory.CreateInInventory( "A6_Gemtech_Tundra_Suppressor" );	
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_SigSauerBravo4" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_AugPara_32Rnd");
	}
};
class A6_AugPara_Black : A6_AugPara_Base  {
	override void OnDebugSpawn() {
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_TroyMini_Grip" );	
		inventory.CreateInInventory( "A6_Gemtech_Tundra_Suppressor" );	
		#ifdef A6_OpticScripts
		inventory.CreateInInventory( "A6_SigSauerBravo4" );
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_AugPara_32Rnd");
	}
};