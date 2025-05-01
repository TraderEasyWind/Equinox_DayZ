class A6_DVL10_Base : BoltActionRifle_ExternalMagazine_Base {
	void A6_DVL10_Base() {	
		ShowPistolGrip(this);
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
		if ( A6_M4A1_PistolGrip_Base.Cast(item) )
        { 
            HidePistolGrip(this);
        }
    }    
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if ( A6_M4A1_PistolGrip_Base.Cast(item) )
        { 
            ShowPistolGrip(this);
        }
    }  
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_VuduOptic" );	
		#endif
		inventory.CreateInInventory( "A6_M4A1_PistolGrip_Skeleton_Black" );
        SpawnAttachedMagazine("A6_Mag_DVL10_5Rnd");
    }  
}
class A6_DVL10: A6_DVL10_Base {}