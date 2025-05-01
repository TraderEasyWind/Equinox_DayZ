class MountMRD extends RecipeBase {	
	override void Init() {
		m_Name = "Mount Sight";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1.0;
		m_Specialty = 0.02;
		
		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = -1;
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = -1;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;

		//ingredient 1
		InsertIngredient(0,"A6_RMROptic_Base");
		InsertIngredient(0,"A6_SigSauerRomeo2_Optic_Base");
		InsertIngredient(0,"A6_DocterOptic");
		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		
		//ingredient 2
		InsertIngredient(1,"A6_MRDMount");

		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = true;
		m_IngredientUseSoftSkills[1] = false;
	}
	override bool CanDo(ItemBase ingredients[], PlayerBase player) {
		ItemBase ingredient0 = ingredients[0];
		if( ingredient0.IsEmpty() ) {
			return true;
		} else {
			return false;
		}
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight) {
		string OpticName = ingredients[0].ConfigGetString("OpticName");
		string MountName = ingredients[1].ConfigGetString("MountName");
		MiscGameplayFunctions.TurnItemIntoItemEx(player, new TurnItemIntoItemLambda(ingredients[0], "A6_" + OpticName + "_" + MountName, player));
	}
}