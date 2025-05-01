class A6_FAL_Buttstock : ButtstockBase {}
class A6_FAL_Wood_Buttstock : A6_FAL_Buttstock{}
class A6_FAL_Plastic_Buttstock : A6_FAL_Buttstock{}
class A6_FAL_Folding_Buttstock : A6_FAL_Buttstock{}
class A6_SA58_BRS_Buttstock : A6_FAL_Buttstock{}
class A6_SA58_SPR_Buttstock : A6_FAL_Buttstock{}

class A6_Vector_Buttstock : ButtstockBase {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {
			return false;
		}	
		return parent.FindAttachmentBySlotName("weaponTubeStockAdapterVector") == NULL;
	}
}
class A6_Vector_Buttstock_Tan : A6_Vector_Buttstock {}
class A6_Vector_Buttstock_Green : A6_Vector_Buttstock {}
class A6_Vector_Buttstock_White : A6_Vector_Buttstock {}

class A6_Scorpion_Evo_Buttstock : ButtstockBase {}
class A6_Scorpion_Evo_Buttstock_Green : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Buttstock_Tan : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Buttstock_Grey : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Buttstock_White : A6_Scorpion_Evo_Buttstock {}

class A6_Scorpion_Evo_Tactical_Buttstock : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Tactical_Buttstock_Green : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Tactical_Buttstock_Tan : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Tactical_Buttstock_Grey : A6_Scorpion_Evo_Buttstock {}
class A6_Scorpion_Evo_Tactical_Buttstock_White : A6_Scorpion_Evo_Buttstock {}

class A6_UMP45_Buttstock : ButtstockBase {}
class A6_UMP45_Buttstock_Winter : ButtstockBase {}

class A6_Spas12_Buttstock : ButtstockBase {}
class A6_Spas12_Buttstock_Winter : ButtstockBase {}

class A6_Mossberg_Buttstock_Base : ButtstockBase{}
class A6_Mossberg_Buttstock_Wood: A6_Mossberg_Buttstock_Base{}
class A6_Mossberg_Buttstock_Plastic : A6_Mossberg_Buttstock_Base{}
class A6_Mossberg_Buttstock_Plastic_2 : A6_Mossberg_Buttstock_Base{}
class A6_Mossberg_Buttstock_Pistolgrip : A6_Mossberg_Buttstock_Base{}
class A6_Mossberg_Buttstock_Handle_Plastic : A6_Mossberg_Buttstock_Base{}

class A6_MP5_Buttstock_Base : ButtstockBase{}
class A6_MP5_Buttstock : A6_MP5_Buttstock_Base{}
class A6_MP5_Buttstock_Wood : A6_MP5_Buttstock_Base{}
class A6_MP5_Buttstock_Folding : A6_MP5_Buttstock_Base{}
class A6_MP5_Buttstock_Retractable : A6_MP5_Buttstock_Base{}

class A6_SCAR_Buttstock_Base : ButtstockBase {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if ( !super.CanPutAsAttachment(parent) ) {
			return false;
		}	
		return parent.FindAttachmentBySlotName("weaponTubeStockAdapterScar") == NULL;	
	}
}

class A6_SCAR_16S17S_Buttstock_Black : A6_SCAR_Buttstock_Base {}
class A6_SCAR_16S17S_Buttstock_Tan : A6_SCAR_Buttstock_Base{}
class A6_SCAR_SSR_Buttstock_Black : A6_SCAR_Buttstock_Base{}
class A6_SCAR_SSR_Buttstock_Tan : A6_SCAR_Buttstock_Base{}

class A6_G36_Buttstock_Base : ButtstockBase{}
class A6_G36_Buttstock : A6_G36_Buttstock_Base{}
class A6_G36_Buttstock_KV : A6_G36_Buttstock_Base{}