class A6_AK_Buttstock : ButtstockBase {
	override bool CanPutAsAttachment(EntityAI parent) {
		if (!super.CanPutAsAttachment(parent)) {
			return false;
		}
		return parent.FindAttachmentBySlotName("weaponTubeStockAdapterAK") == NULL;
	}
}
class A6_AK_Plastic_Buttstock : A6_AK_Buttstock {}
class A6_Zhukov_Buttstock : A6_AK_Buttstock {}
class A6_AKM_Buttstock : A6_AK_Buttstock {}
class A6_AKMS_Buttstock : A6_AK_Buttstock {}
class A6_AKS74U_Buttstock : A6_AK_Buttstock {}
class A6_RPK_Buttstock : A6_AK_Buttstock {}
class A6_PT1_Buttstock : A6_AK_Buttstock {}