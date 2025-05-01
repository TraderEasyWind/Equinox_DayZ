class DismountMRD extends RecipeBase {	
	override void Init() {
		m_Name = "Dismount Sight";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1.0;
		m_Specialty = 0.02;

		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = -1;
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = -1;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;

		//ingredient 1
		InsertIngredient(0,"Screwdriver");
		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1; 
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		
		//ingredient 2
		InsertIngredient(1,"A6_SigSauerRomeo2_Optic_MRDMount_Base");
		InsertIngredient(1,"A6_RMROptic_MRDMount_Base");
		InsertIngredient(1,"A6_DocterOptic_MRDMount");

		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
	}
	override bool CanDo(ItemBase ingredients[], PlayerBase player) {
		ItemBase ingredient1 = ingredients[1];
		if( ingredient1.IsEmpty() ) {
			return true;
		} else {
			return false;
		}
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight) {
		string pistolOpticName = ingredients[1].ConfigGetString("pistolOpticName");
		string MountName = ingredients[1].ConfigGetString("MountName");
		MiscGameplayFunctions.TurnItemIntoItemEx(player, new TurnItemIntoItemLambda(ingredients[1], "A6_" + pistolOpticName, player));
		player.GetInventory().CreateInInventory("A6_" + MountName);
	}	
}