class A6_308_Muzzle_Base extends A6_Suppressor_Base {}
class A6_AWR_Muzzle : A6_308_Muzzle_Base {}
class A6_TBA_30CB_Muzzle : A6_308_Muzzle_Base {}
class A6_HKG28_Prolonged_Flash_Hider : A6_308_Muzzle_Base {
    override bool CanPutAsAttachment(EntityAI parent) {
        if (!super.CanPutAsAttachment(parent)) {
            return false;
        }
        return parent.IsKindOf("A6_HK417_Base") || parent.IsKindOf("A6_HKG28_Base");
    }
}
class A6_SureFire762_Muzzle : A6_308_Muzzle_Base {}