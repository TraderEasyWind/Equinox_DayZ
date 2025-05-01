class A6_M4A1_Muzzle_Base extends A6_Suppressor_Base {}
class A6_M16_FlashHider extends A6_M4A1_Muzzle_Base {}
class A6_CAR15_FlashHider extends A6_M4A1_Muzzle_Base {}
class A6_M4A1_A2_FlashHider : A6_M4A1_Muzzle_Base {}
class A6_M4A1_Surefire_FlashHider : A6_M4A1_Muzzle_Base {}
class A6_M4A1_KAW_Compensator : A6_M4A1_Muzzle_Base {}
class A6_M4A1_AEMB_Muzzle : A6_M4A1_Muzzle_Base {}
class A6_G36_FlashHider : A6_M4A1_Muzzle_Base {}
class A6_M4A1_MK18_Muzzle : A6_M4A1_Muzzle_Base  {
	override bool CanPutAsAttachment( EntityAI parent ) {
		if(!super.CanPutAsAttachment(parent)) {
			return false;
		}
		return parent.IsKindOf("A6_SCARL_Base") || parent.IsKindOf("A6_SCARH_Base");
	}
}