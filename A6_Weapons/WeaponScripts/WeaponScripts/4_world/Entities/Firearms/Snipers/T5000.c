class A6_T5000_Base : BoltActionRifle_ExternalMagazine_Base {		
	void A6_T5000_Base() {
		ShowMuzzle(this);
	}
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new CZ527Recoil(this);
		} else {
			return new HiCalSemiRecoil(this);
		}
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
        if ( A6_338_Muzzle_Base.Cast(item) ) { 
            HideMuzzle(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
        if ( A6_338_Muzzle_Base.Cast(item) ) { 
            ShowMuzzle(this);
        } 
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_HensoldtFF_Optic" );	
		#endif
		SpawnAttachedMagazine("A6_Mag_T5000_5Rnd");
    } 
}
class A6_T5000: A6_T5000_Base{}