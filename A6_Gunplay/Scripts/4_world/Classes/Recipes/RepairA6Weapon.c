class RepairA6Weapon extends RecipeBase {	
	override void Init() {
		m_Name = GetA6GunplayModConfig().WeaponRepairKitText;
        m_IsInstaRecipe = false;
        m_AnimationLength = GetA6GunplayModConfig().WeaponRepairKitTime / 4;
        
        m_MinDamageIngredient[0] = -1;
        m_MaxDamageIngredient[0] = 3;
        m_MinQuantityIngredient[0] = 1;
        m_MaxQuantityIngredient[0] = -1;
        m_MinDamageIngredient[1] = 1;
        m_MaxDamageIngredient[1] = -1;
        m_MinQuantityIngredient[1] = -1;
        m_MaxQuantityIngredient[1] = -1;

		InsertIngredient(0,"A6_WeaponRepairKit");
		m_IngredientAddHealth[0] = 0;
        m_IngredientSetHealth[0] = -1;
        m_IngredientAddQuantity[0] = -GetA6GunplayModConfig().WeaponRepairKitHealthUse;
        m_IngredientDestroy[0] = false;
        m_IngredientUseSoftSkills[0] = true;

        InsertIngredient(1,"DefaultWeapon");
        InsertIngredient(1,"ItemSuppressor");

		m_IngredientAddHealth[1] = GetA6GunplayModConfig().WeaponRepairKitAddHealth;
        m_IngredientSetHealth[1] = -1; 
        m_IngredientAddQuantity[1] = 0;
        m_IngredientDestroy[1] = false;
        m_IngredientUseSoftSkills[1] = false;

		m_ResultSetFullQuantity[0] = false;
        m_ResultSetQuantity[0] = -1;
        m_ResultSetHealth[0] = -1;
        m_ResultInheritsHealth[0] = -1;
        m_ResultInheritsColor[0] = -1;
        m_ResultToInventory[0] = -2;
        m_ResultUseSoftSkills[0] = false;
        m_ResultReplacesIngredient[0] = -1;
	}
	override bool CanDo( ItemBase ingredients[], PlayerBase player ) {
        if (ingredients[1].IsKindOf("ItemSuppressor") && GetA6GunplayModConfig().KitCanRepairSupressors == 0) {
            return false;
        } else {
            return true;
        }
    }
    override void Do( ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight ) {}
}