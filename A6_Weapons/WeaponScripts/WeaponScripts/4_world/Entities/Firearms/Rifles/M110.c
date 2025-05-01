class A6_M110_Base : RifleBoltLock_Base {
    void A6_M110_Base() {	
		ShowPistolGrip(this);
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		return new M4a1Recoil(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            HideMuzzle(this);
        }
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 1);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
        if (A6_M4A1_Muzzle_Base.Cast(item) || A6_308_Muzzle_Base.Cast(item)) { 
            ShowMuzzle(this);
        }
		if (ItemOptics.Cast(item)) {
			SetAnimationPhase("rotate", 0);
		}
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        inventory.CreateInInventory( "A6_M110_Buttstock" );
        SpawnAttachedMagazine("A6_Mag_308_Stanag_20Rnd");
	}
};
class A6_M110 : A6_M110_Base {};