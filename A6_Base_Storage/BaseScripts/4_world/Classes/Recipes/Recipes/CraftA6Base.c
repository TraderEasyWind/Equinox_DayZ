class CraftA6KitBase extends RecipeBase {
    string m_recipeitemone;
	string m_recipeitemtwo;
	override float GetLengthInSecs() {
		return m_AnimationLength;
	}
	override bool CanDo( ItemBase ingredients[], PlayerBase player ) {
		return (GetA6BaseStorageConfig().CanCraftKits); 
    }
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight) {
		ItemBase result;
		Class.CastTo(result, results.Get(0));
		if ( GetA6BaseStorageConfig().EnableCraftLogging ) {
			GetGame().AdminLog("[A6_Base_Storage][Crafting]: " + player.GetIdentity().GetName() + " (" + player.GetIdentity().GetPlainId() + ") crafted " + result.GetType() + " at " + player.GetPosition());
		}	
	}
}