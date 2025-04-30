class DeCraftA6KitBase extends RecipeBase {
    string m_recipeitemone;
	string m_recipeitemtwo;
	string m_DeCraftKitTool;
	override float GetLengthInSecs() {
		return m_AnimationLength;
	}
    override bool CanDo( ItemBase ingredients[], PlayerBase player ) {
		return (GetA6BaseStorageConfig().CanDeCraftKits); 
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight) {
		string name = "";
		name = ingredients[0].Get_KitName();  
		if ( GetA6BaseStorageConfig().EnableCraftLogging ) {
			GetGame().AdminLog("[A6_Base_Storage][Crafting]: " + player.GetIdentity().GetName() + " (" + player.GetIdentity().GetPlainId() + ") decrafted " + ingredients[0].GetType() + " at " + player.GetPosition());
		}	
		MiscGameplayFunctions.TurnItemIntoItemEx(player, new TurnItemIntoItemLambda(ingredients[0], name, player));
	}
}