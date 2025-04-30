class DismantleA6BaseStorage extends RecipeBase {
	string m_DismantleTool;
	override float GetLengthInSecs() { // because dayz multiplies this by 4 for some reason?
		return m_AnimationLength;
	}
	override void Init() {
		m_Name = GetA6BaseStorageConfig().DismantleText;
		m_IsInstaRecipe = false;
		m_AnimationLength = GetA6BaseStorageConfig().DismantleToolTime;
		m_DismantleTool = GetA6BaseStorageConfig().DismantleTool;
		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		//ingredient 1  
		InsertIngredient(0, "A6_Storage_Base");
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[0] = false;
		//ingredient 2	
		InsertIngredient(1, m_DismantleTool);
		m_IngredientAddHealth[1] = -GetA6BaseStorageConfig().DismantleToolDamage;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;
	}
	override bool CanDo( ItemBase ingredients[], PlayerBase player ) {
		A6_Storage_Base storage = A6_Storage_Base.Cast(ingredients[0]);
		if (GetA6BaseStorageConfig().CanDismantleStorage) {
			if (storage && storage.IsEmpty() && storage.IsOpen() && storage.CanBeDismantled()) {
				return true;
			}
		}
		return false;	
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight) {
		string name = "";
		name = ingredients[0].Get_KitName();  
		if ( GetA6BaseStorageConfig().EnableDismantleLogging ) {
			GetGame().AdminLog("[A6_Base_Storage][Dismantle]: " + player.GetIdentity().GetName() + " (" + player.GetIdentity().GetPlainId() + ") Dismantled " + ingredients[0].GetType() + " at " + ingredients[0].GetPosition());
		}	
		MiscGameplayFunctions.TurnItemIntoItemEx(player, new TurnItemIntoItemLambda(ingredients[0], name, player));
	}
}