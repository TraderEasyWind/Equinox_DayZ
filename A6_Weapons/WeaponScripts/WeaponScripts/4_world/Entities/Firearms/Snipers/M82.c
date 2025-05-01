class A6_M82_Base : RifleBoltLock_Base {
	override RecoilBase SpawnRecoilObject() {
		if(GetA6GunplayModConfig().DisableHiCalRecoil == 1){
			return new SvdRecoil(this);
		} else {
			return new BarrettSemiRecoil(this);
		}
	}
	void A6_M82_Base() {	
		ShowMuzzle(this);
		ShowPistolGrip(this);
	}
	override void EEItemAttached(EntityAI item, string slot_name) {	
		super.EEItemAttached(item,slot_name);
		if (A6_QDL_Suppressor.Cast(item)) { 
			HideMuzzle(this);
		}
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            HidePistolGrip(this);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (A6_QDL_Suppressor.Cast(item)) { 
			ShowMuzzle(this);
		}
		if ( A6_M4A1_PistolGrip_Base.Cast(item) ) { 
            ShowPistolGrip(this);
        }
	}
	override void OnDebugSpawn() {
        GameInventory inventory = GetInventory();
        #ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_SchmidtBenderPMII_Optic" );	
		#endif
		SpawnAttachedMagazine("A6_Mag_M82_10Rnd");
    } 
}
class A6_M82: A6_M82_Base {}
class A6_M82_Black: A6_M82 {}
class A6_M82_Tan: A6_M82 {}
class A6_M82_Snow: A6_M82 {}