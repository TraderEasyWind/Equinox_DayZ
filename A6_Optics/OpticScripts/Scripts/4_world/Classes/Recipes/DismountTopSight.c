class DismountTopSight extends RecipeBase {	
	override void Init() {
		m_Name = "Dismount Top Sight";
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
		InsertIngredient(0,"Screwdriver");

		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1; 
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		//ingredient 2
		InsertIngredient(1,"A6_SigSauerBravo4Optic_SigSauerRomeoXLOptic");
		InsertIngredient(1,"A6_SigSauerBravo4Optic_DocterOptic_MRDMount");
		InsertIngredient(1,"A6_SigSauerBravo4Optic_RMROptic_Black_MRDMount");
		InsertIngredient(1,"A6_SigSauerBravo4Optic_SigSauerRomeo2_Optic_MRDMount");
		InsertIngredient(1,"A6_SigSauerBravo4Optic_SigSauerRomeo0_Optic");

		InsertIngredient(1,"A6_LeupoldOptic_SigSauerRomeoXLOptic");
		InsertIngredient(1,"A6_LeupoldOptic_DocterOptic_MRDMount");
		InsertIngredient(1,"A6_LeupoldOptic_RMROptic_Black_MRDMount");
		InsertIngredient(1,"A6_LeupoldOptic_SigSauerRomeo2_Optic_MRDMount");
		InsertIngredient(1,"A6_LeupoldOptic_SigSauerRomeo0_Optic");
		
		InsertIngredient(1,"A6_AcogOptic_RMROptic_Base");
		InsertIngredient(1,"A6_AcogOptic_SigSauerRomeo2_Optic_Base");
		InsertIngredient(1,"A6_AcogOptic_DocterOptic_Base");

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
		string MainOpticName = ingredients[1].ConfigGetString("MainOpticName");
		string SubOpticName = ingredients[1].ConfigGetString("SubOpticName");
		MiscGameplayFunctions.TurnItemIntoItemEx(player, new TurnItemIntoItemLambda(ingredients[1], "A6_" + SubOpticName, player));
		player.GetInventory().CreateInInventory("A6_" + MainOpticName);
	}	
}