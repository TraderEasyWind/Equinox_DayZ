modded class PlayerBase extends ManBase {
    override void HideClothing(ItemOptics optic, bool state) {
        super.HideClothing(optic, state);
        array<int> clothingArray = new array<int>;
        Clothing clothes;
        if (state && DayZPlayerCameraOptics.Cast(m_CurrentCamera)) {
            if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT) {
                clothingArray.Insert(InventorySlots.BACK);
                clothingArray.Insert(InventorySlots.SHOULDER);
                clothingArray.Insert(InventorySlots.MELEE);
                clothingArray.Insert(InventorySlots.ARMBAND);
                clothingArray.Insert(InventorySlots.HIPS);
                if (optic && optic.GetCurrentStepFOV() < GameConstants.DZPLAYER_CAMERA_FOV_IRONSIGHTS) {
                    clothingArray.Insert(InventorySlots.BODY);
                    clothingArray.Insert(InventorySlots.VEST);
                }
                SetInvisibleRecursive(true,this,clothingArray);
            }
        } else {
            if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT) {
                clothingArray = {InventorySlots.BACK,InventorySlots.BODY,InventorySlots.VEST,InventorySlots.SHOULDER,InventorySlots.MELEE,InventorySlots.ARMBAND,InventorySlots.HIPS};
                
                SetInvisibleRecursive(false,this,clothingArray);
            }
        }
    }
}  