modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{	super.RegisterRecipies();
        RegisterRecipe(new CraftUnfinishedDatsunCab);
        RegisterRecipe(new CraftfinishedDatsunCab);		
	}
}