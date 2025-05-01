class A6_Scorpion_Evo_Base : RifleBoltLock_Base {
	void A6_Scorpion_Evo_Base() {	
		ShowPistolGrip(this);
		ShowIrons4Laser(this);
	}
    override RecoilBase SpawnRecoilObject() {
		return new Ump45Recoil(this);
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
		if (A6_Scorpion_Evo_PistolGrip_Base.Cast(item)) { 
			HidePistolGrip(this);
		}
		switch (slot_name) {
			case "weaponLightTop":
				HideIrons4Laser(this);
			break;	
		}	
	}
	override void EEItemDetached(EntityAI item, string slot_name) {	
		super.EEItemDetached(item,slot_name);
		if (A6_Scorpion_Evo_PistolGrip_Base.Cast(item)) { 
			ShowPistolGrip(this);
		}
		switch (slot_name) {
			case "weaponLightTop":
				ShowIrons4Laser(this);
			break;	
		}	
	}	
};
class A6_Scorpion_Evo : A6_Scorpion_Evo_Base {
	override void OnDebugSpawn() {
		super.OnDebugSpawn();
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Scorpion_Evo_Buttstock" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Scorpion_Evo_40Rnd");
	}
};
class A6_Scorpion_Evo_Green : A6_Scorpion_Evo_Base {
	override void OnDebugSpawn() {
		super.OnDebugSpawn();
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Scorpion_Evo_Buttstock_Green" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Scorpion_Evo_40Rnd");
	}
};
class A6_Scorpion_Evo_Tan : A6_Scorpion_Evo_Base {
	override void OnDebugSpawn() {
		super.OnDebugSpawn();
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Scorpion_Evo_Buttstock_Tan" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Scorpion_Evo_40Rnd");
	}
};
class A6_Scorpion_Evo_Grey : A6_Scorpion_Evo_Base {
	override void OnDebugSpawn() {
		super.OnDebugSpawn();
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Scorpion_Evo_Buttstock_Grey" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Scorpion_Evo_40Rnd");
	}
};
class A6_Scorpion_Evo_White : A6_Scorpion_Evo_Base {
	override void OnDebugSpawn() {
		super.OnDebugSpawn();
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "A6_Scorpion_Evo_Buttstock_White" );
		#ifdef A6_OpticScripts		
		inventory.CreateInInventory( "A6_MRS_Optic" );	
		inventory.CreateInInventory( "Battery9V" );
		#endif
		SpawnAttachedMagazine("A6_Mag_Scorpion_Evo_40Rnd");
	}
};