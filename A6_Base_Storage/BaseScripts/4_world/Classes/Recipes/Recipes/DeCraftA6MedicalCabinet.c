class DeCraftA6MedicalCabinet extends DeCraftA6KitBase {
	override void Init() {
		m_Name = GetA6BaseStorageConfig().DeCraftKitText;
		m_IsInstaRecipe = false;
		m_AnimationLength = GetA6BaseStorageConfig().DeCraftKitToolTime;
		int recipeMakeCost = GetA6BaseStorageConfig().MedicalCabinetRecipeOneQty;
		int recipeResourceCost = GetA6BaseStorageConfig().MedicalCabinetRecipeTwoQty;
		m_recipeitemone = GetA6BaseStorageConfig().MedicalCabinetRecipeOne;
		m_recipeitemtwo = GetA6BaseStorageConfig().MedicalCabinetRecipeTwo;
		m_DeCraftKitTool = GetA6BaseStorageConfig().DeCraftKitTool;
		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = recipeMakeCost;
		m_MaxQuantityIngredient[0] = -1;
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = recipeResourceCost;
		m_MaxQuantityIngredient[1] = -1;
		//ingredient 1  
		InsertIngredient(0, "A6_MedicalCabinet_Kit");
		InsertIngredient(0, "A6_MedicalCabinet_Black_Kit");
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
		//ingredient 2	
		InsertIngredient(1, m_DeCraftKitTool);
		m_IngredientAddHealth[1] = -GetA6BaseStorageConfig().DeCraftKitToolDamage;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
		//result
		AddResult(m_recipeitemone);
		m_ResultSetFullQuantity[0] = false;	
		m_ResultSetQuantity[0] = recipeMakeCost;		
		m_ResultSetHealth[0] = -1;			
		m_ResultInheritsHealth[0] = 0;		
		m_ResultInheritsColor[0] = -1;		
		m_ResultToInventory[0] = -2;		
		m_ResultUseSoftSkills[0] = false;	
		m_ResultReplacesIngredient[0] = -1;	

		AddResult(m_recipeitemtwo);
		m_ResultSetFullQuantity[1] = false;	
		m_ResultSetQuantity[1] = recipeResourceCost;		
		m_ResultSetHealth[1] = -1;			
		m_ResultInheritsHealth[1] = 0;		
		m_ResultInheritsColor[1] = -1;		
		m_ResultToInventory[1] = -2;		
		m_ResultUseSoftSkills[1] = false;	
		m_ResultReplacesIngredient[1] = -1;	
	}
}